#include <iostream> 
#include <cctype> 
#include <cstring>

using namespace std;

int main(void)
{
   char chara[100], new_chara[100];
   
   cout << "Program Merubah Karakter Dari Huruf Kecil Ke Huruf Balok" << endl << endl;
   cout << "Masukkan Input Teks: "; cin>> chara;

   for (int i=0; i<strlen(chara); i++) {
     if(chara[i] >= 'a' && chara[i] <= 'z'){
            new_chara[i] = toupper(chara[i]);
      }
      else{
            new_chara[i] = tolower(chara[i]);
      }
   }

   cout << "Hasil : " <<new_chara;

   return 0;   
}