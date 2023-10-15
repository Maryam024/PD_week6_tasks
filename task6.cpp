#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month, type;
    int numberOfStays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
    string result;
    result = calculateHotelPrices(month, numberOfStays);

    cout << result;
}
string calculateHotelPrices(string month, int numberOfStays)
{
    float studio1, studio2, studio3, studio;
    float apartment1, apartment2, apartment3, apartment;
    float payable;
    studio2 = 75.20 * numberOfStays;
    studio3 = 76 * numberOfStays;
    apartment1 = 65 * numberOfStays;
    apartment2 = 68.70 * numberOfStays;
    apartment3 = 77 * numberOfStays;

    if (month == "May" || month == "October")
    {
        studio1 = 50 * numberOfStays;
        if (numberOfStays > 7 && numberOfStays <= 14)
        {
            studio = studio1 - (studio1 * 0.05);
            apartment = apartment1;
        }
        else if (numberOfStays > 14)
        {
            studio = studio1 - (studio1 * 0.3);
            apartment = apartment1 - (apartment1 * 0.1);
        }
        else
        {
            studio = studio1;
            apartment = apartment1;
        }
    }

    else if (month == "June" || month == "September")
    {
        if (numberOfStays < 7)
        {
            studio = studio2;
            apartment = apartment2;
        }

        if (numberOfStays > 7 && numberOfStays<=14)
        {
            studio=studio2;
            apartment = apartment2;
        }
        else if (numberOfStays > 14)
        {
            apartment = apartment2 - (apartment2 * 0.1);
            studio = studio2 - (studio2 * 0.2);
        }
    }
    else if (month == "July" || month == "August")
    {
        if (numberOfStays > 14)
        {
            studio = studio3;
            apartment = apartment3 - (apartment3 * 0.1);
        }
        else
        {
            studio = studio3;
            apartment = apartment3;
        }
    }

    return "Appartment: " + to_string(apartment) + "\nStudio: " + to_string(studio);
}