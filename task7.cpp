#include<iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int
studentHour, int studentMinute);

main()
{
int examHour,examMinute,studentHour,studentMinute;

cout<<"Enter Exam Starting Time (hour): ";
cin>>examHour;

cout<<"Enter Exam Starting Time (minutes): ";
cin>>examMinute;

cout<<"Enter Student hour of arrival: ";
cin>>studentHour;

cout<<"Enter Student minutes of arrival: ";
cin>>studentMinute;

string result;
result=checkStudentStatus(examHour, examMinute, studentHour, studentMinute);

cout<<result;

}
string checkStudentStatus(int examHour, int examMinute, int
studentHour, int studentMinute)
{

int extraHours,extraMinutes,extraTime;

extraHours=examHour-studentHour;
extraMinutes=examMinute-studentMinute;
extraTime=(extraHours*60)+extraMinutes;

if(extraTime>30)
{
     return "Early";
}
if(extraTime <= 30)
{
    return "On Time";
}
else
{
    return "Late";
}
 int hour,min;
 string s = to_string(hour) + ":" + to_string(min) + "hours before start";
 
 }