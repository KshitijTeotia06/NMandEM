using namespace std;
#include <iostream>
#include <cmath>
#define E 2.71828182845904523536

//adjust fprime accordingly
double fprime(double x, double y){
    return 2.0 * x + 3.0 * y;
}

double calcVal(pair<double, double> start, double its, double step){
    pair<double, double> pt = start;
    double d = fprime(start.first, start.second);
    for (double i = 0; i < its; ++i) {
        pt.first += step;
        pt.second += d * step;
        d = fprime(pt.first, pt.second);
    }
    return pt.second;
}

int main() {
    cout << "-------Euler Method Program-------" << "\n";
    double initalX, initalY, targetX, step;
    cout << "What is the inital value of x : ";
    cin >> initalX;
    cout << "What is the inital value of y for that x : ";
    cin >> initalY;
    cout << "What is the step size: ";
    cin >> step;
    cout << "What value of x do you want find f(x) for : ";
    cin >> targetX;
    double its = ((targetX - initalX)/step);
    cout << "The value returned from Euler's method is : " << calcVal({initalX, initalY}, its, step);
}
