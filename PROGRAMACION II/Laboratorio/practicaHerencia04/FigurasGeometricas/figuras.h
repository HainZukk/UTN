#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED
#include <string>

class Figuras {
    protected:
        std::string _color;
    public:  
    //setters
    void setColor(std::string color);
    //getters
    std::string getColor();

};

#endif