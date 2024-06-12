 //Program for array perform insert, delete & display operation.
#include <iostream>
#include <cstdlib>
using namespace std;
class demo {
 int a[10], n, item, k;
public:
 void get();
 void insert();
 void del();
 void dis();
};
void demo::get() {
 cout << "\nEnter n: ";
 cin >> n;
 cout << "\nEnter Array Elements: ";
 for (int i = 0; i < n; i++)
 cin >> a[i];
}
void demo::insert() {
 cout << "\nEnter Position: ";
 cin >> k;
 cout << "\nEnter Item: ";
 cin >> item;
 for (int j = n - 1; j >= k - 1; j--)
 a[j + 1] = a[j];
 a[k - 1] = item;
 n++;
}
void demo::del() {
 cout << "\nEnter Position: ";
 cin >> k;
 for (int j = k - 1; j < n - 1; j++)
 a[j] = a[j + 1];
 n--;
}
void demo::dis() {
 cout << "\nElements are:\n";
 for (int i = 0; i < n; i++)
 cout << a[i] << "\t";
}
int main() {
 demo d;
 int ch;
 d.get();
 cout << "\n1. Insert 2. Delete 3. Display 4. Exit\n";
 while (ch != 4) {
 cout << "\nEnter choice: ";
 cin >> ch;
 switch (ch) {
 case 1:
 d.insert();
 break;
 case 2:
 d.del();
 break;
 case 3:
 d.dis();
 break;
 case 4:
 return 0;
 default:
 cout << "Invalid choice!";
 }
 }
 return 0;
}

