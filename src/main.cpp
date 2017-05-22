//============================================================================
// Name        : HelloWorld.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include "001.cc"
#include "003.cc"
#include "005.cc"
#include "006.cc"
#include "007.cc"
#include "008.cc"
#include "009.cc"
#include "011.cc"

using namespace std;

bool isSpace( char a ) {

	return a == ' ';
}


int main() {

/*	Solution003 s003;

	string s1 = "tmmxurt";

	int n = s003.lengthOfLongestSubstring(s1);

	cout << n << endl;

	cout << s1.length() << endl;


	Solution005 s005;

	cout << s005.longestPalindrome("a")<<endl;


	Solution006 s006;

	string result006a = s006.convert( "PAYPALISHIRING", 3 );

	cout << result006a << endl;


	Solution007 s007;

	cout << INT_MIN << endl;

	cout << INT_MAX << endl;

	cout << s007.reverse( -2147483648 ) << endl;




	Solution009 s009;

	cout << s009.isPalindrome( 1221 ) << endl;

	cout << INT_MAX << endl;

	cout << INT_MIN << endl;





	Solution008 s008;
    cout << s008.myAtoi( "   - 321" ) << endl;

    cout << s008.myAtoi( "123 456" ) << endl;
    cout << s008.myAtoi( "    +0004500" ) << endl;
    cout << s008.myAtoi( "    -0012a42" ) << endl;
    cout << s008.myAtoi( "+1" ) << endl;
    cout << s008.myAtoi( "   010" ) << endl;
    cout << s008.myAtoi( "    +0a32" ) << endl;
    cout << s008.myAtoi( "    +0 0123" ) << endl;
    */

	Solution011 s011;

	vector<int> heights( {2,5,1,7,2,4} );

	cout<<s011.maxArea(heights)<<endl;

    return 0;
}
