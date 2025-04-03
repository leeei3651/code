#include <iostream>
#include<vector>
using namespace std;

class xs
{
private:
protected:
    string id;
    double normalScore;
    double testScore;
    double totalScore;

public:
    xs(string _id,double _normalScore,double _testScore):id(_id),normalScore(_normalScore),testScore(_testScore){}
    virtual void CalTotalScore()
    {
        totalScore=normalScore*0.4+testScore*0.6;
    }
    virtual void OutPutTotalScore()
    {
        cout<<"ID: "<<id<<endl
        <<"TotalScore: "<<testScore<<endl;
    }
};
class UnderGraduated:public xs
{
private:
    double essayScore;
public:
    UnderGraduated(string _id,double _normalScore,double _testScore,double _essayScore):xs(_id,_normalScore,_testScore),essayScore(_essayScore){}
    void CalTotalScore()
    {
        totalScore=normalScore*0.2+testScore*0.4+essayScore*0.4;
    }
    void OutPutTotalScore()
    {
        cout<<"UnderGraduated ID: "<<id<<endl
        <<"TotalScore: "<<testScore<<endl
        <<"Essay Score: "<<essayScore<<endl;
    }
};
class Graduated:public xs
{
private:
    double achievementScore;
public:
    Graduated(string _id,double _normalScore,double _testScore,double _achievementScore):xs(_id,_normalScore,_testScore),achievementScore(_achievementScore){}
     void CalTotalScore()
    {
        totalScore=normalScore*0.2+testScore*0.4+achievementScore*0.4;
    }
    void OutPutTotalScore()
    {
        cout<<"Graduated ID: "<<id<<endl
        <<"TotalScore: "<<testScore<<endl
        <<"Achievement Score: "<<achievementScore<<endl;
    }

};
int main()
{
    xs* stu=new xs("1",100.00,60.00);
    UnderGraduated* ustu=new UnderGraduated("2",100.00,80.00,75.00);
    Graduated* gstu=new Graduated("3",100.00,100.00,100.00);
    stu->CalTotalScore();
    stu->OutPutTotalScore();
    ustu->CalTotalScore();
    ustu->OutPutTotalScore();
    gstu->CalTotalScore();
    gstu->OutPutTotalScore();
    delete stu;
    delete ustu;
    delete gstu;
    return 0;
}
