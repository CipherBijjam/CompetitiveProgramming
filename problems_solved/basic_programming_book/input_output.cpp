#include <iostream>
#include <string>


using namespace std;

int main(int argc, char const *argv[]){
    
    // To make cin and cout work as fast as scanf and printf
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Basic input and output
    int x, y;
    cin >> x >> y;
    cout << x << " " << y;

    // To take input which contains spaces
    string s;
    getline(cin, s);

    // Easy way to read inputs from a file and write output to a file by using cin and cout
    freopen("<file_name>", "r", stdin);
    freopen("<file_name>", "w", stdout);
    cin >> x;
    cout << y;

    // When unknown amount of data (useful to read files)
    while(cin >> x){

    }

    return 0;
}
