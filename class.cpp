#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		int id_num;
};

class student: public person{
	public:
		int num_of_subjects;
		int num_books;
};

class prof: public person{
	public:
		int tin;
};

class staff: public person{
	public:
		int sss;
};

int main(){
	person per;
	student stud;
	cout << "Enter Student Name: ";
	cin >> per.name;
	cout << "Enter Student ID Num: ";
	cin >> per.id_num;
	cout << "Enter Number of Subjects: ";
	cin >> stud.num_of_subjects;
	cout << "Enter Number of books: ";
	cin >> stud.num_books;
	prof p;
	cout << "Enter Professor Name: ";
	cin >> per.name;
	cout << "Enter Professor ID Number: ";
	cin >> per.id_num;
	cout << "Enter Professor TIN Number: ";
	cin >> p.tin;
	staff s;
	cout << "Enter Staff Name: ";
	cin >> per.name;
	cout << "Enter Staff ID Number: ";
	cin >> per.id_num;
	cout << "Enter Staff SSS Number: ";
	cin >> s.sss;	
	
	cout << "\nOUTPUT: ";
	cout << "\nStudent: " << endl;
	cout << "Name: " << per.name << endl;
	cout << "ID Number: " << per.id_num << endl;
	cout << "Number of Subjects: " << stud.num_of_subjects << endl;
	cout << "Number of Books: " << stud.num_books << endl;
	cout << "\nProf: " << endl;
	cout << "Name: " << per.name << endl;
	cout << "ID Number: " << per.id_num << endl;
	cout << "TIN:  " << p.tin << endl;
	cout << "\nStaff: " << endl;
	cout << "Name: " << per.name << endl;
	cout << "ID Number: " << per.id_num << endl;
	cout << "SSS:  " << s.sss << endl;
    return 0;
}
