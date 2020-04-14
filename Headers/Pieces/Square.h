//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_SQUARE_H
#define SZACHY_SQUARE_H


class Square {
protected:
    int x;
    int y;
    char color;
public:
    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    char getColor() const;

    void setColor(char color);
};


#endif //SZACHY_SQUARE_H
