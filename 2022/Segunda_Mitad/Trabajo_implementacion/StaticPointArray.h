#ifndef __StaticPointArray__
#define __StaticPointArray__
#include "Point.h"

class StaticPointArray {
        int size;
        Point *data;
    public:
        StaticPointArray(int size);
        StaticPointArray(const StaticPointArray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const;
        int getSize() const;
        void print() const;
        
        ~StaticPointArray();
};

#endif