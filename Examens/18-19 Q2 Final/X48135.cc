#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 'Subject' stores information about a subject taken by a student: 
// name of the subject and obtained grade
struct Subject {
  string name;
  int grade;
};

// 'Student' stores information about a student: id number, university name, 
// average grade and list of taken subjects with obtained grades. 
struct Student {
  string dni;
  string school;
  float average;
  vector<Subject> subjects;
};

//Funcio que calcula la nota mitjana de totes les assignatures de cada estudiant.
float nota_mitjana(float nombre_assignatures, float suma_notes) {
    float mitj = suma_notes/nombre_assignatures;
    return mitj;
}
    
// Reads input data and stores info for each student in a struct 'Student'.  
// It also computes and stores the average mark for each student.  
// Returns a vector with all students. 
// Each 'Student' struct should be added to the vector using "push_back".       
vector<Student> read_students() {
    vector<Student> stds;
    Student alum;
    while (cin >> alum.dni >> alum.school) {
        vector<Subject> asigs_total;
        Subject alum_asig;
        float nombre_assignatures = 0;
        float suma_notes = 0;
        cin >> alum_asig.name;
        while (alum_asig.name != ".") {
            cin >> alum_asig.grade;
            suma_notes += alum_asig.grade;
            ++nombre_assignatures;
            asigs_total.push_back(alum_asig);
            cin >> alum_asig.name;
        }
        alum.subjects = asigs_total;
        alum.average = nota_mitjana(nombre_assignatures,suma_notes);
        stds.push_back(alum);
    }
    return stds;
}

// Compare two students and return true if s1 goes before s2 in
// the required ordering (sorted by school name, average if same
// school, dni if same school and average)
bool compare_students(const Student &s1, const Student &s2) {
    if (s1.school != s2.school) return s1.school < s2.school;
    else if (s1.school == s2.school and s1.average != s2.average) return s1.average < s2.average; 
    else return s1.dni < s2.dni;
}

// Print sorted student information
// For each student, print school name, average grade, dni, list of subjects and marks  
void print_students(const vector<Student> &stds) {
    int n_estudiants = stds.size();
    for (int z = 0; z < n_estudiants; ++z) {
        cout << stds[z].school << " " << stds[z].average << " " << stds[z].dni;
        int n_sub = stds[z].subjects.size();
        for (int k = 0; k < n_sub; ++k) {
            cout << " " << stds[z].subjects[k].name << " " << stds[z].subjects[k].grade;
        }
        cout << endl;
    }
}

int main() {
  vector<Student> stds = read_students();
  sort(stds.begin(), stds.end(), compare_students);
  print_students(stds);
}