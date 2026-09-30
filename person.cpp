#include <iostream>
using namespace std;

class person
{
    char name[64];
    int age;
    char address[64];
    int basic;
    float da;
    float hra;
    float gross;

    public:

    person(const char n[], int a, const char add[], int base)
    {
        int i;
        for(i=0; n[i]!='\0'; i++)
        {
            name[i]=n[i];
        }
        name[i]='\0';
        
        for(i=0; add[i]!='\0';i++)
        {
            address[i]=add[i];
        }
        address[i]='\0';
        age=a;
        basic=base;
        da=0.5*basic;
        hra=0.3*basic;
        gross=basic+da+hra;
    }

    inline static void youngest_eldest(person obj[], int n)
    {
        int youngest = obj[0].age;
        int eldest = obj[0].age;
        for(int i=0; i<n; i++)
        {
            if(youngest > obj[i].age)
            youngest = obj[i].age;

            if(eldest < obj[i].age)
            eldest = obj[i].age;
        }

        cout<<"Youngest member age: "<<youngest<<endl;
        cout<<"Oldest member age: "<<eldest<<endl;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Base Salary: "<<basic<<endl;
        cout<<"Net salary: "<<gross<<endl;
    }
};

int main()
{
     person obj[10] =
    {
        {"Ayush", 20, "Kolkata", 50000},
        {"Rahul Kumar", 22, "Delhi", 45000},
        {"Aman Singh", 19, "Mumbai", 40000},
        {"Rohit Sharma", 25, "Patna", 60000},
        {"Raj", 21, "Pune", 55000},
        {"Ankit Kumar", 24, "Ranchi", 48000},
        {"Vivek", 28, "Jaipur", 70000},
        {"Karan Singh", 23, "Bangalore", 65000},
        {"Aditya", 26, "Chennai", 58000},
        {"Arjun Kumar", 30, "Hyderabad", 75000}
    };

     person::youngest_eldest(obj, 10);
     for(int i=0; i<10; i++)
     {
        obj[i].display();
     }
     return 0;
}