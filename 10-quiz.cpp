#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    int w;
    int e = 0;
    int r;

    // Get a different random number each time the program runs
    srand(time(0));

    cout << "Input total round:";
    cin >> r;

    for (int i = 0; i < r; i++) {
        // Generate a random integer
        int rawNumber1 = rand();
        int rawNumber2 = rand();

        int random1 = (rawNumber1 % 10);
        int random2 = (rawNumber2 % 10);

        cout << (i + 1) << ". " << random1 << " + " << random2 << " = ";
        cin >> q;

        w = random1 + random2; 

        if (q == w ) {
            cout << "Your answer is correct\n";
            e++;
        } else {
            cout << "Your answer is wrong, Answer is " << w << "\n";
        }
    }                    

    cout << "\n";
    cout << "Your score is " << e << "/" << r;

    return 0;
}