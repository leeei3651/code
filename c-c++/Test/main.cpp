#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) {
        // ʹ��thisָ�������ֳ�Ա����width��height�;ֲ�����w��h
        this->width = w;
        this->height = h;
    }

    int getArea() {
        return this->width * this->height;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "���ε����Ϊ: " << rect.getArea() << endl;
    return 0;
}
