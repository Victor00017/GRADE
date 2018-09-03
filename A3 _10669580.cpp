#include <iostream>

using namespace std;

int main()
{
int score;
cout <<"ENTER SCORE"<<endl;
cin>>score;

if(score>=80 && score<= 100)
cout<< "A"<<endl;

if(score>=75 && score<=79)
cout<<"B+"<<endl;

if(score>=70 && score<=74)
cout<<"B"<<endl;

if (score>=65 && score<=69)
cout<<"C+"<<endl;

if (score>=60 &&score<=64)
cout<<"C"<<endl;

if (score>=55 && score<=59)
cout<<"D+"<<endl;

if(score>=50 && score<=54)
cout<<"D"<<endl;

if(score>=45 && score<=49)
cout<<"E"<<endl;

if (score>=0 && score<=44)
cout<<"F"<<endl;

else if(score< 0 && score> 100) 
cout<<"ENTER SCORE AGAIN"<<endl;



}



