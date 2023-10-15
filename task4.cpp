#include <iostream>
using namespace std;
float CellularCompany(string code, string time, string type, float usedMins);

main()
{
    string code, type, time;
    float usedMins;
    float result;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    if (code == "p" || code == "P")
    {
        cout << "Enter the time of the call(D/d for day, N/n for night): ";
        cin >> time;
    }
    else{
        time="";
    }
    cout << "Enter the number of minutes used: ";
    cin >> usedMins;
   
    cout<<"Service Type: ";
    cin>>type;
    cout << "Total minutes used: " << usedMins << " minutes";

    result = CellularCompany(code, time, type, usedMins);
    cout << endl
         << "Amount Due: $" << result;
}
float CellularCompany(string code, string time, string type, float usedMins)
{
    float amount;
    float extra;

    if (code == "R" || code == "r")
    {
        extra = usedMins - 50;
        if (usedMins > 50)
        {
            amount = 10 + (0.20 * extra);
        }
        else
        {
            amount = 10;
        }
    }

    if (code == "P" || code == "p")
    {
        if (time == "D" || time == "d")
        {
            if (usedMins > 75)
            {
                extra = usedMins - 75;
                amount = 25 + (extra * 0.10);
            }
            else
            {
                amount = 25;
            }
        }
        if (time == "N" || time == "n")
        {
            if (usedMins > 100)
            {
                extra = usedMins - 100;
                amount = 25 + (extra * 0.05);
            }
            else
            {
                amount = 25;
            }
        }
    }
    return amount;
}