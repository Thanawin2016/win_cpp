#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    int w;
    q = 1;
        
    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    int rawNumber1 = rand();
    int random1 = (rawNumber1 % 101);

    while (true) {
        cout << "Round " << q << "\n";
        cout << "Input guess number:";
        cin >> w;

        if (w < random1) {
            cout << "Too little, try again\n";
            q ++;
        } else if (w > random1) {
            cout << "Too much, try again\n";
            q ++;
        } else {
            cout << "You guessed correct!!\n";
            cout << "Total guessed:" << q;
            break;
        }
        cout << "\n";
    }    

    return 0;
}