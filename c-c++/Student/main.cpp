//��12�֡�����һ��xsѧ���࣬���ݱ�����ѧ�ţ�string�ͣ���ƽʱ�ɼ�����ĩ�ɼ���һ����������ĳ�Ա������һ����������ܳɼ����������������N��ѧ������󲢷��ڶ��������У����ÿ��ѧ����ѧ�ź��ܳɼ�����д����ʵ�����Ϲ��ܡ���
//ƽʱ�ɼ�ϵ��1��0.4����ĩ�ɼ�ϵ��2��0.6���ܳɼ�=ƽʱ�ɼ���ϵ��1+��ĩ�ɼ���ϵ��2)��ʹ��vector����ʵ��
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
        cout<<"������ѧ����ѧ��:";
        cin>>id;
        cout<<endl<<"������ѧ����ƽʱ�ɼ�:";
        cin>>uScore;
        cout<<endl<<"������ѧ������ĩ�ɼ�:";
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
    cout<<"������ѧ������:";
    cin>>N;
    vector<xs>Students;
    for(int i=0;i<N;++i){
        xs student;
        student.input();
        Students.push_back(student);
    }
    cout<<"����ѧ����ѧ�ź��ܳɼ�����:"<<endl;
    //for(const auto& student:Students)
    //{
        //student.output();
    //}
    return 0;
}
