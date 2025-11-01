#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    int w;
    char e;
    int r;

    cout << "Input your number:";
    cin >> r;
    cout << "Input your operation:";
    cin >> e;
    cout << "Input your number:";
    cin >> w;

    if (e == '*') {
        q = (r * w);  
    } else if (e == '/') {
        q = (r / w);
    }  else if (e == '+') {
        q = (r + w); 
    }  else if (e == '-') {
        q = (r - w);
    }   else if (e == '%') {
        q = (r % w);      
    } else {
        cout << "):ERROR_404):";
    }
    
    if (e == '*' || e == '/' || e == '+' || e == '-' || e == '%') {
       cout << r << e << w << "=" << q;
    }

    return 0;
}