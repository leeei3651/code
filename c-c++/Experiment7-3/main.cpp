#include <iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;
int findNumber;
int _mode;

class Student
{
private:
	string name; //����
	string sex; //�Ա�
	string no; //ѧ�ţ�ÿ��ѧ����ѧ����Ψһ��
	float Chinese; //���ĳɼ�
	float math; //��ѧ�ɼ�
	float English;//Ӣ��ɼ�
public:
	Student(string _name, string _sex, string _no, float _chinese,
		float _math, float _english) : name(_name), sex(_sex),
		no(_no), Chinese(_chinese), math(_math), English(_english) {}
    virtual ~Student(){};

	string getName() { return name; }
	void setName(string _name) { name = _name; }

	string getSex() { return sex; }
	void setSex(string _sex) { sex = _sex; }

	string getNo() { return no; }
	void setNo(string _no) { no = _no; }

	float getChinese() { return Chinese; }
	void setChinese(float _chinese) { Chinese = _chinese; }

	float getMath() { return math; }
	void setMath(float _math) { math = _math; }

	float getEnglish() { return English; }
	void setEnglish(float _english) { English = _english; }

	//���������<<��ʵ��ѧ����Ϣ��������붨�塣
	friend ostream& operator<<(ostream& o, Student& s);
};
//2������ڵ��ඨ�����£�
class Node
{
public:
	Student * pStu;
	Node * pNext; //��һ���ڵ�ָ��

	Node(Student * p) : pStu(p), pNext(NULL) {}
	Node() : pStu(0), pNext(0) {}
};
//3�������ඨ�����£�
class myList
{
private:
	Node * pHead; //����ͷָ��
	int nodeCount; //�����нڵ�ĸ���
public:
	myList() : pHead(0), nodeCount(0) {}
	~myList();//ɾ�����еĽڵ㣬�붨������

	//���º�����Ҫ����
void add(Student * p); //����һ���ڵ㣨����β��
Student * findByNo(string _no);
//��ѧ�Ų��Ҳ���λѧ�����ڵ㣩

//���������Ҳ���λѧ�����ڵ㣩
Student * findByName(string _name);

bool erase(string _no); //��ѧ�Ŷ�λ��ɾ��ѧ�����ڵ㣩

double averChinese(); //�������е�ѧ��������ƽ���ɼ�
double averMath(); //�������е�ѧ������ѧƽ���ɼ�
double averEnglish(); //�������е�ѧ����Ӣ��ƽ���ɼ�

//����ָ��ѧ�ŵ�ѧ�����пγ̵�ƽ���ɼ�
double average(string _no);
};

class UnderGraduated:public Student
{
private:
    double tuitionFee;
public:
    UnderGraduated(string _name,string _sex,string _no,float _Chinese,float _Math,float _English,double _tuitionFee)
    :Student(_name,_sex,_no,_Chinese,_Math,_English),tuitionFee(_tuitionFee){}
    ~UnderGraduated(){};

    double tuition(){cout<<"������ѧ��: "<<tuitionFee<<endl;return tuitionFee;}

    friend ostream& operator<<(ostream& o,UnderGraduated& s);
};
class Graduated:public Student
{
private:
    string tutor;
public:
    Graduated(string _name,string _sex,string _no,float _Chinese,float _Math,float _English,string _tutor)
    :Student(_name,_sex,_no,_Chinese,_Math,_English),tutor(_tutor){}
    ~Graduated(){};

    void setTutor(string t){tutor = t;}
    string getTutor(){return tutor;}

    friend ostream& operator<<(ostream& o,Graduated& s);
};
ostream& operator<<(ostream& o,Student& s)
{
    o<<"ѧ��������"<<s.getName()<<endl
    <<"ѧ�ţ�"<<s.getNo()<<endl
    <<"�Ա�"<<s.getSex()<<endl
    <<"���ĳɼ���"<<s.getChinese()<<endl
    <<"��ѧ�ɼ���"<<s.getMath()<<endl
    <<"Ӣ��ɼ���"<<s.getEnglish()<<endl;
    cout<<"\n";
    return o;
}
ostream& operator<<(ostream& o,UnderGraduated& s)
{
    o<<"ѧ��������"<<s.getName()<<endl
    <<"ѧ�ţ�"<<s.getNo()<<endl
    <<"�Ա�"<<s.getSex()<<endl
    <<"���ĳɼ���"<<s.getChinese()<<endl
    <<"��ѧ�ɼ���"<<s.getMath()<<endl
    <<"Ӣ��ɼ���"<<s.getEnglish()<<endl
    <<s.tuition();
    cout<<"\n";
    return o;
}
ostream& operator<<(ostream& o,Graduated& s)
{
    o<<"ѧ��������"<<s.getName()<<endl
    <<"ѧ�ţ�"<<s.getNo()<<endl
    <<"�Ա�"<<s.getSex()<<endl
    <<"���ĳɼ���"<<s.getChinese()<<endl
    <<"��ѧ�ɼ���"<<s.getMath()<<endl
    <<"Ӣ��ɼ���"<<s.getEnglish()<<endl
    <<"��ʦ��"<<s.getTutor()<<endl;
    cout<<"\n";
}
myList::~myList()
{
    Node* nodeTem=(Node*)malloc(sizeof(Node));
    while(pHead->pNext!=NULL)
    {
        nodeTem=pHead->pNext;
        pHead->pNext=nodeTem->pNext;
        delete nodeTem;
        nodeCount--;
    }
    delete pHead;
}

Student* myList::findByNo(string _no)
{
    Node* nodeTem=pHead;
    while(nodeTem)
    {
        if(nodeTem->pStu->getNo()==_no)
        {
            cout<<"find student by no:"<<nodeTem->pStu->getNo()<<endl
            <<*(nodeTem->pStu);
            return nodeTem->pStu;
        }
        nodeTem=nodeTem->pNext;

    }
    cout<<"can`t find this Student by no,this Student is not included in myList"<<endl;
    return NULL;
}
Student* myList::findByName(string _name)
{
    Node* nodeTem=pHead;
    while(nodeTem)
    {
        if(nodeTem->pStu->getName()==_name)
        {
            cout<<"find student by name:"<<nodeTem->pStu->getName()<<endl
            <<*(nodeTem->pStu);
            return nodeTem->pStu;
        }
        nodeTem=nodeTem->pNext;
    }
    cout<<"can`t find this Student by name,this Student is not included in myList"<<endl;
    return NULL;
}
void myList::add(Student* p)
{
    Node* newNode=new Node(p);
    newNode->pNext=pHead;
    pHead=newNode;
    nodeCount++;
}
bool myList::erase(string _no)
{
    Node* nodeTem=pHead;
    Node* p;
    while(pHead->pNext!=NULL)
    {
        p=pHead->pNext;
        if(nodeTem->pStu->getNo()==_no)
        {
            nodeTem->pNext=p->pNext;
            delete p;
            cout<<"Student No"<<_no<<" has been erased"<<endl;
            return true;
        }
        nodeTem=nodeTem->pNext;
    }
    return false;
}
double myList::averChinese()
{
    float TotalChinese=0.0;
    Node* nodeTemp=pHead;
    while(nodeTemp)
    {
        TotalChinese+=nodeTemp->pStu->getChinese();
        nodeTemp=nodeTemp->pNext;
    }
    cout<<"averChinese: "<<TotalChinese/nodeCount<<endl;
    return TotalChinese/nodeCount;
}
double myList::averEnglish()
{
    float TotalEnglish=0.0;
    Node* nodeTemp=pHead;
    while(nodeTemp)
    {
        TotalEnglish+=nodeTemp->pStu->getEnglish();
        nodeTemp=nodeTemp->pNext;
    }
    cout<<"averEnglish: "<<TotalEnglish/nodeCount<<endl;
    return TotalEnglish/nodeCount;
}
double myList::averMath()
{
    float TotalMath=0.0;
    Node* nodeTemp=pHead;
    while(nodeTemp)
    {
        TotalMath+=nodeTemp->pStu->getMath();
        nodeTemp=nodeTemp->pNext;
    }
    cout<<"averMath: "<<TotalMath/nodeCount<<endl;
    return TotalMath/nodeCount;
}
double myList::average(string _no)
{
    Node* nodeTemp =pHead;
    while(nodeTemp)
    {
        if(nodeTemp->pStu->getNo()==_no)
        {
            float _Chinese=nodeTemp->pStu->getChinese();
            float _English=nodeTemp->pStu->getEnglish();
            float _Math=nodeTemp->pStu->getMath();
            float averScore=(_Chinese+_English+_Math)/3;
            cout<<"Student No"<<_no<<" scored an average of "<<averScore<<" points in the three subjects"<<endl;
            return averScore;
        }
    }
    cout<<"can`t find this Student by no,this Student is not included in myList"<<endl;
    return 0;
}
enum SearchMode
{
    findByName=1,findByNo
}Mode;
void searchMode(myList L,int findNumber)
{
    while(findNumber--)
    {
        _mode=0;
        string studentName,studentNo;
        cout<<"which search mode you want to use?(1.findByName,2.findByNo)"<<endl
        <<"please input the number of search mode:"<<endl;
        cin>>_mode;
        if(_mode==1)
        {
            Mode=findByName;
        }
        else
        {
            Mode=findByNo;
        }
        switch(Mode)
        {
        case findByName:
            cout<<"please input student`s name:";
            cin>>studentName;
            L.findByName(studentName);
            break;
        case findByNo:
            cout<<"please input student`s no:";
            cin>>studentNo;
            L.findByNo(studentNo);
            break;
        default:
            cout<<"input a error number!"<<endl;
        }
    }
}
int main()
{
    Student* st1=new Student("Ray","female","1",95.0,100.0,65.0);
    Student* st2=new Student("Leon","male","2",100.0,80.0,90.0);
    Student* st3=new Student("Jay","male","3",70.0,80.0,95.0);
    Student* st4=new Student("Jack","female","4",80.0,80.0,80.0);
    UnderGraduated* st5=new UnderGraduated("Marry","female","5",87.0,95.0,100.0,5500.00);
    Graduated* st6=new Graduated("Bob","male","6",100.0,100.0,100.0,"Sally");
    cout<<*st1<<*st2<<*st3<<*st4<<*st5<<*st6;
    myList L;
    L.add(st1);
    L.add(st2);
    L.add(st3);
    L.add(st4);
    L.averChinese();
    L.averMath();
    L.averEnglish();
    L.average("4");
    L.erase("4");
    cout<<"How many times you want to look for a list of students ? :"<<endl;
    cin>>findNumber;
    searchMode(L,findNumber);
    return 0;
}
