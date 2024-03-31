#include <cstdio>
#include <iostream>
#include <cstring>

class String{
    private:
        char* str; // Puntero a caracteres para almacenar la cadena
        int length;
    
    public:
        String():str(nullptr),length(0){}
    
        String(char* s){
            length = strlen(s);
            str = new char[length+1];
            strcpy(str,s);
        }

        ~String(){
            delete[] str;
        }

        char* getcString() const {
            return str;
        }

        void append(char* s){
            int newLength = length + strlen(s);
            char* temp = new char[newLength + 1];
            strcpy(temp, str);
            strcat(temp, s);
            delete[] str;
            str = temp;
            length = newLength;
        }

        // Función de conversión explícita a const char*
        explicit operator const char*() const {
            return str;
        }
};