#include <iostream>
#include <sstream>
using namespace std;

// Hacker Rank Questiion Link : https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true

class Student{
    private:
    int age, standard;
    string first_name, last_name;
    public:
    void set_age(int a){
        age =  a;
    }
    void set_standard(int s){
        standard = s;
    }
    void set_last_name(string ls){
        last_name = ls;
    }
    void set_first_name(string fn){
        first_name = fn;
    }
    int get_age(){
        return age;
    }
    string get_last_name(){
     return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    int get_standard(){
        return standard;
    }
   string to_string() const{
            return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        }
};

int main() {
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