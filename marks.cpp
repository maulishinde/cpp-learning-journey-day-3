#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks = ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Excellent" << endl;
    }
    else if (marks >= 75) {
        cout << "Very Good" << endl;
    }
    else if (marks >= 50) {
        cout << "Good" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}