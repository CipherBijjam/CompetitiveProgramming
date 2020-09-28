// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#define lli long long
#define sz(A) (int)A.size()
#define lsz(A) (long long)A.size()
#define INT_INF (int)(1e9 + 7)


// Compiling command
// g++ -02 -Wall <question_name>.cpp -o <question_name>

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Taking input
    int N;
    cin >> N;
    
    vector <int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i]; 

    int ans = -INT_INF;
    
    // O(n^3) approach - taking every subarray and calculating its sum
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    
    // O(n^2) approach - using the sum of previous subarray to calculate the currrent sum
    ans = -INT_INF;
    for(int i = 0; i < N; i++){
        int sum = 0;
        for(int j = i; j < N; j++){
            sum += arr[j];
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;

    // O(n) approach - Find the max subarray which ends with the current element using DP
    ans = -INT_INF;
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum = max(sum + arr[i], arr[i]);
        ans = max(sum, ans);
    }
    cout << ans << endl;

    
    return 0;
}

