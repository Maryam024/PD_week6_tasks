#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity);
main()
{
string fruit,dayOfWeek;
double quantity;

cout<<"Enter Fruit's name: ";
cin>>fruit;
cout<<"Enter the Day: ";
cin>>dayOfWeek;
cout<<"quantity of "<<fruit<<" is: ";
cin>>quantity;

float result;
result=calculateFruitPrice(fruit,dayOfWeek,quantity);

cout<<"Payable Amount: "<<result;

}
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity)
{

float payable; 

if (dayOfWeek=="Sunday" || dayOfWeek=="Saturday")
{
 if(fruit=="banana")
 {    payable=quantity*2.70;   }
 if(fruit=="apple")
 {    payable=quantity*1.25;   }
if(fruit=="orange")
 {    payable=quantity*0.90;   }
 if(fruit=="grapefruit")
 {    payable=quantity*1.60;   }
 if(fruit=="kiwi")
 {    payable=quantity*3.00;   }
if(fruit=="pineapple")
 {    payable=quantity*5.60;   }
if(fruit=="grapes")
 {    payable=quantity*4.20;   }

}
else
{
 if(fruit=="banana")
 {    payable=quantity*2.50;   }
 if(fruit=="apple")
 {    payable=quantity*1.20;   }
if(fruit=="orange")
 {    payable=quantity*0.85;   }
 if(fruit=="grapefruit")
 {    payable=quantity*1.45;   }
 if(fruit=="kiwi")
 {    payable=quantity*2.70;   }
if(fruit=="pineapple")
 {    payable=quantity*5.50;   }
if(fruit=="grapes")
 {    payable=quantity*3.85;   }
}

return payable;


}