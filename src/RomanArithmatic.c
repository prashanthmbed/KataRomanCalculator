#include "iostream" 
using namespace std;

void ShowList();
int convertToIntegers(string);
int DoOperation(int, int, string);
string ToNumerals(int);

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

void ShowList()
{

  cout << "I" <<" "<<"1"<<endl;
  cout << "V"<<" "<<"5"<<endl;
  cout << "X"<<" "<<"10"<<endl;
  cout << "L"<<" "<<"50"<<endl;
  cout << "C"<<" "<<"100"<<endl;
  cout << "D"<<" "<<"500"<<endl;
  cout << "M"<<" "<<"1000"<<endl;
}

int convertToIntegers(string RN)
{
  string numString="";
  int burp = RN.length();
  int	numInt=0;

  for(int i = 0; i < burp; i++)
  {
    numString = RN.substr(i, 1);
    if(numString == "M")
      numInt +=1000;
    else if(numString == "D")
      numInt +=500;
    else if(numString == "C")
      numInt +=100;
    else if(numString == "L")
      numInt +=50;
    else if(numString == "X")
      numInt +=10;
    else if(numString == "V")
      numInt +=5;
    else //(numString == "I")
      numInt +=1;
  }
  return numInt;
}

int DoOperation(int int1, int int2, string oper)
{
  int IntegerFinal;
  if(oper == "+")
    IntegerFinal = int1 + int2;
  else if(oper == "-")
    IntegerFinal = int1 - int2;
  return IntegerFinal;
}

string ToNumerals(int FI)
{
   string NumeralFinal="";

   while( FI >= 1000)
   {
      NumeralFinal += "M";
      FI -= 1000;
   }
   while(FI >= 500)
   {
      NumeralFinal +="D";
      FI -= 500;
   }
   while( FI >= 100)
   {
     NumeralFinal += "C";
     FI -= 100;
   }
   while( FI >= 50)
   {
     NumeralFinal += "L";
     FI -= 50;
   }
   while( FI >= 10)
   {
     NumeralFinal += "X";
     FI -= 10;
   }
   while( FI >= 5)
   {
     NumeralFinal += "V";
     FI -= 5;
   }
   while( FI >= 1)
   {
     NumeralFinal += "I";
     FI -= 1;
   }
   return NumeralFinal;
}
