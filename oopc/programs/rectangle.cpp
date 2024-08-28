#include<iostream>
#include<string>

using namespace std;

class Rectangle{

    public:
        int length;
        float width;

        Rectangle(int length, float width){
            this->length = length;
            this->width = width;
        }

        float area(){
            return length * width;
        }
        
        void display(){
            cout << length << endl;
            cout << width << endl;
            cout << area() << endl;
        }
};

int main(){

    Rectangle r(10, 20);
    r.display();

    return 0;
}
