#include <iostream>
using namespace std;

int main(){
    int age;

    cout << " Enter your age = ";
    cin >> age;
    
    if (age >= 18){
    cout << "Your are an adult " << endl;
    }
    else {
        cout << "Your not an adult " << endl;
    }
    return 0;
}