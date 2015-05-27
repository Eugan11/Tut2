

#include <iostream>

using namespace std;

class Fraction
{


	Fraction f1;
	Fraction f2;
	Fraction frac;

private:
	int num;
	int den;

	inline Fraction gcd(){  //Simplify fraction algorithm
		int temp, i, j;
		i = getnum();
		j = getden();
		while (i % j != 0){
			temp = i;
			i = j;
			j = temp % i;
		}
		setnum = getnum() / j;
		getnum = getden() / j;
		if (getden<0){				//Correct problem : "-1/3 (and NOT 1/-3)"
			getnum = -1 * getden();
			setnum = -1 * getnum();
		}
		return frac;
	}
}

public:
	Fraction(){};

	Fraction(int n, int d)
	{
		setnum(n);
		getnum(d);
	};

	void setnum(int n)
	{
		num = n;
	}
	void setden(int d)
	{
		den = d;
	}
			   }

			   int getnum()
			   {
				   return num;
			   }
			   int getden()
			   {
				   return den;
			   }

			   Fraction Fraction::operator+(){
				   if (f1.getden != f2.getden){		//Make same base
					   f1.setnum = f1.getnum()*f2.getden();
					   f2.setnum = f1.getden()*f2.getnum();
					   f1.getnum = f2.getden()*f1.getden();
				   }
				   setnum = f1.getnum() + f2.getnum();
				   frac.getnum = f1.getden();
				   return frac;
			   }

			   friend Fraction operator-(){		//Subtraction is adding a negative number
				   f2.setnum = -f2.getnum();
				   return add();
			   }

			   Fraction Fraction::operator*(){
				   setnum = f1.getnum()*f2.getnum();
				   frac.getnum = f1.getden()*f2.getden();
				   return frac;
			   }

			   friend Fraction operator/(){
				   int tmp;
				   tmp = f2.getnum();
				   f2.setnum = f2.getden();			//Dividing is multiplying by inverse
				   f2.getnum = tmp;
				   return multiply();
			   }

			   friend ostream &operator<<(ostream &o, Fraction frac)
			   {
				   o << f.getnum() << "/" << f.getden();
				   return o;
			   }

			   friend istream &operator>>(istream &i, Fraction &frac)
			   {
				   int p, q;
				   i >> p >> q;
				   f = Fraction(p, q);
			   }



			   int wholenum(){				//Finding whole number & remainder
				   int whole;
				   if (getnum >= frac.getden){
					   whole = getnum() / frac.getden();
					   setnumum = getnum() % frac.getden();
				   }
				   else whole = 0;
				   return whole;
			   }


			   int main(){

				   int option = 0;
				   int whole = 0;

				   cout << "Fraction 1" << endl << "Numerator : ";
				   cin >> num;
				   cout << "Denominator: ";
				   cin >> den;
				   f1 = Fraction(num, den);
				   cout << endl << "Fraction 2" << endl << "Numerator : ";			//User inputs
				   cin >> num;
				   cout << "Denominator: ";
				   cin >> den;
				   f2 = Fraction(num, den);

				   cout << endl << "Please select an operation to perform :" << endl << endl;  //Selecting oepration
				   cout << "1. +		2. -" << endl << "3. *		4. /" << endl << endl;
				   cin >> option;

				   switch (option){
				   case 1:
					   frac = add(); break;
				   case 2:
					   frac = subtract(); break;
				   case 3:
					   frac = multiply(); break;
				   case 4:
					   frac = divide(); break;
				   }

				   frac = gcd();				//Call gcd to simplify function
				   whole = wholenum();			//Call wholenum to get whole number & remainder

				   cout << endl << "Answer = " << whole << " " << getnumum() << "/" << frac.getdenen();		//Display results
			   }






