/*
    01背包问题
    F[0,0..V ] ← 0 
    for i ← 1 to N 
        for v ← V to Ci 
            F[v] ←max{F[v],F[v−Ci] + Wi}

    不优化：F[i,v] ←max{F[i−1,v],F[i−1,v−Ci] + Wi} 
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void print(vector<int>& dp) {
    //print the state
    for(int j = 0 ; j < dp.size(); j++) {
        cout << dp[j] << " ";
    }
    cout << endl;
}

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
        print(dp);
    }
    return 0;

}
