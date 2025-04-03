#include <iostream>
#include <vector>
using namespace std;
// 利用霍纳法则（秦九韶算法）计算多项式的值
// coefficients 为多项式系数组成的向量，按照从低次项到高次项的顺序排列系数
// x为代入多项式求值的自变量的值
double hornerPolynomial(const vector<double>& coefficients, double x) {
    int n = coefficients.size();  // 获取多项式的项数（系数的个数）
    double result = coefficients[n - 1];  // 初始化结果为最高次项的系数，执行1次
    // 从次高项（索引为n - 2）开始，依次向前处理每一项，循环执行n - 1次
    for (int i = n - 2; i >= 0; --i) {
        // 根据霍纳法则更新结果值，此语句在循环内每次都会执行，共执行n - 1次
        result = result * x + coefficients[i];
    }
    return result;
}

int main() {
    // 示例多项式系数，这里表示 2 + 3*x + 4*x^2，按低次项到高次项顺序排列
    int a[3]={2,3,4};
    vector<double> coefficients(a,a+3);
    double x = 2.0;  // 自变量的值，示例设为2.0，可按需修改
    double polynomialValue = hornerPolynomial(coefficients, x);
    cout << "多项式在x = " << x << " 时的值为: " << polynomialValue << endl;
    return 0;
}
