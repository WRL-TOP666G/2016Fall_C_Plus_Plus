#include <iostream>
#include <stdlib.h>
using namespace std;


void TowerOfHanoi(int, char,char,char);

int main()
{
    int n;
    cout<<"Welcome to Tower of Hanoi!!"<<endl;
    cout<<"You have three plate and three place."<<endl;
    cout<<"Place A is beginning station."<<endl;
    cout<<"Place B is relay station."<<endl;
    cout<<"Finally, place C is terminal station."<<endl;
    cout<<"Input the number which is only a integer:";
    cin>>n;
    TowerOfHanoi(n, 'A', 'C', 'B');
    cout<<"win~!!"<<endl;
    system("pause");


}

void TowerOfHanoi(int n, char a, char b, char c)
{
     if (n == 1)
     {
        cout<<"plate"<<n<<" move from "<<a<<" to "<<b<<endl;
     }
     else
     {
        TowerOfHanoi(n - 1, a, c, b);
        cout<<"plate"<<n<<" move from "<<a<<" to "<<b<<endl;
        TowerOfHanoi(n - 1, c, b, a);
     }
}


