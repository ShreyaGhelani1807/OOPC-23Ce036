#include<iostream>
using namespace std;
struct employee{
        int id;
        char empname[30];
        char quali[15];
        char exp[10];
        long int contact;
        char detail;
      getdata()
        {
            cout<<"enter an employee id:";
            cin>>id;
            if(id<=1000)
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
                    cout<<"error: interested employee is does not exist"<<endl;
                }
        }

    }e1;


int main()
{
   again: e1.getdata();
        char detail;
        cout<<"press Y to get another employee detail,press N to exit:"<<detail<<endl;
        cin>>detail;
        if(detail=='y'||'Y')
        {
            goto again;

        }
        return 0;
    }
