/*

11111
2222
333
44
5

*/

#include<iostream.h>
#include<conio.h>
int main()
{
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=5;j>=i;j--)
   {
    cout<<i;
   }
  cout<<"\n";
 }
}
