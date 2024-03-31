#include <cstdio>
#include "./Base/String.cpp"

class Greeting{
    public:
        void greet(){
            printf("Welcome to C++,code");
        }

        void dataTypes(){
                printf("\nEsta es muy bien, existen diferentes tipos de datos,comencemos por el primero, esto es un entero \n");
                printf("%d",this->firstNumber);
                printf("\nsay Hello int");
                printf("\nThe second data type is...\n");
                printf("Yes... String or char in this case\n");
                printf(this->name.getcString());
        }
    
    protected:
        int firstNumber = 1;
        String name = "oscar";

    public:
        int getFirstNumber(){
            return this->firstNumber;
        }
};