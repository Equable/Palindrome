#include<iostream>
#include<string>
#include<stack>
using namespace std;



int main(){
    int T;
    string str;
    stack<string> stk;
    while(true){
        cout << "Input number of cases: ";
        cin >> T;
        if(T>=1 && T<=20) break;
        cin.clear();
        cin.ignore(50, '\n');
    };


    for(int i = T; i > 0; i--){
        cin.ignore();
        cout << "Enter string " << i << ": ";
        cin >> str;
        stk.push(str);

    };

    for(int i = 1; i <= T; i++){

        
        str = stk.top();
        stk.pop();
        if(str == string(str.rbegin(), str.rend())){
            cout << str << " Is a Palindrome \n" << endl;
        }
        else{
            cout << str << " Is not a Palindrome \n" << endl;
        };
        
    };

};