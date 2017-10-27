#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int n=7;
void backtrack(int,int);
void show();
int col[n+1];
int rupldown[2*n+1];
int luprdown[2*n+1];
int dwarf[n+1]={0};
int number;



int main(void) {
    cout<<"Welcome to Dwarf peeking Snow White."<<endl;
    int a;
    number=0;

    for(int i=1;i<=n;i++)
        col[i]=1;

    for(int i=1;i<=2*n;i++)
        rupldown[i]=luprdown[i]=1;
    cout<<"Please type number,ranging from 0 to 6, what the dwarf puts on:";
    cin>>a;
    backtrack(1,a);

    return 0;
    }


void backtrack(int i,int a) {

    if(i>n && dwarf[1]==1 && a==0)
        show();
    if(i>n && dwarf[1]==2 && a==1)
        show();
    if(i>n && dwarf[1]==3 && a==2)
        show();
    if(i>n && dwarf[1]==4 && a==3)
        show();
    if(i>n && dwarf[1]==5 && a==4)
        show();
    if(i>n && dwarf[1]==6 && a==5)
        show();
    if(i>n && dwarf[1]==7 && a==6)
        show();
    else
        for(int j=1;j<=n;j++)
            if(col[j]==1 && rupldown[i+j]==1 && luprdown[i-j+n]==1 ) {
                dwarf[i]=j;
                col[j]=rupldown[i+j]=luprdown[i-j+n]=0;
                backtrack(i+1,a);
                col[j]=rupldown[i+j]=luprdown[i-j+n]=1;
                }

}

void show() {
    number++;
    cout<<number<<": "<<endl;

    for(int b=1;b<=n;b++) {
        for(int a=1;a<=n;a++) {
            if(dwarf[b]==a)
                cout<<" D";
            else
                cout<<" X";
            }
    cout<<endl;
    }
    for(int c=1;c<=n;c++)
        cout<<dwarf[c]-1<<" ";
    cout<<endl;
}


