#include <iostream>
#include <string>
#include<windows.h>
#include <map>
#include <set>
using namespace std;

class dictionary {
	map<string, string> dict;
public:
	void add(string s1, string s2) {
		dict.insert(pair<string, string>(s1, s2));
	}
	void find(string s1){
		auto ptr = dict.find(s1);
		if (ptr != dict.end())
		{
			cout << ptr->first << " - " << ptr->second << endl;
		}
	}
	void Delete(string s1){
		auto ptr = dict.find(s1);
		if (ptr != dict.end()) {
			dict.erase(ptr->first);
		}
		else{
			cout << "no value\n\n";
		}
	}
	void output() {
		for (auto ptr = dict.begin();ptr != dict.end();ptr++) {
			cout << ptr->first << " - " << ptr->second << endl;
		}
	}
};

class phonebook {
	map<string, string> dict;
public:
	void add(string s1, string s2) {
		dict.insert(pair<string, string>(s1, s2));
	}
	void find(string s1) {
		auto ptr = dict.find(s1);
		if (ptr != dict.end())
		{
			cout << ptr->first << " - " << ptr->second << endl;
		}
	}
	void output() {
		for (auto ptr = dict.begin();ptr != dict.end();ptr++) {
			cout << ptr->first << " - " << ptr->second << endl;
		}
	}
};

class student {
	string name;
	double avg;
public:
	student(string n, double a):name(n), avg(a){}
	string getname() {
		return name;
	}
	double getavg() {
		return avg;
	}
	friend ostream& operator <<(ostream& os, student& obj)
	{
		cout << "name: " << obj.getname() << "\tavg" << obj.getavg() << endl;
		return os;
	}
};
int main() {
	/*phonebook dict;
	dict.add("name", "5967336065");
	dict.add("name1", "5967336064");
	dict.add("name2", "5967336063");
	dict.find("name");
	dict.output();*/
	map<int, student> dict;

	student obj("name", 6);
	student obj1("name1", 7);
	student obj2("name2", 8);
	dict.insert(pair<int, student>(1, obj));
	dict.insert(pair<int, student>(2, obj1));
	dict.insert(pair<int, student>(3, obj2));
	dict.find(1);
	for (auto ptr = dict.begin();ptr != dict.end();ptr++) {
		cout << ptr->first << " - " << ptr->second << endl;
	}
}