#include <iostream>
#include <string>
using namespace std;
class detail
{
public:
    int number;
    string modelName;
    string fuelType;
    float showroomPrice;
    float mileage;
    string transmission;
    float tankCapacity;
    int seating;
    string airbags;

    void getDetails()
    {
        cout << "Enter car details \n";
        cout << "Number: ";
        cin >> number;
        cin.ignore(); // Ignore newline character
        cout << "Model name: ";
        cin >> modelName;
        cout << "Fuel type (petrol, diesel, cng, electric): ";
        cin >> fuelType;
        cout << "Showroom price: ";
        cin >> showroomPrice;
        cout << "Mileage: ";
        cin >> mileage;
        cout << "Transmission (Manual or AMT): ";
        cin >> transmission;
        cout << "Tank capacity: ";
        cin >> tankCapacity;
        cout << "Seating: ";
        cin >> seating;
        cout << "Airbags (Yes or No): ";
        cin >> airbags;
    }

    void putDetails()
    {
        cout << "Model : " << modelName << endl;
        cout << "Fuel type : " << fuelType << endl;
        cout << "Showroom price : " << showroomPrice << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Transmission (Manual or AMT): " << transmission << endl;
        cout << "Tank capacity : " << tankCapacity << endl;
        cout << "Seating : " << seating << endl;
        cout << "Airbags : " << airbags << endl;
        cout << "---------------------------------------------------------" << endl;
    }
};

int main()
{
    detail c[7];
    for (int i = 0; i < 2; i++)
    {
        c[i].getDetails();
    }

    for (int i = 0; i < 2; i++)
    {
        c[i].putDetails();
    }

    int option;
    cout << "WELCOME TO TATA MOTORS" << endl;
    cout << "GET THE CAR DETAILS AS PER YOUR PREFERENCE" << endl;
    cout << "1)Model Name 2)Fuel Type 3)Price Range" << endl;
    cout << "ENTER YOUR OPTION: ";
    cin >> option;
    if (option == 1)
    {
        for (int i = 0; i < 7; i++)
        {
            cout << "(" << i + 1 << ")";
            cout << c[i].modelName << endl;
        }
        int num;
        cout << "CHOOSE MODEL TO GET DETAIL: ";
        cin >> num;

        c[num - 1].putDetails();
    }
    else if (option == 2)
    {
        cout << "1)Petrol 2)Diesel 3)cng 4)electeric" << endl;
        string numb;
        cout << "CHOOSE FUEL TYPE TO GET DETAIL: ";
        cin >> numb;
        for (int i = 0; i < 7; i++)
           { if(strcmp(numb,c[i].fuelType) != 1)

              {
                c[i].putDetails();
              }
           }
    }

    else if (option == 3)
    {
        int price;
        cout << "ENTER THE MAX PRICE :";
        cin >> price;

        for (int i = 0; i < 7; i++)
        {
            if (c[i].showroomPrice <= Price)
            {
                c[i].putDetails();
            }
        }
    }
    else
    {
        cout << "Enter valid Input!!" << endl;
    }
    return 0;
}