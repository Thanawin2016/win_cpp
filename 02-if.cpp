#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    int y;
    int z;

    cout << "Input x:";
    cin >> x;
    cout << "Input y:";
    cin >> y;
    cout << "Input z:";
    cin >> z;

    // if (x > y) {
    //     cout << "x more than y\n";
    //     cout << "x win";
    // } else if (y > x) {
    //     cout << "y more than x\n";
    //     cout << "y win";
    // } else {
    //     cout << "x equal y or y equal x\n";
    // }    

    // Check who is largest
    if (x > y && x > z) {
        cout << "x is largest\n";
    } else if (y > x && y > z) { 
        cout << "y is largest\n";
    } else if (z > y && z > x) {
        cout << "z is largest\n";
    } 
    
    // Check who is smallest
    if (x < y && x < z) {
        cout << "x is smallest\n";
    } else if (y < x && y < z) { 
        cout << "y is smallest\n";
    } else if (z < y && z < x) {
        cout << "z is smallest\n";
    }  
    
    // Check all are equal
    if (z == x && z == y) {
        cout << "x & y & z are equal"; 
    } 

    return 0;
}