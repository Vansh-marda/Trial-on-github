#include <iostream>
using namespace std;
int main()
{
   int n;int t;
   cin>>n;
   for(t=2;t<n;t++)
   {
       if(n%t==0)
       {
       break;
       }
    }
   if(t==n){
       cout<<"the no. is a prime no.";
   }
   else{
   cout<<"the no. is not a prime no.";
   }
   return 0;
}