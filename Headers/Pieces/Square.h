//
// Created by User on 02.04.2020.
//

#ifndef SZACHY_SQUARE_H
#define SZACHY_SQUARE_H


class Square {
protected:
    int width;
    int height;
public:
    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);
};


#endif //SZACHY_SQUARE_H
