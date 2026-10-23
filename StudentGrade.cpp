
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Student {
public:
    string name;
    int mark;
    char grade;
};

int main() {
    vector<Student> students = {
        {"Nisha", 82, ' '},
        {"Vikram", 68, ' '},
        {"Rahul", 94, ' '},
        {"Sneha", 77, ' '}
    };

    sort(students.begin(), students.end(),
        [](Student a, Student b) { return a.mark > b.mark; });

    transform(students.begin(), students.end(), students.begin(),
        [](Student s) {
            if (s.mark >= 90) s.grade = 'A';
            else if (s.mark >= 75) s.grade = 'B';
            else if (s.mark >= 50) s.grade = 'C';
            else s.grade = 'F';
            return s;
        });

    auto it = find_if(students.begin(), students.end(),
        [](Student s) { return s.mark > 80; });

    int total = accumulate(students.begin(), students.end(), 0,
        [](int sum, Student s) { return sum + s.mark; });

    auto highest = max_element(students.begin(), students.end(),
        [](Student a, Student b) { return a.mark < b.mark; });

    auto lowest = min_element(students.begin(), students.end(),
        [](Student a, Student b) { return a.mark < b.mark; });

    int highCount = count_if(students.begin(), students.end(),
        [](Student s) { return s.mark >= 80; });

    float average = (float)total / students.size();

    cout << "Student Grade Analyzer\n";
    cout << "---------------------\n";
    cout << "Name\tMark\tGrade\n";

    for (Student s : students)
        cout << s.name << "\t" << s.mark << "\t" << s.grade << endl;

    if (it != students.end())
        cout << "\nFirst student scoring above 80: " << it->name << endl;

    cout << "Total Marks: " << total << endl;
    cout << "Average Mark: " << average << endl;
    cout << "Highest Scorer: " << highest->name << " (" << highest->mark << ")" << endl;
    cout << "Lowest Scorer: " << lowest->name << " (" << lowest->mark << ")" << endl;
    cout << "Students scoring 80 or above: " << highCount << endl;

    reverse(students.begin(), students.end());
    cout << "\nStudent order reversed successfully!" << endl;

    return 0;
}
