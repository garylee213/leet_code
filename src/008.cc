#include <algorithm>
#include <stack>
#include <climits>
#include <iostream>

using namespace std;

class Solution008 {
public:

    int myAtoi(string str) {

        if( str.empty() ) return 0;

    	int sign;

    	stack<int> digits;

    	bool valid = true;

    	bool finished = false;

    	bool numFound = false;

    	bool hasLeadingZero = false;

    	bool nonZeroDigitFound = false;

    	bool hasSign = false;

    	for( string::iterator it = str.begin(); it != str.end(); ++it ) {

    		char a = *it;

    		if( a == ' ' ) {

    			if( numFound ) {

    				finished = true;

    				break;
    			}
    			else if( hasSign ) {

    				valid = false;

    				break;
    			}
    			else continue;
    		}

    	    if( a == '+' || a == '-' ) {

    	        if( hasSign ) {

    	        	if( numFound ) {

    	        		finished = true;
    	        	}
    	        	else {

    	        		valid = false;
    	        	}

    	        	break;
    	        }
    	        else {

    	        	if( numFound ) {

    	        		finished = true;

    	        		break;
    	        	}
    	        	else {

    	        		hasSign = true;

    	        		sign = a == '+' ? 1 : -1;

    	        		continue;
    	        	}
    	        }
    	    }

    	    int ia = a - '0';

    	    if( ia == 0 ) {

    	    	if( ! numFound ) {

    	    		hasLeadingZero = true;

    	    		numFound = true;
    	    	}
    	    	else if( nonZeroDigitFound ) {

    	    		digits.push( ia );
    	    	}

    	    	continue;
    	    }



    		if( ia > 0 && ia <= 9 ) {

    			numFound = true;

    			if( ! nonZeroDigitFound ) {

    				nonZeroDigitFound = true;
    			}

    			digits.push( ia );
    		}
    		else {

    			finished = true;

    			break;
    		}
    	}

    	if( ! valid ) return 0;

    	if( ! hasSign ) {

    	    sign = 1;
    	}

    	if( digits.empty() ) return 0;

    	int p = 0;

    	int result = 0;

    	while( ! digits.empty() ) {

    		int digit = digits.top();

    		int temp = digit * pow( 10.0, p ) * sign;

    		if( ( sign == -1 && result > INT_MIN - temp ) || ( sign == 1 && result < INT_MAX - temp ) ) {

    		    result += temp;

    		    digits.pop();

    		    ++p;
    		}
    		else {

    			return sign == -1 ? INT_MIN : INT_MAX;
    		}
    	}

    	return result;
    }
};
