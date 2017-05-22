#include <vector>
using namespace std;


class Solution011 {
public:
    int maxArea(vector<int>& height) {

    	int area;

    	int left = 0, right = height.size() - 1;

    	int max = min( height[left], height[right] ) * ( right - left );

    	while( left < right ) {

    		// the area is determined by the shorter side, so always move the shorter side to check the next.
    		if( height[left] < height[right] ) {

    			left += 1;
    		}
    		else {

    			right -= 1;
    		}

    		area = min( height[left], height[right] ) * ( right - left );

    		if( area > max ) {

    			max = area;
    		}
    	}

    	return max;
    }
};
