#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int a1[] = {5, 4, 7, 2, 6};
    int a2[] = {12, 3 , 10, 3 , 6};
    vector<int> cost = vector<int>(a1, a1 + 5);
    vector<int> value = vector<int>(a2, a2 + 5);
    int total = 13; // total capacity

    vector<int> dp(total + 1 , 0);
    for(int i = 0 ; i < cost.size(); i++ ) {
        for(int v = total; v >= cost[i]; v-- ) {
            dp[v] = max(dp[v], dp[v - cost[i] ] + value[i]);
        }
    }

    for(int i = 0 ; i < dp.size(); i++) {
        cout << "largest value: " << dp[i] << ", with total weight: "<<i << endl; 
    }
    
    return 0;

}
