
#include <iostream>
using namespace std;
void cau1() {
    int n, tong = 0;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    cout << "Tong:" << tong << endl;
}
void cau2() {
    int n, tich = 1;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << "Tich:" << tich << endl;

}
void cau3() {
    int x, n, tich = 1;
    cout << "Nhap x, n:";
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        tich *= x;
    }
    cout << "Tich:" << tich << endl;
}
int main() {

    cau3();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


