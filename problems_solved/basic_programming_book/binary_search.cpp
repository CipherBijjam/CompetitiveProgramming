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
int binary_search(vector <int> arr, int x){
    int n = sz(arr);
    int l = 0, r = n - 1, m = 0;
    while(l < r){
        m = (l + r) / 2;
        if(arr[m] > x) r = m - 1;
        else if(arr[m] < x) l = m + 1;
        else break; 
    }
    if(arr[m] == x) return m;
    else return -1;
}

int jump_binary_search(vector <int> arr, int x){
    int n = sz(arr), curr = 0;
    for(int b = n / 2; b > 0; b /= 2){
        while(curr + b < n && arr[curr + b] <= x) curr += b;
    }
    if(arr[curr] == x) return curr;
    else return -1;
}

int lower_bound_binary_search(vector <int> arr, int x){
    int n = sz(arr);
    int l = 0, r = n, m = 0;
    while(l < r - 1){
        m = (l + r) / 2;
        if(arr[m] >= x) r = m;
        else if(arr[m] < x) l = m + 1;
    }
    if(arr[l] == x) return l;
    else return r;
}

int upper_bound_binary_search(vector <int> arr, int x){
    return lower_bound_binary_search(arr, x + 1);
}

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector <int> input(N, 0);

    for(int i = 0; i < N; i++) cin >> input[i];
    
    sort(input.begin(), input.end());

    int x;
    cin >> x;
    // cout << binary_search(input, x) << endl;
    // cout << jump_binary_search(input, x) << endl;
    cout << lower_bound_binary_search(input, x) << endl;
    cout << upper_bound_binary_search(input, x) << endl;

    return 0;
}

