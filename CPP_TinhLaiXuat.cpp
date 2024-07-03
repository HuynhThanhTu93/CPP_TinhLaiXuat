// CPP_TinhLaiXuat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //cout << "Tinh Lai Xuat\n";
    //double n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    //cout << "Nhap n: ";
    //cin >> n;
    //n1 = n * 8/100;
    //n2 = (n1 + n) * 0.08;
    //n3 = (n2 + n1 + n) * 0.08;
    //n4 = (n3 + n2 + n1 + n) * 0.08;
    //n5 = (n4 + n3 + n2 + n1 + n) * 0.08;
    //n6 = (n5 + n4 + n3 + n2 + n1 + n) * 0.08;
    //n7 = (n6 + n5 + n4 + n3 + n2 + n1 + n) * 0.08;
    //n8 = (n7 + n5 + n4 + n3 + n2 + n1 + n + n6) * 0.08;
    //n9 = (n8 + n7 + n5 + n4 + n3 + n2 + n1 + n + n6) * 0.08;
    //n10 = (n9 + n8 + n7 + n5 + n4 + n3 + n2 + n1 + n + n6) * 0.08;
    //cout << "Nam 1: " << n1;
    //cout << "\nNam 2: " << n2;
    //cout << "\nNam 3: " << n3;
    //cout << "\nNam 4: " << n4;
    //cout << "\nNam 5: " << n5;
    //cout << "\nNam 6: " << n6;
    //cout << "\nNam 7: " << n7;
    //cout << "\nNam 8: " << n8;
    //cout << "\nNam 9: " << n9;
    //cout << "\nNam 10: " << n10;
    //cout << "\nTong tien sau 10 nam: " << n + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10; 
    //"endl";

    cout << " \nCach 2: ";
    double tiengui, tienlai, laixuat = 0.08, nam;
    cout << "\nNhap tien gui tiet kiem: ";
    cin >> tiengui;
    cout << "Nhap nam: ";
    cin >> nam;
    for (int i = 1; i <= nam; i++)
    {
        tienlai = tiengui * laixuat;
        cout << "Nam: " << i << "  Tien gui: " << tiengui << "  Lai xuat: " << tienlai << endl;
        tiengui = tiengui + tienlai;
        cout << "Tien thuc nhan cua nam " << i << " : " << tiengui << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
