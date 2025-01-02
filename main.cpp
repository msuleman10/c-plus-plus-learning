#include <iostream>
using namespace std;

int main(){
    // Simple Calculator
    
    int firstValue = 0;
    int lastValue = 0;
    string mathOpreter;
    bool oprater = false;
    cout << "add your first value of math: ";
    cin >> firstValue;
    cout << "add your last value of math: ";
    cin >> lastValue;
    cout << "add your math oprater like(+, -, *, /, %) : ";
    cin >> mathOpreter;

    int output;
    bool outputString = false;

    if (mathOpreter == "+"){
        output = firstValue + lastValue;
    } else if (mathOpreter == "-"){
        output = firstValue - lastValue;
    } else if (mathOpreter == "/"){
        output = firstValue / lastValue;
    } else if (mathOpreter == "*"){
        output = firstValue * lastValue;
    } else if (mathOpreter == "%"){
        output = firstValue % lastValue;
    }else{
        outputString = true;
        // outputString = "oprater is invalid: " + mathOpreter;
        // cout << "oprater is invalid: " << mathOpreter << endl;
    }

    if (outputString)
    {
        cout << "oprater is invalid: " << mathOpreter << endl;
    }else{
        cout << "ANS: " << output << endl;
    }
    
    return 0;
}

