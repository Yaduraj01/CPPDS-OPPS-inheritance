#include<iostream>
using namespace std;

/*class vechile
{
    char engine_no[20] = "458340584283";

    public:
        vehicle()
        {
            cout << "This is a vechile class" << endl;
        }
}

class car : private vechile           // is derieved as "private" - private and public all numbers are acessible
{
    int i,j;
    public:
    car()
    {
        cout << "This is car class" << endl;
    }
}

main()
{
    car c;
}
*/

/*22070123150 Experiment inheritance of class priv, pub, protect*/
#include<iostream>
using namespace std;
class person
{
    char name[20];
    person(char *n)
    {
        strcpy(name, n);
    }
    set_name(char*name)
    {
        strcpy();
    }
    disp_name()
    {
        cout<<name;
    }
};
class student:person
{
    int prn;
    char course[10];
    public:
    student(int p, char *n)
    {
        prn = p;
        set_name();
    }
    disp_course()
    {
        cout<<course;
    }
};
main()
{
person p("xyz");
student s("student name", 123);

