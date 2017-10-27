#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

void inputnumber(int & ,int & ,int & ,int & );
void random(int & ,int & ,int & ,int & );
void modify(int & ,int & ,int & ,int & );
void identify(int & ,int & ,int & ,int & ,int & ,int & ,int & ,int & ,char & );


int main(){
    char restart='y';
    while( (restart=='y') || (restart=='Y')){

        int n4,n3,n2,n1;
        int a4,a3,a2,a1;

        inputnumber(a4,a3,a2,a1);
        random(n4,n3,n2,n1);
        //cout<<n4<<n3<<n2<<n1<<endl;
        modify(n4,n3,n2,n1);
        //cout<<n4<<n3<<n2<<n1<<endl;
        identify(a4,a3,a2,a1,n4,n3,n2,n1,restart);
        }
}


void inputnumber(int &a4 ,int &a3 ,int &a2 ,int &a1 ){

    int input=0;
    int err=0;
    cout<<"Welcome to the number of puzzling!!"<<endl;
    cout<<"Please input 4-digit number:";
    cin>>input;

    a4  = input / 1000;
    a3  = (input / 100)-a4*10;
    a2  = (input / 10)-a4*100-a3*10;
    a1  = input-a4*1000-a3*100-a2*10 ;
    err = input-9876;

    if( (a4!=a3) && (a4!=a2) && (a4!=a1) && (a3!=a2) && (a3!=a1) && (a2!=a1)/*no equal*/ )
        cout<<a4<<a3<<a2<<a1<<endl;
    else{
        cout<<"Error! Please input different in each number."<<endl;
        inputnumber(a4,a3,a2,a1);
    }
    if(err>0){
        cout<<"Error!Please input 4-digit number:"<<endl;
            inputnumber(a4,a3,a2,a1);
    }
}

void random(int &r4 ,int &r3 ,int &r2 ,int &r1 ){

    srand(time(0));
    r4=((rand())%10000)/1000;
    r3=((rand())%1000)/100;
    r2=((rand())%100)/10;
    r1=((rand())%10);
}
void modify(int &r4 ,int &r3 ,int &r2 ,int &r1 ){

    if((r4==r3) || (r4==r2) || (r4==r1)){

        if(r4>8)
            --r4;
        else
            ++r4;
    }

        if((r3==r4) || (r3==r2) || (r3==r1)){

        if(r3>8)
            --r3;
        else
            ++r3;
    }

        if((r2==r3) || (r2==r4) || (r2==r1)){

        if(r2>8)
            --r2;
        else
            ++r2;
    }

        if((r1==r3) || (r1==r2) || (r1==r4)){

        if(r1>8)
            --r1;
        else
            ++r1;
    }

    while((r4==r3) || (r4==r2) || (r4==r1) || (r3==r2) || (r3==r1) || (r2==r1))
         modify(r4,r3,r2,r1);

}
void identify(int &a4 ,int &a3 ,int &a2 ,int &a1 ,int &n4 ,int &n3 ,int &n2 ,int &n1,char &restart ){
    int x=0;
    int y=0;

    //Both position and number are the same
    while(!(x==4)){
    x=0;
    y=0;

    if(a4==n4)
        x++;
    else
        x=x;

    if(a3==n3)
        x++;
    else
        x=x;

    if(a2==n2)
        x++;
    else
        x=x;

    if(a1==n1)
        x++;
    else
        x=x;




    //Only numbers are the same
    if((a4==n3) || (a4==n2) || (a4==n1))
        y++;
    else
        y=y;

    if((a3==n4) || (a3==n2) || (a3==n1))
        y++;
    else
        y=y;

    if((a2==n4) || (a2==n3) || (a2==n1))
        y++;
    else
        y=y;

    if((a1==n4) || (a1==n3) || (a1==n2))
        y++;
    else
        y=y;
    cout<<x<<"A"<<y<<"B"<<endl;
    if(x==4)
        break;
    inputnumber(a4,a3,a2,a1);

    }
    cout<<"you win!"<<endl;
    cout<<"Do you want to restart the game?(y/n)";
    cin>>restart;
    while( !((restart=='n')||(restart=='N')||(restart=='y')||(restart=='Y'))){
        cout<<"Are you kidding me?"<<endl;
        cout<<"Please retype again,seriously."<<endl;
        cout<<"Do you want to restart the game?(y/n)";
        cin>>restart;
    }
}
