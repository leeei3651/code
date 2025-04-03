#include <iostream>
#include <vector>
using namespace std;
// ���û��ɷ����ؾ����㷨���������ʽ��ֵ
// coefficients Ϊ����ʽϵ����ɵ����������մӵʹ���ߴ����˳������ϵ��
// xΪ�������ʽ��ֵ���Ա�����ֵ
double hornerPolynomial(const vector<double>& coefficients, double x) {
    int n = coefficients.size();  // ��ȡ����ʽ��������ϵ���ĸ�����
    double result = coefficients[n - 1];  // ��ʼ�����Ϊ��ߴ����ϵ����ִ��1��
    // �Ӵθ������Ϊn - 2����ʼ��������ǰ����ÿһ�ѭ��ִ��n - 1��
    for (int i = n - 2; i >= 0; --i) {
        // ���ݻ��ɷ�����½��ֵ���������ѭ����ÿ�ζ���ִ�У���ִ��n - 1��
        result = result * x + coefficients[i];
    }
    return result;
}

int main() {
    // ʾ������ʽϵ���������ʾ 2 + 3*x + 4*x^2�����ʹ���ߴ���˳������
    int a[3]={2,3,4};
    vector<double> coefficients(a,a+3);
    double x = 2.0;  // �Ա�����ֵ��ʾ����Ϊ2.0���ɰ����޸�
    double polynomialValue = hornerPolynomial(coefficients, x);
    cout << "����ʽ��x = " << x << " ʱ��ֵΪ: " << polynomialValue << endl;
    return 0;
}
