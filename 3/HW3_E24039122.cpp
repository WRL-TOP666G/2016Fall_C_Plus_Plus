#include <iostream>

using namespace std;

int main()
{
    int Fn;
    int Fn1;
    int Fn2;
    int n;
    int counter;
    cout<< "Hi there! Welcome to Fibonacci sequence.\n";
    cout<< "Your input number must be within the range of 0 to 46.\n";
    cout<< "If you input the number out of the range, the computer may explode.\n";
    cout<< "So, let we start it."<<endl;
    cout<< "Please input your number:";

    cin>>n;
    //Error number
    while(n<0){
        cout<<"Warning!!Warning!!Your computer will explode.\n";
        cout<<"Please type it again immediately!!!!!!"<<endl;
        cin>>n;
    }
    while(n>46){
        cout<<"Warning!!Warning!!Your computer will explode.\n";
        cout<<"Please type it again immediately!!!!!!"<<endl;
        cin>>n;
    }
    //n>=2
    if(n>=2){
        counter=1;
        Fn=1;
        Fn1=0;
        Fn2=0;
        cout << "F0=0" << endl;
        cout << "F1=1" << endl;
        while(counter<n){
            Fn2=Fn1;
            Fn1=Fn;
            Fn=Fn1+Fn2;
            counter++;
            cout << "F" << counter << "=" << Fn << endl;
        }
    }
    //n=1
    else if(n==1){
        cout << "F0=0" << endl;
        cout << "F1=1" << endl;
    }
    //n=0
    else{
        Fn=0;
        cout << "F0=0" << endl;
    }



}
