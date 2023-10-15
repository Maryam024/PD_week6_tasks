#include<iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
 string yearType;
 double holidays,hometownWeekends;
 cout<<"Enter year type: ";
 cin>>yearType;
 cout<<"Enter number of holidays: ";
 cin>>holidays;
 cout<<"Enter number of weekends: ";
 cin>>hometownWeekends;

 int result;
 result=calculateVolleyballGames(yearType, holidays,hometownWeekends);
 
 cout<<result;

}
calculateVolleyballGames(string yearType, int holidays,int hometownWeekends)
{
float holidayplay,time;
int playtime;
holidayplay=holidays*0.667;
time=holidayplay+hometownWeekends+48;

if(yearType=="leap")
{
 playtime=time-(time*0.15);
 return playtime;
}

else
{
 playtime=time*0.75;
 return playtime;
}
}
