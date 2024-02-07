#include <iostream>
using namespace std;
int main()
{
    char id[8];
    char name[20];
    string grade[6];
    int i,sum=0,sem,gradepoint[6],sub[6],SGPA,cr[6];

    cout<<"Enter Student ID:";
    cin>>id;
    cout<<"Enter Student Name:";
    cin>>name;
    cout<<"Enter Semester:";
    cin>>sem;

    cout<<"Enter The Practical Marks Of CCP:";
    cin>>sub[0];
    cout<<"Enter Credit Of CCP Practical";
    cin>>cr[0];
    cout<<"Enter The Theory Marks Of CCP:";
    cin>>sub[1];
    cout<<"Enter Credit Of CCP Theory";
    cin>>cr[1];
    cout<<"Enter The Practical Marks Of BEEE:";
    cin>>sub[2];
    cout<<"Enter Credit Of BEEE Practical";
    cin>>cr[2];
    cout<<"Enter The Theory Marks Of BEEE:";
    cin>>sub[3];
    cout<<"Enter Credit Of BEEE Theory";
    cin>>cr[3];
    cout<<"Enter The Practical Marks Of HS:";
    cin>>sub[4];
    cout<<"Enter Credit Of HS Practical";
    cin>>cr[4];
    cout<<"Enter The Theory Marks Of HS:";
    cin>>sub[5];
    cout<<"Enter Credit Of HS Theory";
    cin>>cr[5];

    for(i=0 ; i<6 ; i++)
    {
        if(sub[i]>=80  && sub[i]<=100)
        {
            gradepoint[i]=10;
            grade[i]="AA";
        }
        else if(sub[i]>=73  && sub[i]<80)
        {
            gradepoint[i]=9;
            grade[i]="AB";
        }
        else if(sub[i]>=66  && sub[i]<73)
        {
            gradepoint[i]=8;
            grade[i]="BB";
        }
        else if(sub[i]>=60  && sub[i]<66)
        {
            gradepoint[i]=7;
            grade[i]="BC";
        }
        else if(sub[i]>=55  && sub[i]<60)
        {
            gradepoint[i]=6;
            grade[i]="CC";
        }
        else if(sub[i]>=50  && sub[i]<55)
        {
            gradepoint[i]=5;
            grade[i]="CD";
        }
        else if(sub[i]>=45  && sub[i]<50)
        {
            gradepoint[i]=4;
            grade[i]="DD";
        }

        else
        {
            gradepoint[i]=0;
            grade[i]="FF";
        }
    }

        for(i=0 ; i<6 ; i++)
        {
          sum=sum+(cr[i]*gradepoint[i]);
          SGPA=sum/cr[i];
        }
        cout<<"Student ID:"<<id<<endl;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Semester:"<<sem<<endl;
        cout<<"\t\t\t\t\t\t\t\t\tPRACTICAL\t\tTHEORY"<<endl;
        cout<<"Computer Programming:\t\t"<<grade[0]<< "\t"<<grade[1]<<endl;
         cout<<"Basic Of Electronics:\t\t"<<grade[2]<< "\t"<<grade[3]<<endl;
          cout<<"Proffessional Communication:\t\t"<<grade[4]<< "\t"<<grade[5]<<endl;

          cout<<"SGPA="<<SGPA;
return 0;
}