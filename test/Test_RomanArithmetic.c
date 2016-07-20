#include "iostream" 
#include "RomanArthimatic.h"
using namespace std;
extern void ShowList();
extern int convertToIntegers(string);
extern int DoOperation(int, int, string);
extern string ToNumerals(int);

int main()
{
   string RN1="";
   string RN2="";
   string Op="";
   string FN="";

   int I1 = 0;
   int I2 = 0;
   int FI = 0;
 
   ShowList();
   cout << endl << "Enter One Roman Numeral Value: ";
   cin >> RN1;
   cout << "Enter Another Roman Numeral Value: ";
   cin >> RN2;

   cout << "Enter Operation: ";
   cin >> Op;
   
   I1 = convertToIntegers(RN1);
   I2 = convertToIntegers(RN2);

   FI = DoOperation(I1, I2, Op);
   FN = ToNumerals(FI);

   cout << endl << endl << "Operation: Roman Numeral 1 (" << I1 << ") " << Op << " Roman Numeral 2 (" << I2 << ")";
   cout << endl << "Answer: " << FN;
   
   system("PAUSE");
   return 0;
}
