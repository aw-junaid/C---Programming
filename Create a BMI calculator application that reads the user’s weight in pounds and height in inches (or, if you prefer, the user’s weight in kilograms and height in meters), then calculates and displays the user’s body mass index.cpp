#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // read the user's weight in pounds and height in inches
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;

    // calculate the BMI
    bmi = (weight * 703) / (height * height);

    // display the result
    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;

    return 0;
}
