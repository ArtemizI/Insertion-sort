#include <iostream>
#include <string>
#include <sstream>

#include <bits/stdc++.h>
using namespace std;

void simple_tokenizer(string input, char split)
{
stringstream ss;
string tempString = "";
int space;

 int stringLength = (int)input.size();

 int n = 0;
 int arrayLengh = 0;
 for (int i = 0; i < stringLength ; i++){
    if (input[i] == split){
     n++;
    }
 }
 if (n <= 1){
    arrayLengh = 1;
 }else{
    arrayLengh = n + 1;
}

//cout << arrayLengh << endl;

int inputArray[arrayLengh] = {};

 int num;
 int k = 0;
 for (int j = 0; j < stringLength ; j++){
    if (input[j] == split){
        num += 0;
        cout << num << '\n';
    } else{
        tempString = input[j];
        ss << tempString;
        ss >> num;   
        cout << num << '\n';  
        inputArray[k] = num;
        k ++;
    }

 }

}


/**
void string_to_array(string tempString){

    while(input[i] != split){
        for(int j = 0; j < arrayLength; j++){
        string tempNum;
        tempNum += input[i];
        ss << tempString;
        ss >> inputArray[j];
        input[i] = split;
        }
    }
  cout << inputArray[0] << ' ' <<  inputArray[1] << ' ' << inputArray[2];
}
**/

int main (int argc, char const* argv[]){

string input;
char split = '_';

cout << "Hello please enter your integer array devided by under scores :" << endl;
cin >> input;

simple_tokenizer(input, split);
cout << endl;

return 0;

}