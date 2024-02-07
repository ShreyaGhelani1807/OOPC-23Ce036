#include<iostream>
using namespace std;
struct employee{
    //data member
        int id;
        char empname[30];
        char quali[15];
        char exp[10];
        long int contact;
        char detail;
    //meber function
      getdata()
        {
            cout<<"enter an employee id:";
            cin>>id;
            if(id>999&&id<10000)
            {
            cout<<"enter the employee name:";
            cin>>empname;
            cout<<"enter the employee qualification:";
            cin>>quali;
            cout<<"enter the employee experience:";
            cin>>exp;
            cout<<"enter the employee contact number:";
            cin>>contact;
            }
    else
    {
        cout<<"error: intrested employee is does not exist";
    }
        }

    }e1;


main()
{
   again: e1.getdata();
        char detail;
        cout<<"press Y to get another employee detail,press N to exit:"<<detail<<endl;
        cin>>detail;
        while(detail=='y'||'Y')
        {
            goto again;

        }
        return 0;
    }
    