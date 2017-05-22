#include <map>
#include <string>
#include <iostream>

using namespace std;


//scan from left to right, mark the first and last element.

class Solution003{
public:
	int lengthOfLongestSubstring(string s) {

		if( s.empty() ) return 0;

		if( s.length() == 1 ) return 1;

		// store the indices of letters that've already appeared.
		map<char,int> indices;

		size_t first = 0;

		indices[s[first]] = first;

		size_t last = 1;

		int maxLength = 0;

		char letter;

		//distance between first and last
		int distance;

		map<char,int>::iterator repeat;

		while( last <= s.length() ) {

			distance = last - first;

			if( last == s.length() ) break;

			letter = s[last];

			repeat = indices.find(letter);

            // If a repeating letter is found and it is after the first letter, the distance may be the new max.
		    // If the repeat is before the first, ignore it.
			if( repeat != indices.end() && repeat->second >= first ) {

				if( distance > maxLength ) {

					maxLength = distance;
				}

				first = repeat->second + 1;

				repeat->second = last;
			}
			else {

				indices[letter] = last;
			}

			++last;
		}

		// When the last passed the end of the string, make a final comparison.
		if( distance > maxLength ) {

			maxLength = distance;
		}

		return maxLength;
	}
};
