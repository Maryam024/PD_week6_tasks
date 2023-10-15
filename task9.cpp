#include<iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);
main()
{
 int h,x,y;
 cout<<"Enter height: ";
 cin>>h;
 cout<<"Enter x coordinate: ";
 cin>>x;
 cout<<"Enter y coordinate: ";
 cin>>y;

cout<<checkPointPosition( h,x,y);

}

string checkPointPosition(int h, int x, int y)
{

if (( x < 0 ) || ( x > 3*h ) || ( y < 0 ) || ( y > 4*h ) || ( x==0 && y > h ) || ( x==3*h && y > h ) || ( x<h && y>h ) || ( x>2*h && y>h ) )
{  
    return "Outside";
}

if (( x==0 ) || ( x == 3*h ) || ( y==0) || ( y==4*h )|| (x==h && y==h) ||  ( x==2*h && h<= y <= 4*h ) || ( x==3*h && y<=h ) || ( x==h && h < y < 4*h))
{
    return "Border";
}
else
{
    return "Inside";
}
    
}