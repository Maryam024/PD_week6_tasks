#include<iostream>
using namespace std;
string decideActivity(string t,string h);
main()
{
string h,t;
cout<<"Enter temperature (warm or cold): ";
cin>>t;
cout<<"Enter humidity (dry or humid): "
cin>>h;

cout<<decideActivity(t,h);

}
string decideActivity(string t,string h)
{
if (t=="warm" && h=="dry")
{     return "Play Tennis";      } 
if (t=="warm" && h=="humid")
{     return="swim";             }
if (t=="cold" && h=="dry")
{     return="Play basketball";  }
if (t=="cold" && h=="humid")
{     return="Watch TV";         }




}