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

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;   
}

void bubble_sort(vector <int> &arr){
    int N = (int)arr.size();
    int swapped;
    for(int i = 0; i < N; i++){
        swapped = 0;
        for(int j = 0; j < N - i - 1; j++){
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }       
        }
        if(!swapped) break;
    }
    return;
}


void selection_sort(vector <int> &arr){
    int N = sz(arr);
    for(int i = 0; i < N; i++){
        int mini = i;
        for(int j = i; j < N; j++){
            if(arr[mini] > arr[j]) mini = j;
        }
        if(i != mini) swap(&arr[i], &arr[mini]);
    }
    return;
}


void insertion_sort(vector <int> &arr){
    int N = sz(arr);
    for(int i = 1; i < N; i++){
        int j = i - 1, temp = arr[i];
        while(arr[j] > temp && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; 
    }
    return;
}

void merge(vector <int> &arr, int l, int r){
    int m = (l + r) / 2; 
    int i = l, j = m + 1;
    vector <int> temp;
    while(i < m + 1 || j < r + 1){
        if(i == m + 1) temp.push_back(arr[j++]);
        else if(j == r + 1) temp.push_back(arr[i++]); 
        else if(arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    for(int i = 0; i < sz(temp); i++) arr[l + i] = temp[i];
    return;
}

void merge_sort(vector <int> &arr, int l, int r){
    int m = (l + r) / 2;
    if(l == r) return;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, r);
    return;
}

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector <int> req(N);
    for(int i = 0; i < N; i++) cin >> req[i];

    // bubble_sort(req);
    // merge_sort(req, 0, N - 1);
    // selection_sort(req);
    insertion_sort(req);
    for(int i = 0; i < N; i++) cout << req[i] << " ";
    cout << endl;

    return 0;
}

