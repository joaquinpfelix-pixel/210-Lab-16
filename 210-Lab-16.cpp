// COMSC-210 | Lab 16 | Joaquin Felix
#include <iostream>
using namespace std;

// Constant declarations
const int MIN_RGB = 0;
const int MAX_RGB = 255;

//Color class with the three variables
class Color
{
    private:
    int red;
    int green;
    int blue;

    public:
    //Constructors
    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);

    int getRed() const;
    int getGreen() const;
    int getBlue() const;

    void print() const;
};


void populateColor(Color &c, int r, int g, int b);


int main() 
{
    Color color1;
    Color color2;
    Color color3;

    populateColor(color1, 255, 0, 0);
    populateColor(color2, 0, 255, 0);
    populateColor(color3, 0, 0, 255);

    cout << "Color Values" << endl;
    cout << "------------" << endl;

    color1.print();
    color2.print();
    color3.print();

    return 0;

}


void populateColor(Color &c, int r, int g, int b)
{
    c.setRed(r);
    c.setGreen(g);
    c.setBlue(b);
}

void Color::setRed(int r) 
{
    if (r >= MIN_RGB && r <= MAX_RGB)
    {
        red = r;
    } else{
        cout << "Error: Red value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

void Color::setGreen(int g) 
{
    if (g >= MIN_RGB && g <= MAX_RGB)
    {
        green = g;
    } else{
        cout << "Error: Green value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

void Color::setBlue(int b) 
{
    if (b >= MIN_RGB && b <= MAX_RGB)
    {
        blue = b;
    } else{
        cout << "Error: Blue value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

//getRed() returns red value
//arguments: none
//returns: integer
int Color::getRed() const
{
    return red;
}

//getGreen() returns green value
//arguments: none
//returns: integer
int Color::getGreen() const
{
    return green;
}

//getBlue() returns blue value
//arguments: none
//returns: integer
int Color::getBlue() const
{
    return blue;
}

//print() outputs RGB values
//arguments: none
//returns: nothing
void Color::print() const
{
    cout << "RGB(" << red << ", " 
         << green << ", "
         << blue << ")" << endl;
}