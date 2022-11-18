using namespace std;
#include <iostream>
#include <bits/stdc++.h>

//adjust f accordingly
//make sure f is  differentiable
double f(double x){
    return x * x - 5;
}

//adjust fprime accordingly
double fprime(double x){
    return 2 * x;
}

double calcVal(double initalX, int its){
    double val = initalX;
    for (int i = 0; i < its; ++i) {
        double derrivative = fprime(val);
        if(derrivative == 0) return -DBL_MAX;
        val -= f(val) / fprime(val);
    }
    return val;
}

int main() {
    cout << "-------Newton Method Program-------" << "\n";
    cout << "What is the inital estimate : ";
    int initalX, its;
    cin >> initalX;
    cout << "How many interations of Newton's Method do you want to run: ";
    cin>> its;
    double val = calcVal(initalX, its);
    if (val == -DBL_MAX)
        cout << "Newton's Method could not be run on this dataset" << "\n";
    else
        cout << "The value returned from Newton's method is : " << val;
}
