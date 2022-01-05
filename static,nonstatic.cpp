# include <iostream>
using namespace std;
class number
{
 static int c; // static variable
 int k; // non-static variable
 public:
void zero( )
 {
 k=0;
 }
void count( )
 {
 ++c;
 ++k;
 cout <<"\n Value of c = "<<c <<" Address of c = "<<&c;
 cout <<"\n Value of k = "<<k <<" Address of k = "<< v  &k;
 }
};
int number :: c=0; // initialization of static member variable
int main( )
{
 number A,B,C;
 A.zero( );
 B.zero( );
 C.zero( );
 A.count( );
 B.count( );
 C.count( );
 return 0;
}
