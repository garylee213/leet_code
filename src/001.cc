#include <vector>
#include <map>

using namespace std;

class Solution001 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> small, large;

    	int mid = target / 2;

    	bool isEven = ( target % 2 == 0 );

    	bool currentIsSmall = false;

    	vector<int> results;

    	for( size_t i = 0; i < nums.size(); i++ ) {

    		int current = nums[ i ];

    		if( nums[ i ] <= mid ) {

    		    if( isEven && current == mid ) {

    				map<int,int>::iterator it = small.find( mid );

    				if( it != small.end() ) {

    					results.push_back( i < it -> second ? i : it -> second );

    					results.push_back( i < it -> second ? it -> second : i );

    					return results;
    				}
    			}

    			currentIsSmall = true;

    			small[ current ] = i;
    		}
    		else {

    			currentIsSmall = false;

    			large[ current ] = i;
    		}

    		map< int, int >::iterator it;

    		if( currentIsSmall ) {

    			it = large.find( target - current );

    			if( it != large.end() ) {

    				results.push_back( i < it -> second ? i : it -> second );

    				results.push_back( i < it -> second ? it -> second : i );

    				break;
    			}
    		}
    		else {

    			it = small.find( target - current );

    			if( it != small.end() ) {

    				results.push_back( i < it -> second ? i : it -> second );

    				results.push_back( i < it -> second ? it -> second : i );

    				break;
    			}
    		}
    	}

    	return results;
    }
};
