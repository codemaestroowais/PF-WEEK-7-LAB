#include<iostream>
#include<iomanip>
using namespace std;
void percentage(int number);
main()
{
    int number;
    cout<<"Enter number's count: ";
    cin>>number;
    percentage(number);
}
void percentage(int number)
{
    float p1=0, p2=0, p3=0, p4=0, p5=0;
    for(int per; per<number; per++)
    {
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        if(n<200)
        {
            p1++;
        }
        else if(n>=200 && n<=399)
        {
            p2++;
        }
        else if(n>=400 && n<=599)
        {
            p3++;
        }
        else if(n>=600 && n<=799)
        {
            p4++;
        }
        else
        {
            p5++;
        }
    }
    float total=p1+p2+p3+p4+p5;
    p1=(p1/total)*100.00;
    p2=(p2/total)*100.00;
    p3=(p3/total)*100.00;
    p4=(p4/total)*100.00;
    p5=(p5/total)*100.00;

    cout<<fixed<<setprecision(2);
    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;

}
