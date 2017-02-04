#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int id_num;
		int num_of_subjects;
		int num_books;
};
class prof{
	public:
		string name;
		int id_num;
		int tin;
};
class staff{
	public:
		string name;
		int id_num;
		int sss;
};
int main(){
	student stud;
	cout << "Enter Student Name: ";
	cin >> stud.name;
	cout << "Enter Student ID Num: ";
	cin >> stud.id_num;
	cout << "Enter Number of Subjects: ";
	cin >> stud.num_of_subjects;
	cout << "Enter Number of books: ";
	cin >> stud.num_books;
	prof p;
	cout << "Enter Professor Name: ";
	cin >> p.name;
	cout << "Enter Professor ID Number: ";
	cin >> p.id_num;
	cout << "Enter Professor TIN Number: ";
	cin >> p.tin;
	staff s;
	cout << "Enter Staff Name: ";
	cin >> s.name;
	cout << "Enter Staff ID Number: ";
	cin >> s.id_num;
	cout << "Enter Staff SSS Number: ";
	cin >> s.sss;	
	
	cout << "\nOUTPUT: ";
	cout << "\nStudent: " << endl;
	cout << "Name: " << stud.name << endl;
	cout << "ID Number: " << stud.id_num << endl;
	cout << "Number of Subjects: " << stud.num_of_subjects << endl;
	cout << "Number of Books: " << stud.num_books << endl;
	cout << "\nProf: " << endl;
	cout << "Name: " << p.name << endl;
	cout << "ID Number: " << p.id_num << endl;
	cout << "TIN:  " << p.tin << endl;
	cout << "\nStaff: " << endl;
	cout << "Name: " << s.name << endl;
	cout << "ID Number: " << s.id_num << endl;
	cout << "SSS:  " << s.sss << endl;
  return 0;
}
