// #include <bits/stdc++.h>

#include <iostream>

using namespace std;

#define lli long long
#define sz(A) (int)A.size()
#define lsz(A) (long long)A.size()


// Compiling command
// g++ -02 -Wall <question_name>.cpp -o <question_name>

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Remainder of negitive numbers is negitive ( needed when we are using modular operation after subtraction operation )
    int z, m;
    z = z % m;
    if(z < 0) z += m;
    
    // Formula for (a/b) * m = ((a % m) * ((b ^ (m - 2)) % m)) % m; 

    // double - 64 bit number, long double - 80 bit number
    float x = 0.3 * 3 + 0.1, y;
    printf("%.20f", x);
    cout.precision(2);
    cout << x << endl;

    // With floats there will be rounding errors. So for comparing floating numbers use the below function
    if(abs(x - y) < 1e-9){
        // both are equal
    }

    return 0;
}

