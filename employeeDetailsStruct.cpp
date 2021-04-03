#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

struct EmployeeDetails{
    string name;
    string surname;
    int employeeNum;
    string department;
};

EmployeeDetails person1{"George", "Rodgers", 1254325, "IT"};
EmployeeDetails person2{"Matthew", "Clarke", 2354268, "HR"};
EmployeeDetails person3{"Sarah", "Medows", 6521538, "Development"};
EmployeeDetails person4{"Anita", "Singh", 5678456, "Marketing"};
EmployeeDetails person5{"Patrick", "Smith", 5236863, "HR"};
EmployeeDetails person6{"Samantha", "Xi", 3046576, "Development"};
EmployeeDetails person7{"Bruce", "Vegas", 5476378, "Marketing"};
EmployeeDetails person8{"Riona", "Ablah", 7953134, "IT"};

EmployeeDetails people[8]{person1, person2, person3, person4, person5, person6, person7, person8};
const int numPeople{sizeof(people)/sizeof(people[0])};

void whoWorksWhere(EmployeeDetails person){
    std::cout << "Employee number: " << person.employeeNum << "\n";
    std::cout << person.name << " " << person.surname << " works in the " << person.department << " departmemt.\n";

}

int main()
{

    for (int i=0; i < (numPeople) ; i++){
        whoWorksWhere(people[i]);
    }
    
    return 0;
}