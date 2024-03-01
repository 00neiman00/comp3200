//
// Created by Jongyun Ha on 1/21/24.
//

#ifndef COMP3200_VECTOR_H
#define COMP3200_VECTOR_H


class Vector {

public:
    Vector();

    Vector(int x, int y);

private:
    int mX;
    int mY;

    int GetX() const;

    int GetY() const;

    void SetX(int x);

    void SetY(int y);

    void Add(const Vector &vector);
};


#endif //COMP3200_VECTOR_H
