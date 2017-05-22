#include <cmath>
using namespace std;


class Solution009 {
public:

	int getNumOfDigits( int x ) {

		int n = 1;

		int x1 = x / 10;

		while( x1 != 0 ) {

			++n;

			x1 /= 10;
		}

		return n;
	}

    bool isPalindrome(int x) {

        if( x < 0 ) return false;

    	int n =  getNumOfDigits( x );

    	if( n == 1 ) return true;

    	int highestPow = n - 1;

    	int left = x;

    	int right = x;

    	for( int i = 0; i <= n / 2 - 1; i++ ) {

    		int leftDivider = pow( 10, highestPow - i );

    		int leftDigit = left / leftDivider;

    		int rightDigit = right % 10;

    		if( leftDigit != rightDigit ) return false;

    		left -= leftDigit * leftDivider;

    		right /= 10;
    	}

    	return true;
    }
};
