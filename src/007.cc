#include <stack>
#include <cmath>
#include <climits>

using namespace std;

class Solution007 {
public:
    int reverse(int x) {

    	if( x == INT_MAX || x == INT_MIN ) return 0;

    	int sign = x >= 0 ? 1 : -1;

    	if( x < 0 ) x = -x;

    	stack<int> digits;

    	do{
    		digits.push( x % 10 );

    		x /= 10;

    	}while( x > 0 );

    	int p = 0;

    	int result = 0;

    	while( ! digits.empty() ) {

    		int current = digits.top();

    		if( digits.top() > INT_MAX / pow( 10.0, p ) ) return 0;

    		int temp = digits.top() * pow( 10, p );

    		if( temp > INT_MAX - result ) return 0;

    		result += temp;

    		digits.pop();

    		++p;
    	}

    	return result * sign;

    }
};

