#include <iostream>
#include <string>

using namespace std;

int main() {
    int score;
    string grade;

    cout << "Please Input 1-100 but you can only use 1 number\n";
    cout << "Input Score:";    
    cin >> score;
    
    
    if ( score >= 90 && score <= 100) {
        grade = "A+";
    } else if ( score >= 80 && score <= 89) {
        grade = "A";
    } else if ( score >= 70 && score <= 79) {
        grade = "B+";
    } else if ( score >= 60 && score <= 69) {
        grade = "B";
    } else if ( score >= 50 && score <= 59) {
        grade = "C+";
    } else if ( score >= 40 && score <= 49) {
        grade = "C";
    } else if ( score >= 0 && score <= 39) {
        grade = "F";                                                                                
    } else {
        cout << "ERROR_404";
    }

    if (grade != "") {
        cout << "Your grade is " << grade << "\n"; 
    }
    return 0;
}