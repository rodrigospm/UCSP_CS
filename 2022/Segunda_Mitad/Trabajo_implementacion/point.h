#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
            //std::cout << "Contructor" << std::endl;
        }
        ~Point() {
            //std::cout << "Destructor" << std::endl;
        }

        void setX(int _x) {
            x = _x;
        }
        int getX() const {
            return x;
        }
        void setY(int _y) {
            y = _y;
        }
        int getY() const {
            return y;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ") ";
        }
    private:
        int x, y;
};

#endif