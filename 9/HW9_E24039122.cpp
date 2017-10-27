#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;


const double total_item=5000;

int a[100000][26];
double tot[26]={0};
int eraser[26]={0};

double b[26][26]={0};
double b2[26][26]={0};
int eraser2[26][26]={0};

int i_arr[100000][2];

int counter=0;

double i_cal[1000000][2];
int zz[100000][2];

double c[26][26]={0};
double c2[26]={0};
//int eraser3[26][26];

int a2[300]={0};



int d[1000000];
int i2_arr[100000]={0};
int j2_arr[100000]={0};
int e1,e2,e3;
double x;

int y[100000][3];
int counter2=0;
int z[100000][3];
int counter_1;
int counter_2;
int divid[1000000];
int t[1000000][3];
int g[1000000][3];
int main()
{
    ifstream file("test.txt", ios::in);
    if( !file ){
        cout<<"File could not be opened"<<endl;
        exit(1);
        }

    int number;
    string goods;

    double min_supp;
    double min_conf;
    cout<<"Please input min_supp :";
    cin>>min_supp;
    if(min_supp<0 || min_supp>=1)
        while(min_supp<0 || min_supp>=1){
                cout<<"Error!!!Please input min_supp again:";
                cin>>min_supp;
        }


    cout<<endl;
    cout<<"Please input min_conf :";
    cin>>min_conf;
    if(min_conf<0 || min_conf>=1)
        while(min_conf<0 || min_conf>=1){
                cout<<"Error!!!Please input min_supp again:";
                cin>>min_conf;
        }
    cout<<endl;
    //掃描
    while(file>>number>>goods){

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'A' )
                    a[number-1][0]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'B' )
                    a[number-1][1]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'C' )
                    a[number-1][2]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'D' )
                    a[number-1][3]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'E' )
                    a[number-1][4]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'F' )
                    a[number-1][5]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'G' )
                    a[number-1][6]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'H' )
                    a[number-1][7]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'I' )
                    a[number-1][8]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'J' )
                    a[number-1][9]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'K' )
                    a[number-1][10]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'L' )
                    a[number-1][11]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'M' )
                    a[number-1][12]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'N' )
                    a[number-1][13]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'O' )
                    a[number-1][14]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'P' )
                    a[number-1][15]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'Q' )
                    a[number-1][16]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'R' )
                    a[number-1][17]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'S' )
                    a[number-1][18]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'T' )
                    a[number-1][19]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'U' )
                    a[number-1][20]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'V' )
                    a[number-1][21]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'W' )
                    a[number-1][22]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'X' )
                    a[number-1][23]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'Y' )
                    a[number-1][24]++;

            for(int i=0;i<goods.size();i++)
                if(goods[i] == 'Z' )
                    a[number-1][25]++;
            //cout<<number<<endl;
    }
    //存入


    for(int j=0;j<26;j++)
        for(int i=0;i<total_item+1;i++)
            if(a[i][j]==1)
                tot[j]++;


    //去除單一小於support
    for(int j=0;j<26;j++)
        if(tot[j]<min_supp*total_item-1)
            eraser[j]=1;





    for(int i=0;i<total_item;i++)
        for(int j=0;j<26;j++)
            if(eraser[j]==1)
                a[i][j]=0;



    for(int i=0;i<total_item;i++)
        for(int j=0;j<26;j++)
            for(int k=0;k<j;k++)
                if(a[i][j]==1 && a[i][k]==1){
                    b[j][k]++;
                    b2[j][k]++;
                }


    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            if(b[i][j]<min_supp*total_item-1)
                eraser2[i][j]=1;



    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            if(eraser2[i][j]==1)
                b[i][j]=0;


////////////////////
/*
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            if(b[i][j]!=0){
                    i_arr[counter][0]=i;
                    i_arr[counter][1]=j;
                    counter++;
            }


    counter=0;
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            if(b[i][j]!=0){
                    i_cal[counter][0]=b[i][j]/tot[i];
                    i_cal[counter][1]=b[i][j]/tot[j];
                    counter++;
            }

        counter_1=counter;

        for(int i=0;i<counter_1;i++)
            cout<<i_arr[i][0]<<" "<<i_arr[i][1]<<endl;
        for(int i=0;i<counter_1;i++)
            cout<<i_cal[i][0]<<" "<<i_cal[i][1]<<endl;
            */
////////////////////////
        for(int i=0;i<26;i++)
            for(int j=0;j<26;j++)
                if(b[i][j]!=0)
                    if(tot[i]!=0){
                        x=b[i][j]/tot[i];
                        if(x>=min_conf){
                            i_arr[counter][0]=i;
                            i_arr[counter][1]=j;
                            counter++;
                    }
                        x=b[i][j]/tot[j];
                        if(x>=min_conf){
                            i_arr[counter][0]=j;
                            i_arr[counter][1]=i;
                            counter++;
                    }
                }
/*
        for(int i=0;i<counter;i++)
            cout<<i_arr[i][0]<<" "<<i_arr[i][1]<<"    ";
*/
///////////////////////////////////////////////////
        //A
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==0){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                        counter2++;
                }
        //B
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==1){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                        counter2++;
                }

        //C
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==2){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //D
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==3){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //E
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==4){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //F
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==5){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //G
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==6){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //H
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==7){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        //I
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==8){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==9){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==10){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==11){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==12){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==13){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==14){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==15){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==16){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==17){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==18){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==19){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==20){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==21){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==22){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==23){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==24){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0  )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<2;j++)
                if(i_arr[i][0]==25){
                    zz[counter2][j]=i_arr[i][j]+1;
                    if(zz[counter2][0]!=0 && zz[counter2][1]!=0 )
                    counter2++;
                }
                ///////////////////////////////////








        counter2=0;
        counter_1=counter;




///////finish 2///////////////////////////////////////////////////////////////
    for(int i=0;i<counter_1;i++){
                if(zz[i][0]==1)
                    cout<<"A ";
                else if(zz[i][0]==2)
                    cout<<"B ";
                else if(zz[i][0]==3)
                    cout<<"C ";
                else if(zz[i][0]==4)
                    cout<<"D ";
                else if(zz[i][0]==5)
                    cout<<"E ";
                else if(zz[i][0]==6)
                    cout<<"F ";
                else if(zz[i][0]==7)
                    cout<<"G ";
                else if(zz[i][0]==8)
                    cout<<"H ";
                else if(zz[i][0]==9)
                    cout<<"I ";
                else if(zz[i][0]==10)
                    cout<<"J ";
                else if(zz[i][0]==11)
                    cout<<"K ";
                else if(zz[i][0]==12)
                    cout<<"L ";
                else if(zz[i][0]==13)
                    cout<<"M ";
                else if(zz[i][0]==14)
                    cout<<"N ";
                else if(zz[i][0]==15)
                    cout<<"O ";
                else if(zz[i][0]==16)
                    cout<<"P ";
                else if(zz[i][0]==17)
                    cout<<"Q ";
                else if(zz[i][0]==18)
                    cout<<"R ";
                else if(zz[i][0]==19)
                    cout<<"S ";
                else if(zz[i][0]==20)
                    cout<<"T ";
                else if(zz[i][0]==21)
                    cout<<"U ";
                else if(zz[i][0]==22)
                    cout<<"V ";
                else if(zz[i][0]==23)
                    cout<<"W ";
                else if(zz[i][0]==24)
                    cout<<"X ";
                else if(zz[i][0]==25)
                    cout<<"Y ";
                else if(zz[i][0]==26)
                    cout<<"Z ";

                if(zz[i][1]==1)
                    cout<<"A ";
                else if(zz[i][1]==2)
                    cout<<"B ";
                else if(zz[i][1]==3)
                    cout<<"C ";
                else if(zz[i][1]==4)
                    cout<<"D ";
                else if(zz[i][1]==5)
                    cout<<"E ";
                else if(zz[i][1]==6)
                    cout<<"F ";
                else if(zz[i][1]==7)
                    cout<<"G ";
                else if(zz[i][1]==8)
                    cout<<"H ";
                else if(zz[i][1]==9)
                    cout<<"I ";
                else if(zz[i][1]==10)
                    cout<<"J ";
                else if(zz[i][1]==11)
                    cout<<"K ";
                else if(zz[i][1]==12)
                    cout<<"L ";
                else if(zz[i][1]==13)
                    cout<<"M ";
                else if(zz[i][1]==14)
                    cout<<"N ";
                else if(zz[i][1]==15)
                    cout<<"O ";
                else if(zz[i][1]==16)
                    cout<<"P ";
                else if(zz[i][1]==17)
                    cout<<"Q ";
                else if(zz[i][1]==18)
                    cout<<"R ";
                else if(zz[i][1]==19)
                    cout<<"S ";
                else if(zz[i][1]==20)
                    cout<<"T ";
                else if(zz[i][1]==21)
                    cout<<"U ";
                else if(zz[i][1]==22)
                    cout<<"V ";
                else if(zz[i][1]==23)
                    cout<<"W ";
                else if(zz[i][1]==24)
                    cout<<"X ";
                else if(zz[i][1]==25)
                    cout<<"Y ";
                else if(zz[i][1]==26)
                    cout<<"Z ";
                cout<<endl;
        }
////////////////









    for(int i=0;i<total_item;i++)
        for(int j=0;j<26;j++)
            for(int k=0;k<j;k++)
                for(int l=0;l<k;l++)
                    if(a[i][j]==1 && a[i][k]==1 && a[i][l]==1){
                        d[l*10000+k*100+j]++;
                        }



    for(int i=0;i<1000000;i++)
        if(d[i]<min_supp*total_item-1)
            d[i]=0;





    counter=0;
    for(int i=0;i<1000000;i++)
        if(d[i]!=0){
            e1=i/10000;
            e2=(i-e1*10000)/100;
            e3=i-e1*10000-e2*100;

            if(b2[e2][e1]!=0){
                x=d[i]/b2[e2][e1];
                if(x>=min_conf){
                    y[counter][0]=e1;
                    y[counter][1]=e2;
                    y[counter][2]=e3;
                    counter++;
                }
            }

            if(b2[e3][e1]!=0){
                x=d[i]/b2[e3][e1];
                if(x>=min_conf){
                    y[counter][0]=e1;
                    y[counter][1]=e3;
                    y[counter][2]=e2;
                    counter++;
                }
            }

            if(b2[e3][e2]!=0){
                x=d[i]/b2[e3][e2];
                if(x>=min_conf){
                    y[counter][0]=e2;
                    y[counter][1]=e3;
                    y[counter][2]=e1;
                    counter++;
                }
            }
        }

        //A
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==0){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                        counter2++;
                }
        //B
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==1){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                        counter2++;
                }

        //C
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==2){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //D
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==3){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //E
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==4){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //F
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==5){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //G
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==6){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //H
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==7){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        //I
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==8){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==9){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==10){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==11){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==12){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==13){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==14){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==15){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==16){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==17){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==18){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==19){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==20){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==21){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==22){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==23){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==24){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(y[i][0]==25){
                    z[counter2][j]=y[i][j]+1;
                    if(z[counter2][0]!=0 && z[counter2][1]!=0 && z[counter2][2]!=0 )
                    counter2++;
                }

        for(int i=0;i<counter;i++){
                if(z[i][0]==1)
                    cout<<"A";
                else if(z[i][0]==2)
                    cout<<"B";
                else if(z[i][0]==3)
                    cout<<"C";
                else if(z[i][0]==4)
                    cout<<"D";
                else if(z[i][0]==5)
                    cout<<"E";
                else if(z[i][0]==6)
                    cout<<"F";
                else if(z[i][0]==7)
                    cout<<"G";
                else if(z[i][0]==8)
                    cout<<"H";
                else if(z[i][0]==9)
                    cout<<"I";
                else if(z[i][0]==10)
                    cout<<"J";
                else if(z[i][0]==11)
                    cout<<"K";
                else if(z[i][0]==12)
                    cout<<"L";
                else if(z[i][0]==13)
                    cout<<"M";
                else if(z[i][0]==14)
                    cout<<"N";
                else if(z[i][0]==15)
                    cout<<"O";
                else if(z[i][0]==16)
                    cout<<"P";
                else if(z[i][0]==17)
                    cout<<"Q";
                else if(z[i][0]==18)
                    cout<<"R";
                else if(z[i][0]==19)
                    cout<<"S";
                else if(z[i][0]==20)
                    cout<<"T";
                else if(z[i][0]==21)
                    cout<<"U";
                else if(z[i][0]==22)
                    cout<<"V";
                else if(z[i][0]==23)
                    cout<<"W";
                else if(z[i][0]==24)
                    cout<<"X";
                else if(z[i][0]==25)
                    cout<<"Y";
                else if(z[i][0]==26)
                    cout<<"Z";

                if(z[i][1]==1)
                    cout<<"A";
                else if(z[i][1]==2)
                    cout<<"B";
                else if(z[i][1]==3)
                    cout<<"C";
                else if(z[i][1]==4)
                    cout<<"D";
                else if(z[i][1]==5)
                    cout<<"E";
                else if(z[i][1]==6)
                    cout<<"F";
                else if(z[i][1]==7)
                    cout<<"G";
                else if(z[i][1]==8)
                    cout<<"H";
                else if(z[i][1]==9)
                    cout<<"I";
                else if(z[i][1]==10)
                    cout<<"J";
                else if(z[i][1]==11)
                    cout<<"K";
                else if(z[i][1]==12)
                    cout<<"L";
                else if(z[i][1]==13)
                    cout<<"M";
                else if(z[i][1]==14)
                    cout<<"N";
                else if(z[i][1]==15)
                    cout<<"O";
                else if(z[i][1]==16)
                    cout<<"P";
                else if(z[i][1]==17)
                    cout<<"Q";
                else if(z[i][1]==18)
                    cout<<"R";
                else if(z[i][1]==19)
                    cout<<"S";
                else if(z[i][1]==20)
                    cout<<"T";
                else if(z[i][1]==21)
                    cout<<"U";
                else if(z[i][1]==22)
                    cout<<"V";
                else if(z[i][1]==23)
                    cout<<"W";
                else if(z[i][1]==24)
                    cout<<"X";
                else if(z[i][1]==25)
                    cout<<"Y";
                else if(z[i][1]==26)
                    cout<<"Z";



                if(z[i][2]==1)
                    cout<<"   A";
                else if(z[i][2]==2)
                    cout<<"   B";
                else if(z[i][2]==3)
                    cout<<"   C";
                else if(z[i][2]==4)
                    cout<<"   D";
                else if(z[i][2]==5)
                    cout<<"   E";
                else if(z[i][2]==6)
                    cout<<"   F";
                else if(z[i][2]==7)
                    cout<<"   G";
                else if(z[i][2]==8)
                    cout<<"   H";
                else if(z[i][2]==9)
                    cout<<"   I";
                else if(z[i][2]==10)
                    cout<<"   J";
                else if(z[i][2]==11)
                    cout<<"   K";
                else if(z[i][2]==12)
                    cout<<"   L";
                else if(z[i][2]==13)
                    cout<<"   M";
                else if(z[i][2]==14)
                    cout<<"   N";
                else if(z[i][2]==15)
                    cout<<"   O";
                else if(z[i][2]==16)
                    cout<<"   P";
                else if(z[i][2]==17)
                    cout<<"   Q";
                else if(z[i][2]==18)
                    cout<<"   R";
                else if(z[i][2]==19)
                    cout<<"   S";
                else if(z[i][2]==20)
                    cout<<"   T";
                else if(z[i][2]==21)
                    cout<<"   U";
                else if(z[i][2]==22)
                    cout<<"   V";
                else if(z[i][2]==23)
                    cout<<"   W";
                else if(z[i][2]==24)
                    cout<<"   X";
                else if(z[i][2]==25)
                    cout<<"   Y";
                else if(z[i][2]==26)
                    cout<<"   Z";
            cout<<endl;
            }

        counter_2=counter;


            counter=0;
        for(int i=0;i<1000000;i++)
            if(d[i]!=0){
                e1=i/10000;
                e2=(i-e1*10000)/100;
                e3=i-e1*10000-e2*100;
                x=d[i]/tot[e1];
                if(x>=min_conf){
                    t[counter][0]=e1;
                    t[counter][1]=e2;
                    t[counter][2]=e3;
                    divid[counter]=e1;
                    counter++;
                }
                x=d[i]/tot[e2];
                if(x>=min_conf){
                    t[counter][0]=e2;
                    t[counter][1]=e3;
                    t[counter][2]=e1;
                    divid[counter]=e2;
                    counter++;
                }
                x=d[i]/tot[e3];
                if(x>=min_conf){
                    t[counter][0]=e3;
                    t[counter][1]=e1;
                    t[counter][2]=e2;
                    divid[counter]=e3;
                    counter++;
                }
            }

/////////////
        counter2=0;
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==0){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                        counter2++;
                }
        //B
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==1){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                        counter2++;
                }

        //C
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==2){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //D
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==3){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //E
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==4){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //F
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==5){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //G
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==6){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //H
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==7){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        //I
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==8){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==9){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==10){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==11){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==12){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==13){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==14){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==15){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==16){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==17){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==18){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==19){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==20){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==21){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==22){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==23){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==24){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }
        for(int i=0;i<counter;i++)
            for(int j=0;j<3;j++)
                if(t[i][0]==25){
                    g[counter2][j]=t[i][j]+1;
                    if(g[counter2][0]!=0 && g[counter2][1]!=0 && g[counter2][2]!=0 )
                    counter2++;
                }

        for(int i=0;i<counter2;i++){
                if(g[i][0]==1)
                    cout<<"A";
                else if(g[i][0]==2)
                    cout<<"B";
                else if(g[i][0]==3)
                    cout<<"C";
                else if(g[i][0]==4)
                    cout<<"D";
                else if(g[i][0]==5)
                    cout<<"E";
                else if(g[i][0]==6)
                    cout<<"F";
                else if(g[i][0]==7)
                    cout<<"G";
                else if(g[i][0]==8)
                    cout<<"H";
                else if(g[i][0]==9)
                    cout<<"I";
                else if(g[i][0]==10)
                    cout<<"J";
                else if(g[i][0]==11)
                    cout<<"K";
                else if(g[i][0]==12)
                    cout<<"L";
                else if(g[i][0]==13)
                    cout<<"M";
                else if(g[i][0]==14)
                    cout<<"N";
                else if(g[i][0]==15)
                    cout<<"O";
                else if(g[i][0]==16)
                    cout<<"P";
                else if(g[i][0]==17)
                    cout<<"Q";
                else if(g[i][0]==18)
                    cout<<"R";
                else if(g[i][0]==19)
                    cout<<"S";
                else if(g[i][0]==20)
                    cout<<"T";
                else if(g[i][0]==21)
                    cout<<"U";
                else if(g[i][0]==22)
                    cout<<"V";
                else if(g[i][0]==23)
                    cout<<"W";
                else if(g[i][0]==24)
                    cout<<"X";
                else if(g[i][0]==25)
                    cout<<"Y";
                else if(g[i][0]==26)
                    cout<<"Z";

                if(g[i][2]==1)
                    cout<<"   A";
                else if(g[i][2]==2)
                    cout<<"   B";
                else if(g[i][2]==3)
                    cout<<"   C";
                else if(g[i][2]==4)
                    cout<<"   D";
                else if(g[i][2]==5)
                    cout<<"   E";
                else if(g[i][2]==6)
                    cout<<"   F";
                else if(g[i][2]==7)
                    cout<<"   G";
                else if(g[i][2]==8)
                    cout<<"   H";
                else if(g[i][2]==9)
                    cout<<"   I";
                else if(g[i][2]==10)
                    cout<<"   J";
                else if(g[i][2]==11)
                    cout<<"   K";
                else if(g[i][2]==12)
                    cout<<"   L";
                else if(g[i][2]==13)
                    cout<<"   M";
                else if(g[i][2]==14)
                    cout<<"   N";
                else if(g[i][2]==15)
                    cout<<"   O";
                else if(g[i][2]==16)
                    cout<<"   P";
                else if(g[i][2]==17)
                    cout<<"   Q";
                else if(g[i][2]==18)
                    cout<<"   R";
                else if(g[i][2]==19)
                    cout<<"   S";
                else if(g[i][2]==20)
                    cout<<"   T";
                else if(g[i][2]==21)
                    cout<<"   U";
                else if(g[i][2]==22)
                    cout<<"   V";
                else if(g[i][2]==23)
                    cout<<"   W";
                else if(g[i][2]==24)
                    cout<<"   X";
                else if(g[i][2]==25)
                    cout<<"   Y";
                else if(g[i][2]==26)
                    cout<<"   Z";




                if(g[i][1]==1)
                    cout<<"A";
                else if(g[i][1]==2)
                    cout<<"B";
                else if(g[i][1]==3)
                    cout<<"C";
                else if(g[i][1]==4)
                    cout<<"D";
                else if(g[i][1]==5)
                    cout<<"E";
                else if(g[i][1]==6)
                    cout<<"F";
                else if(g[i][1]==7)
                    cout<<"G";
                else if(g[i][1]==8)
                    cout<<"H";
                else if(g[i][1]==9)
                    cout<<"I";
                else if(g[i][1]==10)
                    cout<<"J";
                else if(g[i][1]==11)
                    cout<<"K";
                else if(g[i][1]==12)
                    cout<<"L";
                else if(g[i][1]==13)
                    cout<<"M";
                else if(g[i][1]==14)
                    cout<<"N";
                else if(g[i][1]==15)
                    cout<<"O";
                else if(g[i][1]==16)
                    cout<<"P";
                else if(g[i][1]==17)
                    cout<<"Q";
                else if(g[i][1]==18)
                    cout<<"R";
                else if(g[i][1]==19)
                    cout<<"S";
                else if(g[i][1]==20)
                    cout<<"T";
                else if(g[i][1]==21)
                    cout<<"U";
                else if(g[i][1]==22)
                    cout<<"V";
                else if(g[i][1]==23)
                    cout<<"W";
                else if(g[i][1]==24)
                    cout<<"X";
                else if(g[i][1]==25)
                    cout<<"Y";
                else if(g[i][1]==26)
                    cout<<"Z";





            cout<<endl;
            }


///////////


    //Output
    ofstream out("association_rule.txt");
for(int i=0;i<counter_1;i++){
                if(zz[i][0]==1)
                    out<<"A ";
                else if(zz[i][0]==2)
                    out<<"B ";
                else if(zz[i][0]==3)
                    out<<"C ";
                else if(zz[i][0]==4)
                    out<<"D ";
                else if(zz[i][0]==5)
                    out<<"E ";
                else if(zz[i][0]==6)
                    out<<"F ";
                else if(zz[i][0]==7)
                    out<<"G ";
                else if(zz[i][0]==8)
                    out<<"H ";
                else if(zz[i][0]==9)
                    out<<"I ";
                else if(zz[i][0]==10)
                    out<<"J ";
                else if(zz[i][0]==11)
                    out<<"K ";
                else if(zz[i][0]==12)
                    out<<"L ";
                else if(zz[i][0]==13)
                    out<<"M ";
                else if(zz[i][0]==14)
                    out<<"N ";
                else if(zz[i][0]==15)
                    out<<"O ";
                else if(zz[i][0]==16)
                    out<<"P ";
                else if(zz[i][0]==17)
                    out<<"Q ";
                else if(zz[i][0]==18)
                    out<<"R ";
                else if(zz[i][0]==19)
                    out<<"S ";
                else if(zz[i][0]==20)
                    out<<"T ";
                else if(zz[i][0]==21)
                    out<<"U ";
                else if(zz[i][0]==22)
                    out<<"V ";
                else if(zz[i][0]==23)
                    out<<"W ";
                else if(zz[i][0]==24)
                    out<<"X ";
                else if(zz[i][0]==25)
                    out<<"Y ";
                else if(zz[i][0]==26)
                    out<<"Z ";

                if(zz[i][1]==1)
                    out<<"A";
                else if(zz[i][1]==2)
                    out<<"B";
                else if(zz[i][1]==3)
                    out<<"C";
                else if(zz[i][1]==4)
                    out<<"D";
                else if(zz[i][1]==5)
                    out<<"E";
                else if(zz[i][1]==6)
                    out<<"F";
                else if(zz[i][1]==7)
                    out<<"G";
                else if(zz[i][1]==8)
                    out<<"H";
                else if(zz[i][1]==9)
                    out<<"I";
                else if(zz[i][1]==10)
                    out<<"J";
                else if(zz[i][1]==11)
                    out<<"K";
                else if(zz[i][1]==12)
                    out<<"L";
                else if(zz[i][1]==13)
                    out<<"M";
                else if(zz[i][1]==14)
                    out<<"N";
                else if(zz[i][1]==15)
                    out<<"O";
                else if(zz[i][1]==16)
                    out<<"P";
                else if(zz[i][1]==17)
                    out<<"Q";
                else if(zz[i][1]==18)
                    out<<"R";
                else if(zz[i][1]==19)
                    out<<"S";
                else if(zz[i][1]==20)
                    out<<"T";
                else if(zz[i][1]==21)
                    out<<"U";
                else if(zz[i][1]==22)
                    out<<"V";
                else if(zz[i][1]==23)
                    out<<"W";
                else if(zz[i][1]==24)
                    out<<"X";
                else if(zz[i][1]==25)
                    out<<"Y";
                else if(zz[i][1]==26)
                    out<<"Z";
                out<<endl;
        }

    for(int i=0;i<counter_2;i++){
                if(z[i][0]==1)
                    out<<"A";
                else if(z[i][0]==2)
                    out<<"B";
                else if(z[i][0]==3)
                    out<<"C";
                else if(z[i][0]==4)
                    out<<"D";
                else if(z[i][0]==5)
                    out<<"E";
                else if(z[i][0]==6)
                    out<<"F";
                else if(z[i][0]==7)
                    out<<"G";
                else if(z[i][0]==8)
                    out<<"H";
                else if(z[i][0]==9)
                    out<<"I";
                else if(z[i][0]==10)
                    out<<"J";
                else if(z[i][0]==11)
                    out<<"K";
                else if(z[i][0]==12)
                    out<<"L";
                else if(z[i][0]==13)
                    out<<"M";
                else if(z[i][0]==14)
                    out<<"N";
                else if(z[i][0]==15)
                    out<<"O";
                else if(z[i][0]==16)
                    out<<"P";
                else if(z[i][0]==17)
                    out<<"Q";
                else if(z[i][0]==18)
                    out<<"R";
                else if(z[i][0]==19)
                    out<<"S";
                else if(z[i][0]==20)
                    out<<"T";
                else if(z[i][0]==21)
                    out<<"U";
                else if(z[i][0]==22)
                    out<<"V";
                else if(z[i][0]==23)
                    out<<"W";
                else if(z[i][0]==24)
                    out<<"X";
                else if(z[i][0]==25)
                    out<<"Y";
                else if(z[i][0]==26)
                    out<<"Z";
                    //1
                if(z[i][1]==1)
                    out<<"A";
                else if(z[i][1]==2)
                    out<<"B";
                else if(z[i][1]==3)
                    out<<"C";
                else if(z[i][1]==4)
                    out<<"D";
                else if(z[i][1]==5)
                    out<<"E";
                else if(z[i][1]==6)
                    out<<"F";
                else if(z[i][1]==7)
                    out<<"G";
                else if(z[i][1]==8)
                    out<<"H";
                else if(z[i][1]==9)
                    out<<"I";
                else if(z[i][1]==10)
                    out<<"J";
                else if(z[i][1]==11)
                    out<<"K";
                else if(z[i][1]==12)
                    out<<"L";
                else if(z[i][1]==13)
                    out<<"M";
                else if(z[i][1]==14)
                    out<<"N";
                else if(z[i][1]==15)
                    out<<"O";
                else if(z[i][1]==16)
                    out<<"P";
                else if(z[i][1]==17)
                    out<<"Q";
                else if(z[i][1]==18)
                    out<<"R";
                else if(z[i][1]==19)
                    out<<"S";
                else if(z[i][1]==20)
                    out<<"T";
                else if(z[i][1]==21)
                    out<<"U";
                else if(z[i][1]==22)
                    out<<"V";
                else if(z[i][1]==23)
                    out<<"W";
                else if(z[i][1]==24)
                    out<<"X";
                else if(z[i][1]==25)
                    out<<"Y";
                else if(z[i][1]==26)
                    out<<"Z";
                //2
                if(z[i][2]==1)
                    out<<" A";
                else if(z[i][2]==2)
                    out<<" B";
                else if(z[i][2]==3)
                    out<<" C";
                else if(z[i][2]==4)
                    out<<" D";
                else if(z[i][2]==5)
                    out<<" E";
                else if(z[i][2]==6)
                    out<<" F";
                else if(z[i][2]==7)
                    out<<" G";
                else if(z[i][2]==8)
                    out<<" H";
                else if(z[i][2]==9)
                    out<<" I";
                else if(z[i][2]==10)
                    out<<" J";
                else if(z[i][2]==11)
                    out<<" K";
                else if(z[i][2]==12)
                    out<<" L";
                else if(z[i][2]==13)
                    out<<" M";
                else if(z[i][2]==14)
                    out<<" N";
                else if(z[i][2]==15)
                    out<<" O";
                else if(z[i][2]==16)
                    out<<" P";
                else if(z[i][2]==17)
                    out<<" Q";
                else if(z[i][2]==18)
                    out<<" R";
                else if(z[i][2]==19)
                    out<<" S";
                else if(z[i][2]==20)
                    out<<" T";
                else if(z[i][2]==21)
                    out<<" U";
                else if(z[i][2]==22)
                    out<<" V";
                else if(z[i][2]==23)
                    out<<" W";
                else if(z[i][2]==24)
                    out<<" X";
                else if(z[i][2]==25)
                    out<<" Y";
                else if(z[i][2]==26)
                    out<<" Z";
                out<<endl;
            }
    for(int i=0;i<counter2;i++){
                if(g[i][0]==1)
                    out<<"A";
                else if(g[i][0]==2)
                    out<<"B";
                else if(g[i][0]==3)
                    out<<"C";
                else if(g[i][0]==4)
                    out<<"D";
                else if(g[i][0]==5)
                    out<<"E";
                else if(g[i][0]==6)
                    out<<"F";
                else if(g[i][0]==7)
                    out<<"G";
                else if(g[i][0]==8)
                    out<<"H";
                else if(g[i][0]==9)
                    out<<"I";
                else if(g[i][0]==10)
                    out<<"J";
                else if(g[i][0]==11)
                    out<<"K";
                else if(g[i][0]==12)
                    out<<"L";
                else if(g[i][0]==13)
                    out<<"M";
                else if(g[i][0]==14)
                    out<<"N";
                else if(g[i][0]==15)
                    out<<"O";
                else if(g[i][0]==16)
                    out<<"P";
                else if(g[i][0]==17)
                    out<<"Q";
                else if(g[i][0]==18)
                    out<<"R";
                else if(g[i][0]==19)
                    out<<"S";
                else if(g[i][0]==20)
                    out<<"T";
                else if(g[i][0]==21)
                    out<<"U";
                else if(g[i][0]==22)
                    out<<"V";
                else if(g[i][0]==23)
                    out<<"W";
                else if(g[i][0]==24)
                    out<<"X";
                else if(g[i][0]==25)
                    out<<"Y";
                else if(g[i][0]==26)
                    out<<"Z";
                if(g[i][2]==1)
                    out<<" A";
                else if(g[i][2]==2)
                    out<<" B";
                else if(g[i][2]==3)
                    out<<" C";
                else if(g[i][2]==4)
                    out<<" D";
                else if(g[i][2]==5)
                    out<<" E";
                else if(g[i][2]==6)
                    out<<" F";
                else if(g[i][2]==7)
                    out<<" G";
                else if(g[i][2]==8)
                    out<<" H";
                else if(g[i][2]==9)
                    out<<" I";
                else if(g[i][2]==10)
                    out<<" J";
                else if(g[i][2]==11)
                    out<<" K";
                else if(g[i][2]==12)
                    out<<" L";
                else if(g[i][2]==13)
                    out<<" M";
                else if(g[i][2]==14)
                    out<<" N";
                else if(g[i][2]==15)
                    out<<" O";
                else if(g[i][2]==16)
                    out<<" P";
                else if(g[i][2]==17)
                    out<<" Q";
                else if(g[i][2]==18)
                    out<<" R";
                else if(g[i][2]==19)
                    out<<" S";
                else if(g[i][2]==20)
                    out<<" T";
                else if(g[i][2]==21)
                    out<<" U";
                else if(g[i][2]==22)
                    out<<" V";
                else if(g[i][2]==23)
                    out<<" W";
                else if(g[i][2]==24)
                    out<<" X";
                else if(g[i][2]==25)
                    out<<" Y";
                else if(g[i][2]==26)
                    out<<" Z";


                if(g[i][1]==1)
                    out<<"A";
                else if(g[i][1]==2)
                    out<<"B";
                else if(g[i][1]==3)
                    out<<"C";
                else if(g[i][1]==4)
                    out<<"D";
                else if(g[i][1]==5)
                    out<<"E";
                else if(g[i][1]==6)
                    out<<"F";
                else if(g[i][1]==7)
                    out<<"G";
                else if(g[i][1]==8)
                    out<<"H";
                else if(g[i][1]==9)
                    out<<"I";
                else if(g[i][1]==10)
                    out<<"J";
                else if(g[i][1]==11)
                    out<<"K";
                else if(g[i][1]==12)
                    out<<"L";
                else if(g[i][1]==13)
                    out<<"M";
                else if(g[i][1]==14)
                    out<<"N";
                else if(g[i][1]==15)
                    out<<"O";
                else if(g[i][1]==16)
                    out<<"P";
                else if(g[i][1]==17)
                    out<<"Q";
                else if(g[i][1]==18)
                    out<<"R";
                else if(g[i][1]==19)
                    out<<"S";
                else if(g[i][1]==20)
                    out<<"T";
                else if(g[i][1]==21)
                    out<<"U";
                else if(g[i][1]==22)
                    out<<"V";
                else if(g[i][1]==23)
                    out<<"W";
                else if(g[i][1]==24)
                    out<<"X";
                else if(g[i][1]==25)
                    out<<"Y";
                else if(g[i][1]==26)
                    out<<"Z";
            out<<endl;
            }
    return 0;
}

