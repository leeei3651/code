//【12分】定义一个xs学生类，数据变量：学号（string型）、平时成绩和期末成绩，一个用于输入的成员函数、一个用于输出总成绩的输出函数。创建N个学生类对象并放于对象数组中，输出每名学生的学号和总成绩。编写程序实现以上功能。（
//平时成绩系数1：0.4，期末成绩系数2：0.6，总成绩=平时成绩×系数1+期末成绩×系数2)另使用vector向量实现
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class xs
{
public:
    xs(){id="20240000";uScore=0.0f;fScore=0.0f;}
    xs(string sid,float suScore,float sfScore)
    {
        id=sid;
        uScore=suScore;
        fScore=sfScore;
    }
    void input()
    {
        cout<<"请输入学生的学号:";
        cin>>id;
        cout<<endl<<"请输入学生的平时成绩:";
        cin>>uScore;
        cout<<endl<<"请输入学生的期末成绩:";
        cin>>fScore;
        tScore=uScore*0.4+fScore*0.6;
    }

    void output()
    {
        cout<<"ID:"<<id<<endl;
        cout<<"Score:"<<tScore<<endl;
    }
private:
    string id;
    float uScore;
    float fScore;
    float tScore;
};
int main()
{
    int N;
    cout<<"请输入学生数量:";
    cin>>N;
    vector<xs>Students;
    for(int i=0;i<N;++i){
        xs student;
        student.input();
        Students.push_back(student);
    }
    cout<<"所有学生的学号和总成绩如下:"<<endl;
    //for(const auto& student:Students)
    //{
        //student.output();
    //}
    return 0;
}
