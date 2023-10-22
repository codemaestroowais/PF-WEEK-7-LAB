#include <iostream>
using namespace std;
int calculation(int money, int era);
void result(int resul,int money);
main()
{
    int money, era;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>era;
    era=era;
    if (era>1800 && era<1901){
    int resul=calculation(money, era);
    result(resul,money);
    }
}
int calculation(int money, int era)
{
    int evenone, oddone;
    int n=0, num=0;
    int yearleft=1;
    remainingYear=(era-1799);
    if (era%2==0)
    {
        oddone=(yearleft-1)/2;
        evenone=(yearleft+1)/2;
    }
    else{
        oddone=(yearleft+1)/2;
        evenone=(yearleft+1)/2;
    }
    n=evenone*12000;
    int age=17;
    for(int day=1801; day<=era; day=day+2){
        int odd=0;
         age=age+2;
    odd=(12000+(50*age));
    num=num+odd;
    }
    int Spendamount=n+num;
    int ans;
    ans=money-Spendamount;
    return ans;
}
void result(int resul,int money){
    if (resul>=0){
        cout<<"Yes! He will live a carefree life and will have "<<resul<<" dollars left.";
    }
    else
    {
        if (resul<0)
        {
            resul=-resul;
        }
        cout<<"He will need "<<resul<<" dollars to survive.";
    }
}