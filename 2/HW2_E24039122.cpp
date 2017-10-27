#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Input your number\n";
    cin>>number;

    while(number>5 || number<0){
        cout<<"Error,please type a integer between 0-5\n";
        cin>>number;
    }
    switch(number){
            case 0:cout << "==============================================================" << endl;
                   cout << "=  Hi there.                                                 =" << endl;
                   cout << "=  I am a senior student.                                    =" << endl;
                   cout << "=  Given that I'm a transfer student,                        =" << endl;
                   cout << "=  I attend computer science class in my last college years. =" << endl;
                   cout << "=  I like to  design robots,                                 =\n";
                   cout << "=  also making them be vivid.                                =" << endl;
                   cout << "=  If you are interested in me.                              =" << endl;
                   cout << "=  Please let me know and contact me.                        =" << endl;
                   cout << "=  Email:a900240@yahoo.com.tw                                =\n";
                   cout << "==============================================================" << endl;
                break;
            case 1:cout<<"*\n";
                break;
            case 2:cout<<"**\n";
                break;
            case 3:cout<<"***\n";
                break;
            case 4:cout<<"****\n";
                break;
            case 5:cout<<"*****\n";
                break;

    }



    return 0;
}
