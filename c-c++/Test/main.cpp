#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) {
        // 使用this指针来区分成员变量width、height和局部变量w、h
        this->width = w;
        this->height = h;
    }

    int getArea() {
        return this->width * this->height;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "矩形的面积为: " << rect.getArea() << endl;
    return 0;
}
