#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int i_1=0;
int i_2=0;
int i_3=0;
int i_4=0;
int i_5=0;
int i_6=0;
int i_7=0;
int i_8=0;
int i_9=0;

void random(int &,int &,int &);
void input(int * ,int * ,int * ,int * ,int & ,int & ,int & ,int & );
int calculater(int *);

int main()
{
    //Plate 1's table.
    int plate_1[3]={0};
    //Plate 2's table.
    int plate_2[3]={0};
    //Plate 3's table.
    int plate_3[3]={0};
    //Plate 4's table.
    int plate_4[3]={0};


    //You score and table.
    int score_you=0;
    int you[10];
    for(int i=0;i<9;i++)
        you[i]=0;
    cout<<"~~You~~ : ";
    for(int i=0;i<9;i++)
        cout<<you[i]<<" ";
    cout<<endl;

    //Player 1 score and table.
    int score_1=0;
    int player_1[10];
    cout<<"Player 1: ";
    for(int i=0;i<9;i++)
        player_1[i]=0;
    for(int i=0;i<9;i++)
        cout<<player_1[i]<<" ";
    cout<<endl;
    //Player 2 score and table.
    int score_2=0;
    int player_2[10];
    cout<<"Player 2: ";
    for(int i=0;i<9;i++)
        player_2[i]=0;
    for(int i=0;i<9;i++)
        cout<<player_2[i]<<" ";
    cout<<endl;
    //Player 3 score and table.
    int score_3=0;
    int player_3[10];
    cout<<"Player 3: ";
    for(int i=0;i<9;i++)
        player_3[i]=0;
    for(int i=0;i<9;i++)
        cout<<player_3[i]<<" ";
    cout<<endl;


    int beginning;
    int a;
    int b;
    int c;
    char receive;
    int counter=0;
    int want;
    char cont;
    int g_1=0;
    int g_2=0;
    int g_3=0;
    int t_1=0;
    int t_2=0;
    int t_3=0;

    //Beginning!!
    cout<<"Welcome to Coloretto"<<endl;
    cout<<"You and other three player have a severe competition"<<endl;
    cout<<"Let start!!"<<endl;
    cout<<endl;

    while(1){
        random(a,b,counter);
        input(plate_1,plate_2,plate_3,plate_4,a,t_1,t_2,t_3);

        cout<<"Continue(Type any word):";
        cin>>cont;

        if(g_1==0){
            cout<<"Player 1:";
            random(a,b,counter);
            if(plate_1[0]==0)
                plate_1[0]=a;
            else if(plate_2[0]==0)
                plate_2[0]=a;
            else if(plate_3[0]==0)
                plate_3[0]=a;
            else if(plate_4[0]==0)
                plate_4[0]=a;
            g_1=1;
        }
        //PlateNo.1
        cout<<"Plate 1 is: ";
        cout<<plate_1[0]<<" "<<plate_1[1]<<" "<<plate_1[2]<<endl;
        //PlateNo.2
        cout<<"Plate 2 is: ";
        cout<<plate_2[0]<<" "<<plate_2[1]<<" "<<plate_2[2]<<endl;
        //PlateNo.3
        cout<<"Plate 3 is: ";
        cout<<plate_3[0]<<" "<<plate_3[1]<<" "<<plate_3[2]<<endl;
        //PlateNo.4
        cout<<"Plate 4 is: ";
        cout<<plate_4[0]<<" "<<plate_4[1]<<" "<<plate_4[2]<<endl;


        cout<<"Continue(Type any word):";
        cin>>cont;
        if(g_2==0){
            cout<<"Player 2:";
            random(a,b,counter);
            if(plate_1[0]==0)
                plate_1[0]=a;
            else if(plate_2[0]==0)
                plate_2[0]=a;
            else if(plate_3[0]==0)
                plate_3[0]=a;
            else if(plate_4[0]==0)
                plate_4[0]=a;
            g_2=1;
        }
        //PlateNo.1
        cout<<"Plate 1 is: ";
        cout<<plate_1[0]<<" "<<plate_1[1]<<" "<<plate_1[2]<<endl;
        //PlateNo.2
        cout<<"Plate 2 is: ";
        cout<<plate_2[0]<<" "<<plate_2[1]<<" "<<plate_2[2]<<endl;
        //PlateNo.3
        cout<<"Plate 3 is: ";
        cout<<plate_3[0]<<" "<<plate_3[1]<<" "<<plate_3[2]<<endl;
        //PlateNo.4
        cout<<"Plate 4 is: ";
        cout<<plate_4[0]<<" "<<plate_4[1]<<" "<<plate_4[2]<<endl;

        cout<<"Continue(Type any word):";
        cin>>cont;

        if(g_3==0){
            cout<<"Player 3:";
            random(a,b,counter);
            if(plate_1[0]==0)
                plate_1[0]=a;
            else if(plate_2[0]==0)
                plate_2[0]=a;
            else if(plate_3[0]==0)
                plate_3[0]=a;
            else if(plate_4[0]==0)
                plate_4[0]=a;
            g_3=1;
            }
        //PlateNo.1
        cout<<"Plate 1 is: ";
        cout<<plate_1[0]<<" "<<plate_1[1]<<" "<<plate_1[2]<<endl;
        //PlateNo.2
        cout<<"Plate 2 is: ";
        cout<<plate_2[0]<<" "<<plate_2[1]<<" "<<plate_2[2]<<endl;
        //PlateNo.3
        cout<<"Plate 3 is: ";
        cout<<plate_3[0]<<" "<<plate_3[1]<<" "<<plate_3[2]<<endl;
        //PlateNo.4
        cout<<"Plate 4 is: ";
        cout<<plate_4[0]<<" "<<plate_4[1]<<" "<<plate_4[2]<<endl;



        //Receive card or not
        cout<<"Receive cards?(YorN)";
        cin>>receive;
        //Yes!!
        if(receive=='Y' || receive=='y'){
            //Choose plate
            cout<<"Which plate of number do you want?";
            cin>>want;
            while( want<1 || want>4 ){
                cout<<"Error!!Please try again."<<endl;
                cout<<"Which plate of number do you want?";
                cin>>want;
            }
            if(want==1){
                for(int i=0;i<3;i++)
                    you[plate_1[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_1[i]=0;
            }

            else if(want==2){
                for(int i=0;i<3;i++)
                    you[plate_2[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_2[i]=0;
            }
            else if(want==3){
                for(int i=0;i<3;i++)
                    you[plate_3[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_3[i]=0;
            }
            else if(want==4){
                for(int i=0;i<3;i++)
                    you[plate_4[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_4[i]=0;
            }
            g_1=0;
            g_2=0;
            g_3=0;

            t_1=0;
            t_2=0;
            t_3=0;
            //You
            cout<<"~~You~~:";
            for(int i=0;i<9;i++)
                cout<<you[i]<<" ";
            cout<<endl;


            cout<<counter<<endl;
            if(counter>61)
                break;
        }

            cout<<"~~You~~:";
            for(int i=0;i<9;i++)
                cout<<you[i]<<" ";
            cout<<endl;
            //Player 1
            if(plate_2[0]!=0 && t_1==0){
                for(int i=0;i<3;i++)
                    player_1[plate_2[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_2[i]=0;
                t_1=2;
                //cout<<"t1:"<<t_1;
            }
            else if(plate_3[0]!=0 && t_1==0){
                for(int i=0;i<3;i++)
                    player_1[plate_3[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_3[i]=0;
                t_1=3;
               // cout<<"t1:"<<t_1;
            }
            else if(plate_4[0]!=0 && t_1==0){
                for(int i=0;i<3;i++)
                    player_1[plate_4[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_4[i]=0;
                t_1=4;
               // cout<<"t1:"<<t_1;
            }
            else if(plate_1[0]!=0 && t_1==0){
                for(int i=0;i<3;i++)
                    player_1[plate_1[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_1[i]=0;
                t_1=1;
               // cout<<"t1:"<<t_1;
            }
            cout<<"Player1:";
            for(int i=0;i<9;i++)
                cout<<player_1[i]<<" ";
            cout<<endl;

            //Player 2
            if(plate_3[0]!=0 && t_2==0){
                for(int i=0;i<3;i++)
                    player_2[plate_3[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_3[i]=0;
                t_2=3;
                //cout<<"t2:"<<t_2;
            }
            else if(plate_4[0]!=0 && t_2==0){
                for(int i=0;i<3;i++)
                    player_2[plate_4[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_4[i]=0;
                t_2=4;
                //cout<<"t2:"<<t_2;
            }
            else if(plate_1[0]!=0 && t_2==0){
                for(int i=0;i<3;i++)
                    player_2[plate_1[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_1[i]=0;
                t_2=1;
                //cout<<"t2:"<<t_2;
            }
            else if(plate_2[0]!=0 && t_2==0){
                for(int i=0;i<3;i++)
                    player_2[plate_2[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_2[i]=0;
                t_2=2;
               // cout<<"t2:"<<t_2;
            }
            cout<<"Player2:";
            for(int i=0;i<9;i++)
                cout<<player_2[i]<<" ";
            cout<<endl;

            //Player 3
            if(plate_4[0]!=0 && t_3==0){
                for(int i=0;i<3;i++)
                    player_3[plate_4[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_4[i]=0;
                t_3=4;
                //cout<<"t3:"<<t_3;
            }
            else if(plate_1[0]!=0 && t_3==0){
                for(int i=0;i<3;i++)
                    player_3[plate_1[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_1[i]=0;
                t_3=1;
               // cout<<"t3:"<<t_3;
            }
            else if(plate_2[0]!=0 && t_3==0){
                for(int i=0;i<3;i++)
                    player_3[plate_2[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_2[i]=0;
                t_3=2;
                //cout<<"t3:"<<t_3;
            }
            else if(plate_3[0]!=0 && t_3==0){
                for(int i=0;i<3;i++)
                    player_3[plate_3[i]-1]++;
                for(int i=0;i<3;i++)
                    plate_3[i]=0;
                t_3=3;
                cout<<"t3:"<<t_3;
            }
            cout<<"Player3:";
            for(int i=0;i<9;i++)
                cout<<player_3[i]<<" ";
            cout<<endl;

    }

    cout<<"~~You~~:";
    for(int i=0;i<9;i++)
        cout<<you[i]<<" ";
    cout<<endl;

    cout<<"Player1:";
    for(int i=0;i<9;i++)
        cout<<player_1[i]<<" ";
    cout<<endl;

    cout<<"Player2:";
    for(int i=0;i<9;i++)
        cout<<player_2[i]<<" ";
    cout<<endl;

    cout<<"Player3:";
    for(int i=0;i<9;i++)
        cout<<player_3[i]<<" ";
    cout<<endl;

    cout<<"Your score:";
    calculater(you);
    cout<<endl;

    cout<<"Player1 score:";
    calculater(player_1);
    cout<<endl;

    cout<<"Player2 score:";
    calculater(player_2);
    cout<<endl;

    cout<<"Player3 score:";
    calculater(player_3);
    cout<<endl;
}



void random(int &number,int &i,int &counter){

    srand(time(0));
    number=(rand()%9)+1;
    counter++;
    if(i_1>=9 && number==1)
        number++;
    if(i_2>=9 && number==2)
        number++;
    if(i_3>=9 && number==3)
        number++;
    if(i_4>=9 && number==4)
        number++;
    if(i_5>=9 && number==5)
        number++;
    if(i_6>=9 && number==6)
        number++;
    if(i_7>=9 && number==7)
        number++;
    if(i_8>=3 && number==8)
        number++;
    if(i_9>=10 && number==9)
        number=0;
    switch(number){
        case 1:
            cout<<"red "<<number<<endl;
            i_1++;
            break;
        case 2:
            cout<<"yellow "<<number<<endl;
            i_2++;
            break;
        case 3:
            cout<<"green "<<number<<endl;
            i_3++;
            break;
        case 4:
            cout<<"blue "<<number<<endl;
            i_4++;
            break;
        case 5:
            cout<<"brown "<<number<<endl;
            i_5++;
            break;
        case 6:
            cout<<"gray "<<number<<endl;
            i_6++;
            break;
        case 7:
            cout<<"pink "<<number<<endl;
            i_7++;
            break;
        case 8:
            cout<<"rainbow "<<number<<endl;
            i_8++;
            break;
        case 9:
            cout<<"plus two "<<number<<endl;
            i_9++;
            break;

    }


}


void input(int *p1,int *p2,int *p3,int *p4,int &a,int &t_1,int &t_2,int &t_3){
    int beginning;
    cout<<"Which plate do you want to put into?(1,2,3or4)";
    cin>>beginning;

    while(beginning==t_1 || beginning==t_2 || beginning==t_3){
        cout<<"Please choose other plate."<<endl;
        cin>>beginning;
    }
    while( beginning<1 || beginning>4 ){
        cout<<"Error!!Please try again."<<endl;
        cout<<"Which plate do you want to put into?(1,2,3or4)";
        cin>>beginning;
    }
    /*
    while(p1[2]!=0 && beginning==1){
        cout<<"This plate is full of number"<<endl;
        cout<<"Please type other plate!!"<<endl;
        cin>>beginning;
    }
    while(p2[2]!=0 && beginning==2){
        cout<<"This plate is full of number"<<endl;
        cout<<"Please type other plate!!"<<endl;
        cin>>beginning;
    }
    while(p3[2]!=0 && beginning==3){
        cout<<"This plate is full of number"<<endl;
        cout<<"Please type other plate!!"<<endl;
        cin>>beginning;
    }
    while(p4[2]!=0 && beginning==4){
        cout<<"This plate is full of number"<<endl;
        cout<<"Please type other plate!!"<<endl;
        cin>>beginning;
    }
    */

    while(beginning==1 && p1[2]!=0){

        cout<<"Please input other plate."<<endl;
        cout<<"Which plate do you want to put into?(1,2,3or4)";
        cin>>beginning;
    }
    while(beginning==2 && p2[2]!=0){

        cout<<"Please input other plate."<<endl;
        cout<<"Which plate do you want to put into?(1,2,3or4)";
        cin>>beginning;
    }
    while(beginning==3 && p3[2]!=0){

        cout<<"Please input other plate."<<endl;
        cout<<"Which plate do you want to put into?(1,2,3or4)";
        cin>>beginning;
    }
    while(beginning==4 && p4[2]!=0){

        cout<<"Please input other plate."<<endl;
        cout<<"Which plate do you want to put into?(1,2,3or4)";
        cin>>beginning;
    }




    if(beginning==1){
            if(p1[0]==0){
                p1[0]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p1[1]==0){
                p1[1]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p1[2]==0){
                p1[2]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
        }

    if(beginning==2){
            if(p2[0]==0){
                p2[0]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
        }
            else if(p2[1]==0){
                p2[1]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p2[2]==0){
                p2[2]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
    }
    if(beginning==3){
            if(p3[0]==0){
                p3[0]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p3[1]==0){
                p3[1]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p3[2]==0){
                p3[2]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
    }
    if(beginning==4){
            if(p4[0]==0){
                p4[0]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p4[1]==0){
                p4[1]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
            else if(p4[2]==0){
                p4[2]=a;
                //PlateNo.1
                cout<<"Plate 1 is: ";
                cout<<p1[0]<<" "<<p1[1]<<" "<<p1[2]<<endl;
                //PlateNo.2
                cout<<"Plate 2 is: ";
                cout<<p2[0]<<" "<<p2[1]<<" "<<p2[2]<<endl;
                //PlateNo.3
                cout<<"Plate 3 is: ";
                cout<<p3[0]<<" "<<p3[1]<<" "<<p3[2]<<endl;
                //PlateNo.4
                cout<<"Plate 4 is: ";
                cout<<p4[0]<<" "<<p4[1]<<" "<<p4[2]<<endl;
            }
    }
}

int calculater(int *h){
    h[9];

    int score=0;

    int N_1=h[0];
    int no_1=0;

    int N_2=0;
    int no_2=0;

    int N_3=0;
    int no_3=0;

    int N_4=0;
    int no_4=0;

    int N_5=0;
    int no_5=0;

    int N_6=0;
    int no_6=0;

    int N_7=h[0];
    int no_7=0;

    int j_1=0;
    int j_2=0;
    int j_3=0;
    int j_4=0;
    int j_5=0;
    int j_6=0;
    int j_7=0;
    //Max
    for(int i=1;i<7;i++){
            if(h[i]>=N_1){
                N_1=h[i];
                j_1=i;
            }

    }
    if((N_1+h[7])>=6)
        no_1=21;
    else if((N_1+h[7])==5)
        no_1=15;
    else if((N_1+h[7])==4)
        no_1=10;
    else if((N_1+h[7])==3)
        no_1=6;
    else if((N_1+h[7])==2)
        no_1=3;
    else if((N_1+h[7])==1)
        no_1=1;
    else
        no_1=0;
    h[j_1]=0;


    //No2
    for(int i=0;i<7;i++){
            if(h[i]>=N_2){
                N_2=h[i];
                j_2=i;
            }
    }
    if(N_2>=6)
        no_2=21;
    else if(N_2==5)
        no_2=15;
    else if(N_2==4)
        no_2=10;
    else if(N_2==3)
        no_2=6;
    else if(N_2==2)
        no_2=3;
    else if(N_2==1)
        no_2=1;
    else
        no_2=0;
    h[j_2]=0;

    //No3
    for(int i=0;i<7;i++){
            if(h[i]>=N_3){
                N_3=h[i];
                j_3=i;
            }
    }

    if(N_3>=6)
        no_3=21;
    else if(N_3==5)
        no_3=15;
    else if(N_3==4)
        no_3=10;
    else if(N_3==3)
        no_3=6;
    else if(N_3==2)
        no_3=3;
    else if(N_3==1)
        no_3=1;
    else
        no_3=0;
    h[j_3]=0;


    //No4
    for(int i=0;i<7;i++){
            if(h[i]>=N_4){
                N_4=h[i];
                j_4=i;
            }
    }
    if(N_4>=6)
        no_4=21;
    else if(N_4==5)
        no_4=15;
    else if(N_4==4)
        no_4=10;
    else if(N_4==3)
        no_4=6;
    else if(N_4==2)
        no_4=3;
    else if(N_4==1)
        no_4=1;
    else
        no_4=0;
    h[j_4]=0;


    //No5
    for(int i=0;i<7;i++){
            if(h[i]>=N_5){
                N_5=h[i];
                j_5=i;
            }
    }

    if(N_5>=6)
        no_5=21;
    else if(N_5==5)
        no_5=15;
    else if(N_5==4)
        no_5=10;
    else if(N_5==3)
        no_5=6;
    else if(N_5==2)
        no_5=3;
    else if(N_5==1)
        no_5=1;
    else
        no_5=0;
    h[j_5]=0;


    //No6
    for(int i=0;i<7;i++){
            if(h[i]>=N_6){
                N_6=h[i];
                j_6=i;
            }
    }
    if(N_6>=6)
        no_6=21;
    else if(N_6==5)
        no_6=15;
    else if(N_6==4)
        no_6=10;
    else if(N_6==3)
        no_6=6;
    else if(N_6==2)
        no_6=3;
    else if(N_6==1)
        no_6=1;
    else
        no_6=0;
    h[j_6]=0;

    //No7
    for(int i=0;i<7;i++){
            if(h[i]<=N_7){
                N_7=h[i];
                j_7=i;
            }
    }

    if(N_7>=6)
        no_7=21;
    else if(N_7==5)
        no_7=15;
    else if(N_7==4)
        no_7=10;
    else if(N_7==3)
        no_7=6;
    else if(N_7==2)
        no_7=3;
    else if(N_7==1)
        no_7=1;
    else
        no_7=0;
    h[j_7]=0;






    score=no_1+no_2+no_3-no_4-no_5-no_6-no_7+h[8]*2;
    cout<<score;
}



