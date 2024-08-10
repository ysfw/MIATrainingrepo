#include <bits/stdc++.h>
#include <string.h>
using namespace std ;

const int MAX = 17;

struct Course {
    string name;
    int credit;
    float score;
    float grade;
};

struct Student{
    string name;
    int id;
    float numCourses;
    Course courses [MAX];
    float GPA ;
};

float getgrade(float score){
    if (score>=80){
        return 4.0;
    }
    else if (score>=70){
        return 3.0;
    }
    else if (score>=60){
        return 2.0;
    }
      else if (score>=50){
        return 1.0;
    }
    else {
        return 0 ;
    }
}

void printCourse(Course crs){
    cout << "\tCourse Name: " <<crs.name<<endl;
        cout << "\tCourse Credit: " <<crs.credit<<endl;
            cout << "\tCourse Grade: " <<crs.grade<<endl;
}

void printStudent(Student std){
    cout << "Name:" << std.name <<endl;
    cout << "id:" << std.id <<endl;
    cout << "numCourses:" << std.numCourses <<endl;
    for(int i =0;i<std.numCourses;i++){
        printCourse(std.courses[i]);
    }
cout << "GPA:"<<setprecision(2) << std.GPA <<endl;

}

void getgpa (Student &std){
    float totalpoints=0,totalcredits=0;
    for (int i=0 ; i<std.numCourses ; i++){
        totalpoints+=std.courses[i].grade*std.courses[i].credit;
        totalcredits+=std.courses[i].credit;
    }
    std.GPA= totalpoints / totalcredits;
}


int main () {
   Student std;
   cout << "Enter your name: ";
   getline(cin,std.name);
   cout << "Enter your id:";
   cin >> std.id;
   cout << "Enter your num of courses:";
   cin >> std.numCourses;
   int idx=0;
   while (idx<std.numCourses){
    cout << "Enter Course ("<<idx+1<<") Name :";
    cin.ignore();
    getline(cin,std.courses[idx].name);
    cout << "Enter Course ("<<idx+1<<") Credit :";
    cin >> std.courses[idx].credit;
     cout << "Enter Course ("<<idx+1<<") Score :";
    cin >> std.courses[idx].score;
    std.courses[idx].grade = getgrade(std.courses[idx].score);
    idx++;
   }
getgpa(std);
printStudent(std);
    }
