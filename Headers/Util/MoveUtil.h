/**
 * Utility methods
 */

#ifndef SZACHY_MOVEUTIL_H
#define SZACHY_MOVEUTIL_H


#include "../Pieces/Piece.h"

class MoveUtil {
public:
    /// Setting and validating point of board (8x8)
    /// \param x referance of x coordinate
    /// \param y referance of x coordinate
    static void setAndValidateMovePoint(int* x, int* y);
    ///
    /// \param array Piece * matrix
    /// \param x 1st coordinate of field
    /// \param y 2nd coordinate of field
    /// \param color color of figure
    /// \return true there is figure in same color at x,y array matrix false otherwise
    static bool isFriendlyFire(std::vector<std::vector<Piece *>> array, int x, int y, char color);
};


#endif //SZACHY_MOVEUTIL_H
