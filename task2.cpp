#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);

string calculateGrade(float average);

main()
{
    string name;
    cout << "Enter student name: ";
    cin >> name;

    float marksEnglish, marksMaths,
        marksChemistry, marksSocialScience, marksBiology;

    cout << "Enter marks for English: ";
    cin >> marksEnglish;

    cout << "Enter marks for Maths: ";
    cin >> marksMaths;

    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;

    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;

    cout << "Enter marks for Biology: ";
    cin >> marksBiology;

    cout << "Student Name: " << name;

    float result;

    result = calculateAverage(marksEnglish, marksMaths,
                              marksChemistry, marksSocialScience, marksBiology);

    cout << endl
         << "Percentage: " << result << " %";

    cout << endl
         << "Grade: " << calculateGrade(result);
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)

{
    float sum, average;

    sum = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology;
    average = (sum / 500) * 100;

    return average;
}

string calculateGrade(float average)
{
    if (90 <= average && average <= 100)
    {
        return "A+";
    }
    if (80 <= average && average < 90)

    {
        return "A";
    }
    if (70 <= average && average < 80)
    {
        return "B+";
    }
    if (60 <= average && average < 70)
    {
        return "B";
    }
    if (50 <= average && average < 60)
    {
        return "C";
    }
    if (40 <= average && average < 50)
    {
        return "D";
    }
    if (average < 40)
    {
        return "F";
    }
}
