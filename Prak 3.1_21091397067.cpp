#include <iostream>
#include <string>

using namespace std;

int tchar(char *text) {
 int jumlah = 0;
 while (*(text++) != '\0')
  jumlah++;

 return jumlah;
}

int main() {
 char string[100];
 std::cout << "Tuliskan kalimat: ";
 std::cin.getline(string, 100);
 std::cout << "Jumlah Karakter: " << tchar(string);

 return 0;
}