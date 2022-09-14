#include <iostream>
#include <vector>

using namespace std;

class person
{
protected:
    string firstName,lastName,id,password;
public:
    person()
    {
        firstName="";
        lastName="";
        id="";
        password="";
    }
    person(string fn,string ln,string i,string pwd)
    {
        firstName=fn;
        lastName=ln;
        id=i;
        password=pwd;
    }

    void setFirstName(string fn)
    {
        firstName=fn;
    }

    string getFirstName()
    {
        return firstName;
    }

    void setLastName(string ln)
    {
        lastName=ln;
    }

    string getLastName()
    {
        return lastName;
    }

    void setId(string i)
    {
        id=i;
    }

    string getId()
    {
        return id;
    }

    void setPassword(string pwd)
    {
        password=pwd;
    }

    string getPassword()
    {
        return password;
    }




};

class instructor:public person
{

public:
    instructor()
    {
        firstName="";
        lastName="";
        id="";
        password="";

    }
    instructor(string fn,string ln,string id,string pwd):person(fn,ln,id,pwd)
    {
    }
    void print()
    {
        cout<<"the " <<"instructor "<<" information"<<endl;
        cout<<"First Name : "<<getFirstName()<<endl;
        cout<<"Last Name : "<<getLastName()<<endl;
        cout<<"ID : "<<getId()<<endl;
        cout<<"Password : "<<getPassword()<<endl;

    }
};

class student:public person
{

public:
    student()
    {
        firstName="";
        lastName="";
        id="";
        password="";

    }
    student(string fn,string ln,string id,string pwd):person(fn,ln,id,pwd)
    {

    }
    void print()
    {
        cout<<"the " <<"Student "<<" information"<<endl;
        cout<<"First Name : "<<getFirstName()<<endl;
        cout<<"Last Name : "<<getLastName()<<endl;
        cout<<"ID : "<<getId()<<endl;
        cout<<"Password : "<<getPassword()<<endl;

    }
};

class course
{
private:
    string name,id;
    instructor inst;
    vector <student> students;
public:
    course()
    {
        name="";
        id="";
        instructor("","","","");
        students.clear();
    }
    course(string n,string i,instructor in,vector <student> stud)
    {
        name=n;
        id=i;
        inst=in;
        students=stud;
    }

    void setName(string n){
    name=n;
    }
    string getName(){
    return name;
    }
    void setId(string i){
    id=i;
    }
    string getId(){
    return id;
    }
    void setInstructor(instructor intr){
    inst=intr;
    }
    instructor getInstructor(){
    return inst;
    }
    void setStudents(vector <student> stds){
    students=stds;
    }
    vector <student> getStudents(){
    return students;
    }
    void addStudent(string fn,string ln,string id,string pass){
    students.push_back(student(fn,ln,id,pass));
    }
    vector <student> getStudentsInfo(){
        cout<<"all the students Info"<<endl;
        cout<<"++++++++++++++++++++++++++++"<<endl;
        for (int i = 0; i < students.size(); i++) {
		cout<<"first Name : " << students[i].getFirstName() << endl;
		cout<<"last Name : " << students[i].getLastName() << endl;
		cout<<"Id : " << students[i].getId() << endl;
		cout<<"Password : " << students[i].getPassword() << endl;
		cout<<"------------------------------------"<<endl;
	}
	return students;
    }
	void getCourseInfo(){
	cout<<"all course informations :"<<endl;
	cout<<"++++++++++++++++++++++++++++"<<endl;
	cout<<"Course Name : "<<getName()<<endl;
	cout<<"Course Id : "<<getId()<<endl;
	 cout<<"all the instructor Info"<<endl;
        cout<<"++++++++++++++++++++++++++++"<<endl;
	cout<<"Instructor First Name : "<<getInstructor().getFirstName()<<endl;
	cout<<"Instructor Last Name : "<<getInstructor().getLastName()<<endl;
	cout<<"Instructor Id : "<<getInstructor().getId()<<endl;
	cout<<"Instructor Password : "<<getInstructor().getPassword()<<endl;
	getStudentsInfo();

	}


};
int main()
{
    instructor waleed ("waleed","salah","1","123456");
    course iti;
    iti.setName("iti");
    iti.setId("1");
    iti.setInstructor(waleed);
    iti.addStudent("ahmed","bahaa","2222","333");
    iti.addStudent("aml","basem","2222","333");
    iti.addStudent("andro","bean","2222","333");
    iti.addStudent("asmaa","badr","2222","333");
    iti.addStudent("ali","bassam","2222","333");
    iti.addStudent("amr","belal","2222","333");
    iti.getCourseInfo();



}
