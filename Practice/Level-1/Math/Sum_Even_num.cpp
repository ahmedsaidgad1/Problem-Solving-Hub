// برنامج لحساب مجموع الأعداد الزوجية من 1 إلى n
#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    long long k = n / 2;          // عدد الأعداد الزوجية
    long long sum = k * (k + 1);  // مجموع الزوجيات
 
    cout << sum << endl;
    return 0;
}