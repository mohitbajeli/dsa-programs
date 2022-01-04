#include<iostream>
using namespace std;
class student
{
    protected:
    int rollno;
    public:
    void setrollno(int r)
    {
        rollno=r;
    }
    void getrollno()
    {
        cout<<"the roll no of student is "<<rollno<<endl;
    }
};
class exam:public student
{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float a,float b)
    {
        maths=a;
        physics=b;
    }
    void getmarks()
    {
        cout<<"the marks in physics is "<<physics<<endl;
        cout<<"the marks in maths is "<<maths<<endl;
    }
};
class result:public exam
{
    protected:
    float percentage;
    public:
    void display()
    {
    getrollno();
    getmarks();
        cout<<"the percentage is "<<(maths+physics)/2<<endl;
    }

};
int main()
{
    result mohit;
    mohit.setrollno(34);
    mohit.setmarks(98,96);
    mohit.display();
    return 0;
}
