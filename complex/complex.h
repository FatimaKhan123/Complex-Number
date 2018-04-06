#include<iostream>
using namespace std;
class complexnumber
{
public:
	//null constructor
	complexnumber()
	{
		this->real = 0;
		this->imaginary = 0;
    }
	//parameterized constructor
	complexnumber(float real, float imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
    }
	//copy constructor
	complexnumber(complexnumber& clonecomp)
	{
        this->real = clonecomp.real;
		this->imaginary = clonecomp.imaginary;
    }
    //setter
	void setreal(float real)
	{
		this->real = real;
	}
	void setimaginary(float imaginary)
	{
		this->imaginary = imaginary;
	}
	void setnumb(float real, float imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	//getter
	float getreal()
	{
		return this->real;
	}
	float getimaginary()
	{
		return this->imaginary;
	}
	complexnumber* getnumb()
	{
		return this;
	}
	
	//functions
    complexnumber add(complexnumber z1, complexnumber z2)
	{
		complexnumber z3;
		z3.real = z1.real + z2.real;
		z3.imaginary = z1.imaginary + z2.imaginary;
		return z3;
	}
	complexnumber add(complexnumber& z2)
	{
		complexnumber z3;
		z3.real = this->real + z2.real;
		z3.imaginary = this->imaginary + z2.imaginary;
		return z3;
	}
	void display()
	{
		cout << "(" << this->real << "," << this->imaginary << ")" << endl;
	}
	complexnumber operator +(complexnumber z2)
	{
		complexnumber z3;
		z3.real = this->real + z2.real;
		z3.imaginary = this->imaginary + z2.imaginary;
		return z3;
	}
	complexnumber operator -(complexnumber& z2)
	{
		complexnumber z3;
		z3.real = this->real - z2.real;
		z3.imaginary = this->imaginary - z2.imaginary;
		return z3;
	}
	complexnumber operator *(complexnumber& z2)
	{
		complexnumber z3;
		z3.real = ((this->real)*(z2.real)) - ((this->imaginary)*(z2.imaginary));
		z3.imaginary = ((this->real)*(z2.imaginary)) + ((z2.real)*(this->imaginary));
		return z3;
	}
	complexnumber operator /(complexnumber& z2)
	{
		complexnumber z3;
		z3.real = (((this->real*z2.real) - (this->imaginary*-z2.imaginary)) / ((z2.real*z2.real) + (z2.imaginary*z2.imaginary)));
		z3.imaginary = (((this->real*-z2.imaginary) + (this->imaginary*z2.real)) / ((z2.real*z2.real) + (z2.imaginary*z2.imaginary)));
		return z3;
	}
	
private:
	float real;
	float imaginary;
};
ostream& operator <<(ostream& o, complexnumber z)
{
	return o << "(" << z.getreal() << "," << z.getimaginary() << "i" << ")" << endl;
}
