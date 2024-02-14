#include<iostream>
#include<iomanip>
#include<string.h>
//#include<stdlib.h>
using namespace std;
int main()
{
    char id[7],name[20];
    int sem,i,tgrdpnt[3],pgrdpnt[3],tcredit[3],pcredit[3];
    float sgpa=0,totalcrd=0,mul=0;
    string sub[3],tgrade[3],pgrade[3];
    int pmark[3],tmark[3];
    cout<<"Enter id: ";
    cin>>id;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter semester:";
    cin>>sem;

    for(i=0;i<3;i++)
    {
         cout<<"Enter subject "<<i+1<<":";
         cin>>sub[i];

         cout<<"Enter theorymarks:";
         cin>>tmark[i];

         cout<<"Enter practicalmarks:";
         cin>>pmark[i];

          if(tmark[i]>=80&&tmark[i]<=100)
    {
            tgrade[i]={"AA"};
            tgrdpnt[i]=10;
    }
    else if(tmark[i]>=73 && tmark[i]<80)
    {

            tgrade[i]={"AB"};
            tgrdpnt[i]=9;
    }
    else if(tmark[i]>=66&&tmark[i]<73)
    {

            tgrade[i]={"BB"};
            tgrdpnt[i]=8;
    }
    else if(tmark[i]>=60&&tmark[i]<66)
    {

            tgrade[i]={"BC"};
            tgrdpnt[i]=7;
    }
    else if(tmark[i]>=55&&tmark[i]<60)
    {
            tgrade[i]={"CC"};
            tgrdpnt[i]=6;
    }
    else if(tmark[i]>=50&&tmark[i]<55)
    {
            tgrade[i]={"CD"};
            tgrdpnt[i]=5;
    }
    else if(tmark[i]>=45&&tmark[i]<50)
    {
           tgrade[i]={"DD"};
           tgrdpnt[i]=4;
    }
    else
    {
            tgrade[i]={"FF"};
            tgrdpnt[i]=0;
    }
    cout<<"For Subject "<<i+1<<" theory grade is"<<tgrade[i]<<endl;
    if(pmark[i]>=80&&pmark[i]<100)
    {
            pgrade[i]={"AA"};
            pgrdpnt[i]=10;
    }
    else if(pmark[i]>=73&&pmark[i]<80)
    {
            pgrade[i]={"AB"};
            pgrdpnt[i]=9;
    }
    else if(pmark[i]>=66&&pmark[i]<73)
    {
            pgrade[i]={"BB"};
            pgrdpnt[i]=8;
    }
    else if(pmark[i]>=60&&pmark[i]<66)
    {
            pgrade[i]={"BC"};
            pgrdpnt[i]=7;
    }
    else if(pmark[i]>=55&&pmark[i]<60)
    {
            pgrade[i]={"CC"};
            pgrdpnt[i]=6;
    }
    else if(pmark[i]>=50&&pmark[i]<55)
    {
            pgrade[i]={"CD"};
            pgrdpnt[i]=5;
    }
    else if(pmark[i]>=45&&pmark[i]<50)
    {
            pgrade[i]={"DD"};
            pgrdpnt[i]=4;
    }
    else
    {
            pgrade[i]={"FF"};
            pgrdpnt[i]=0;
    }
    cout<<"For Subject "<<i+1<<" practical grade is "<<pgrade[i]<<endl;
    }


    for(i=0;i<3;i++)
    {
        mul=mul+pgrdpnt[i]+tgrdpnt[i];
    }
    sgpa=mul/6;
    cout<<"The sgpa is "<<sgpa<<endl;

    system("cls");

    cout<<"Student ID   : "<<setw(10)<<id<<endl;
    cout<<"Student Name : "<<setw(10)<<name<<endl;
    cout<<"Semester     : "<<setw(10)<<sem<<endl;
    cout<<setw(20)<<"TheoryGrade"<<setw(20)<<"PracticalGrade"<<endl;

    for(i=0;i<3;i++)
    {
        cout<<sub[i]<<setw(10)<<tgrade[i]<<setw(20)<<pgrade[i]<<endl;
    }

    cout<<"SGPA : "<<sgpa<<endl;

}
