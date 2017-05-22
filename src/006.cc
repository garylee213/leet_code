#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution006 {
public:
    string convert(string s, int numRows) {

    	if( numRows == 1 ) return s;

    	string result;

    	vector<string> sections( numRows, string("") );

    	int charPerGroup = 2 * numRows - 2;

    	int colsPerGroup = numRows - 1;

        for( int i = 0; i < s.length(); i++ ) {

        	int group = i / charPerGroup;

        	int innerIdx = i % charPerGroup;

        	int row = innerIdx < numRows ? innerIdx : (  charPerGroup - innerIdx );

        	int col = innerIdx < numRows ? 0 : ( innerIdx - numRows + 1 );

        	col += group * colsPerGroup;

        	( sections[ row ] ).push_back( s[i] );
        }

        for( string t : sections ) {

        	result += t;
        }

        return result;
    }
};
