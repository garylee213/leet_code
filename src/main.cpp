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
#include "014.cc"
#include "015.cc"
#include "016.cc"
#include "017.cc"
#include "018.cc"
#include "022.cc"
#include "029.cc"
#include "034.cc"
#include "035.cc"
#include "046.cc"
#include "048.cc"

using namespace std;

bool isSpace(char a) {

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


	 Solution011 s011;

	 vector<int> heights( {2,5,1,7,2,4} );

	 cout<<s011.maxArea(heights)<<endl;



	 Solution014 s014;

	 vector<string> strs( {"" } );

	 vector<string> strs1( {"aaa", "aa", "aaa" } );

	 cout << s014.longestCommonPrefix( strs ) << endl;


	 Solution015 s015;

	 vector<int> nums({1, -1, -1, 0});

	 for( auto triplet : s015.threeSum(nums) ) {

	 cout << "[ "<< triplet[0] <<", "<<triplet[1]<<", "<<triplet[2]<<" ]"<<endl;
	 }


	 Solution016 s016;

	 vector<int> nums({-55,-24,-18,-11,-7,-3,4,5,6,9,11,23,33} );

	 cout << s016.threeSumClosest( nums, 0 ) <<endl;


	 Solution017 s017;

	 vector<string> res = s017.letterCombinations( "23" );

	 for( string s : res ) {

	 cout << s << endl;
	 }



	 Solution018 s018;

	 vector<int> nums({0,1,5,0,1,5,5,-4});

	 vector<vector<int>> res = s018.fourSum(nums,11);

	 for( vector<int> v : res ) {

	 for( int i : v ) {

	 cout << i << endl;
	 }
	 }

	 Solution022 s022;

	 vector<string> res = s022.generateParenthesis(4);

	 for( string s : res ) {

	 cout << s <<endl;
	 }


	 Solution029 s029;

	 cout << s029.divide( 10, -3)<<endl;

	 cout << (7>>1) <<endl;


	 Solution034 s034;

	 vector<int> nums({1, 2,3,3,3, 8});

	 vector<int> res = s034.searchRange(nums, 4);

	 for( int i : res ) {

	 cout << i <<endl;
	 }

	Solution035 s035;

	vector<int> nums( { 1, 3, 5, 6 });

	cout << s035.searchInsert(nums, 5) << endl;

	cout << s035.searchInsert(nums, 2) << endl;

	cout << s035.searchInsert(nums, 7) << endl;

	cout << s035.searchInsert(nums, 0) << endl;

	vector<int> nums( { 3,1, 5, 6 });

	sort( nums.rbegin(), nums.rend() );

	for( int i = 0; i < nums.size(); i++ ){

		cout << nums[i] << " ";
	}

	cout << endl;



	Solution046 s046;

	vector<int> nums({1,2,3,4,5});

	vector<vector<int>> res = s046.permute(nums);

	for( vector<int> v : res ) {

		for( int i : v ) {

			cout<< i << " ";
		}

		cout<<endl;
	}
*/
	Solution048 s048;

	vector<vector<int>> matrix({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}});

	for( vector<int> row : matrix ) {

		for( int col : row ) {

			cout << col << '\t';
		}
		cout <<endl;
	}

	s048.rotate(matrix);

	cout<<"===================="<<endl;
	int n = matrix.size();

	for( vector<int> row : matrix ) {

		for( int col : row ) {

			cout << col << '\t';
		}
		cout <<endl;
	}

	return 0;
}
