# include <iostream>
using namespace std;
class month
{
public:
char *name;
int days;
}; // end of class
int main ( )
{
month M1,M3; // object declaration
M1.name="January";
M1.days=31;
M3.name="March";
M3.days=31;
cout <<"\n Object M1 ";
cout <<"\n Month name : "<<M1.name <<" Address:"<<(unsigned)&M1.name;
cout <<"\n Days :" <<M1.days <<"\t\t Address : "<<(unsigned)&M1.days;
cout <<"\n\n Object M3 ";
cout <<"\n Month name : "<<M3.name <<"\t Address :"<<(unsigned)&M3.name;
cout <<"\n Days :" <<M3.days <<"\t\t Address : "<<(unsigned)&M3.days;
return 0;
}
