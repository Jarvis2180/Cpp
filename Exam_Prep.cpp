#include<iostream>
#include<string>
using namespace std;
class Rollno
{
protected:
    long int Rollno;
};
class Engineering : protected Rollno
{
protected:
    string University;
public:
    void input()
    {
        cout << "Enter Roll number : ";
        cin >> Rollno ;
        fflush(stdin);
        cout << "Enter University name : ";
        getline(cin , University);
    }
    void display()
    {
        cout << "\nStudent's Roll number : " << Rollno << "\n";
        cout << "University : " << University << "\n" ;
    }
};
class CE : protected Engineering
{
private:
    int no_of_courses;
public:
    void input()
    {
        Engineering::input();
        cout << "Enter no of courses in CE : ";
        cin >> no_of_courses ;
    }
    void display()
    {
        Engineering::display();
        cout << "No of courses in CE : "<< no_of_courses << "\n";
    }
};
class IT : protected Engineering
{
private:   
    int no_of_courses;
public:
    void input()
    {
        Engineering::input();
        std::cout << "Enter no of courses in IT : ";
        std::cin >> no_of_courses ;
    }
    void display()
    {
        Engineering::display();
        std::cout << "No of courses in IT : "<< no_of_courses << "\n";
    }
};
int main()
{
    CE c;
    IT i;
    c.input();
    i.input();
    cout << "----------------------\nDisplaying information\n----------------------\n";
    c.display();
    i.display();
    return 0;
}
