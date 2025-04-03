#include <iostream>
#include <string>

using namespace std;

int main()
{
    float max = 0;
    float score = 0;
    float percent = 0;

    cout << "Welcome to the test score calculator!" << endl << endl;
    cout << "Enter the maximium mark of the test: ";
    
    cin >> max;

    cout << "Please enter the achieved mark: ";

    cin >> score;
    percent = score / max * 100;

    if (percent <= 59.99 && percent >= 0) {
        cout << "Your grade is: F " << endl;
   }

    if (percent <= 66.99 && percent >= 60) {
        cout << "Your grade is: D " << endl;
    }

    if (percent <= 69.99 && percent >= 67) {
        cout << "Your grade is: D+ " << endl;
    }

    if (percent <= 72.99 && percent >= 70) {
        cout << "Your grade is: C- " << endl;
    }

    if (percent <= 76.99 && percent >= 73) {
        cout << "Your grade is: C " << endl;
    }

    if (percent <= 79.99 && percent >= 77) {
        cout << "Your grade is: C+ " << endl;
    }

    if (percent <= 82.99 && percent >= 80) {
        cout << "Your grade is: B- " << endl;
    }

    if (percent <= 86.99 && percent >= 83) {
        cout << "Your grade is: B " << endl;
    }

    if (percent <= 89.99 && percent >= 87) {
        cout << "Your grade is: B+ " << endl;
    }

    if (percent <= 92.99 && percent >= 90) {
        cout << "Your grade is: A- " << endl;
    }
    
    if (percent <= 98 && percent >= 93) {
        cout << "Your grade is: A " << endl;
    }

    if (percent <= 100 && percent >= 99) {
        cout << "Your grade is: B+ " << endl;
    }


}
