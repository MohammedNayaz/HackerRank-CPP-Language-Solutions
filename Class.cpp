//Class
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
/*class Student
{
    private:
    int eage, std;
    string fname, lname;
    public:
    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }

    void set_age(int age)
    {
        eage =age;
        //return age; 

    }
    void set_standard(int standard)
    {
        std = standard;
       // return std;

    }
    void set_first_name(string first_name)
    {
        fname = first_name;
        //return fname;
    }
    void set_last_name( string last_name)
    {
        lname = last_name;
       // return lname;

    }

    void get_age()
    {
        cout<<age;
    }
    void get_last_name()
    {
        cout<<lname;
    }
    void get_first_name()
    {
        cout<<fname;
    }
    void get_standard()
    {
        cout<<std;
    }
    void to_string()
    {
        cout<<age<<","<<fname<<","<<lname<<","<<std;
    }

};*/
class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    void set_age(int Age)
    {
        age = Age;
    }
    void set_standard(int Standard)
    {
        standard = Standard;
    }
    void set_first_name(string First_name)
    {
        first_name = First_name;
    }
    void set_last_name(string Last_name)
    {
        last_name = Last_name;
    }
    int get_age() 
    {
        return age;
    }
    int get_standard() 
    {
        return standard;
    }
    string get_first_name() 
    {
        return first_name;
    }
    string get_last_name() 
    {
        return last_name;
    }
    
     string to_string()
    {
        stringstream ss;
        ss << age <<","<< first_name << "," << last_name << "," << standard;
        return ss.str();
    }
    
};

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}