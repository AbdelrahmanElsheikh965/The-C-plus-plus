#include <iostream>

using namespace std;

class Complex
{
    /* Function Declaration - it's given a reference to an object from Complex Class */
    friend Complex friendSub(Complex &compObject_1, Complex &compObject_2);

    private:

        int real;
        int image;

    public:

        void setReal(int _real)
        {
            real = _real;
        }

        void setImage(int _image)
        {
            image = _image;
        }

        getReal(void)
        {
            return real;
        }

        getImage(void)
        {
            return image;
        }

        void print(void);
        Complex add(Complex compObject);

        Complex sub(Complex compObject)
        {
            Complex finalResult;
            finalResult.setReal(real-compObject.getReal());
            finalResult.setImage(image-compObject.getImage());
            return finalResult;
        }
};

Complex friendSub(Complex &compObject_1, Complex &compObject_2)
{
    Complex finalResult;
    finalResult.setReal(compObject_1.getReal()-compObject_2.getReal());
    finalResult.setImage(compObject_1.getImage()-compObject_2.getImage());
    return finalResult;
}

void Complex::print(void)
{
    cout<<"Number = "<<real;
    if(image > 0)
    {
        cout<<"+"<<image<<"j"<<endl;
    }else if (image < 0)
    {
        cout<<image<<"j"<<endl;
    }
}

Complex Complex::add(Complex compObject)
{
    Complex finalResult;
    finalResult.setReal(real+compObject.getReal());
    finalResult.setImage(image+compObject.getImage());
    return finalResult;
}


void print(Complex comp);
Complex generalAdd(Complex compObject_1, Complex compObject_2);

int main()
{
    Complex c_1, c_2, c_Res;
    c_1.setReal(30);
    c_1.setImage(15);

    c_2.setReal(5);
    c_2.setImage(7);

    c_Res = generalAdd(c_1, c_2);
    c_Res = c_1.add(c_2);
    c_Res = c_1.sub(c_2);
    c_Res = friendSub(c_1, c_2);

    c_Res.print();
    print(c_Res);

    return 0;
}

/* Standalone Functions */
void print(Complex comp)
{
    cout<<"Number = "<<comp.getReal();
    if(comp.getImage() > 0)
    {
        cout<<"+"<<comp.getImage()<<"j"<<endl;
    }else if (comp.getImage() < 0)
    {
        cout<<comp.getImage()<<"j"<<endl;
    }
}

Complex generalAdd(Complex compObject_1, Complex compObject_2)
{
    Complex finalResult;
    finalResult.setReal(compObject_1.getReal() + compObject_2.getReal());
    finalResult.setImage(compObject_1.getImage()+compObject_2.getImage());
    return finalResult;
}
