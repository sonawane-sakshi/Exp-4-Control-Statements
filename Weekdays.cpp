//sakshi sonawane
//PRN:24070123505
//Experiment 5
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number between 1 and 7: ";
    cin >> num;

    switch (num) {
        case 1: {
            cout << "It is Sunday" << endl;
            break;
        }
        case 2: {
            cout << "It is Monday" << endl;
            break;
        }
        case 3: {
            cout << "It is Tuesday" << endl;
            break;
        }
        case 4: {
            cout << "It is Wednesday" << endl;
            break;
        }
        case 5: {
            cout << "It is Thursday" << endl;
            break;
        }
        case 6: {
            cout << "It is Friday" << endl;
            break;
        }
        case 7: {
            cout << "It is Saturday" << endl;
            break;
        }
        default: {
            cout << "Invalid input" << endl;
            break;
        }
    }
}
/*
**Output**
Enter a number between 1 and 7: 3
It is Tuesday
*/

