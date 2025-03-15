#include <iostream>
#include <string>
using namespace std;

   string calculateGrade(int score) {
       
   if ( score >= 90 && score <= 100){
         return "A";
    } else if (score >= 80 && score < 89){
         return "B";
    } else if (score >= 70 && score < 79){
         return "C";
    } else if (score >= 60 && score < 69 ) {
         return "D";
         
   } else {
       return "F";
   }
   }
   
   


 int main() {  
    
//int students;

int numberstudents;

cout << "please enter number of students: ";
cin >> numberstudents;

string name[numberstudents];
int numscore[numberstudents];
double testscore[numberstudents][10];
string grade[numberstudents];
double average[numberstudents];

void displayResults(string names[], double averages[], int grade[], int numberstudents);
double calculateAverage(int scores[], int numScores);
char determineGrade(double avgScore);


for(int i = 0; i < numberstudents; i++){
    
cout << "please enter students name " << (i + 1) << " : ";
cin >> name[i];

double sum = 0;

cout << "please enter number students test score:";
 cin >> numscore[i];
 
 for (int j = 0; j < numscore[i]; j++){
     cout << "enter testscore" << (j + 1) << " : ";
     cin >> testscore[i][j];
     sum += testscore[i][j];
 }
 average[i] =  sum / numscore[i]; 
 grade[i] = calculateGrade(average[i]);
 
 }
 
 cout << "\nResults:" << endl; 
cout << "--------------------------------" << endl; 
cout << left  << "Student" << " | "  << "Average" << " | " << "Grade" << 
endl; 
cout << "--------------------------------" << endl; 
for (int i = 0; i < numberstudents; i++) { 
cout << left  << name[i] << " | "  << fixed  << average[i] << " | " << grade[i] << endl; 
} 
cout << "--------------------------------" << endl; 

 
 
return 0;
}
