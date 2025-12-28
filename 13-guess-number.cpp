#include <iostream>
#include <string>

using namespace std;

int main() {
     int q;
     int w;
     q = 1;
     char ch;
    ch = 'y';

    while (ch == 'y') {


        // Get a different random number each time the program runs
        srand(time(0));

        // Generate a random integer
        int rawNumber1 = rand();
        int random1 = (rawNumber1 % 101);

        cout << "Round " << q << "\n";
        cout << "Input guess number:";
        cin >> w;

        if (w < random1) {
            cout << "Too little, try again\n";
            q ++;
        } else if (w > random1) {
            cout << "Too mush, try again\n";
            q ++;
        } else {
            cout << "You get correct!!\n";
            cout << "Total guessed:" << q;
            ch = 'n';
        }
    
    }    










































    return 0;
}