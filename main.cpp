#include <bits/stdc++.h>

using namespace std;

//using a map instead of switch statement to store the values of Roman numerals for quicker operation
map<char, int> theValues;

int convertToDecimal(string theRoman) {
    int decimalSum = 0;

    //inserting the values of the Roman values
    theValues.insert({'I', 1});
    theValues.insert({'V', 5});
    theValues.insert({'X', 10});
    theValues.insert({'L', 50});
    theValues.insert({'C', 100});
    theValues.insert({'D', 500});
    theValues.insert({'M', 1000});

    //looping through the string to check the value of each char
    for(unsigned int i = 0; i < theRoman.length(); i++){
        //cout << theValues[theRoman[i]] << " " << endl;
        //checking the the value ahead of the current iteration
        if (theValues[theRoman[i + 1]] > theValues[theRoman[i]]) {
            decimalSum += theValues[theRoman[i + 1]] - theValues[theRoman[i]];
            //cout << theValues[theRoman[i]];
            i++; //increment the iteration so it stays (char / char)
            //cout << theValues[theRoman[i]];
            continue; //skipping the next iteration so it doesn't add it to the decimalSum
        }
        else {
            decimalSum += theValues[theRoman[i]];
        }
    }

    /*cout << endl;
    cout << "This is the decimalSum: " << decimalSum;
     */
    return decimalSum;
}

int convertToNumerals(string theNumbers) {
    //cout << "What's up?" << endl;
    int tempNumber = stoi(theNumbers);
    //cout << "converting to a number: " << tempNumber;
    vector<char> tempChar = {}; // for storing the roman characters
    /*if( (tempNumber % 1000) != 0 ){

    }*/

    return tempNumber;
}

bool numOrRoman(string theString) {
    for (unsigned int i = 0; i < theString.length(); i++){
        if(isdigit(theString[i])){
            return false;
        }
        else if(isalpha(theString[i])) {
            return true;
        }
    }
}

int main() {
    string theInput;
    cout << "Please enter the Roman Numerals you wish to convert: ";
    getline(cin, theInput);

    if (numOrRoman(theInput) == false){
        convertToNumerals(theInput);
    }
    if(numOrRoman(theInput) == true) {
        convertToDecimal(theInput);
    }

    return 0;
}