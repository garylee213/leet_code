#include <string>
#include <iostream>

using namespace std;

// check Manacher's algorithm for O(n) algorithm.

class Solution005 {
public:
    string longestPalindrome(string s) {

    	if( s.length() <= 1 ) return s;

    	int n = s.length();

    	// middle point of the palindrome
    	int mid, j, max = 0, current = 0;

    	string odd;

    	string even;

    	for( mid = 0; mid < n; ++mid ) {

    		for( j = 0; ( mid - j >= 0 && mid + j < n ); ++j ) {

    			if( s[ mid - j ] != s[ mid + j ] ) break;

    			current = j * 2 + 1;
    		}

    		if( current > max ) {

    			max = current;

    			odd = s.substr( mid - j + 1, max );
    		}

    		current = 0;

    		for( j = 0; ( mid - j >= 0 && mid + j + 1 < n ); ++j ) {

    			if( s[ mid - j ] != s[ mid + j + 1 ] ) break;

    			current = j * 2 + 2;
    		}

    		if( current > max ) {

    			max = current;

        		even = s.substr( mid - j + 1, max );
    		}
    	}

    	return odd.length() > even.length() ? odd : even;
    }
};
