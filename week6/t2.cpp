#include<iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

main(){
    string name;
    float eng, math, chem, science, biology;

    cout<<"Enter student name: ";
    cin>>name;

    cout<<"Enter marks for English: ";
    cin>>eng;

    cout<<"Enter marks for Maths: ";
    cin>>math;

    cout<<"Enter marks for Chemistry: ";
    cin>>chem;
    
    cout<<"Enter marks for Social Science: ";
    cin>>science;

    cout<<"Enter marks for Biology: ";
    cin>>biology;

    float average = calculateAverage( eng,math,chem,science, biology);
    string grade = calculateGrade( average);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<average<<"%"<<endl;
    cout<<"Grade: "<<grade;
}

float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology){
    float avg;
    avg =marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology; 
    avg=avg/500;
    avg=avg*100;
    return avg;
    }

string calculateGrade(float average){
    string grade;
    if(average>=90){
        grade="A+";

    }
    if(average>=80 && average<90){
        grade = "A";
    
    }

    if(average>=70 && average<80){
        grade = "B+";
    
    }

    if(average>=60 && average<70){
        grade = "B";
    
    }

    if(average>=50 && average<60){
        grade = "C";
    
    }

    if(average>=40 && average<50){
        grade = "D";
    
    }

    if(average<=40){
        grade = "F";
    
    }
return grade;

}
