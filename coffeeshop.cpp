
#include<iostream>
using namespace std;
int main()
{
   int p,d,count = 0;
   cin >> p >> d;
   d = 100 - d;
   while(p>0)
   {
       count = count + p;
       p = (d*p) / 100;
   }
   cout <<  count;
   return 0;
}
