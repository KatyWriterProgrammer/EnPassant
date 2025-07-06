#pragma once
#include "piece.h"

class Bauer: public Piece
{
    public:
        Bauer(const unsigned int x, const unsigned int y): Piece(x,y){}

        char GetPieceName() const{return 'B';}

        bool moveEnabled() const{return true;}

        Bauer &operator=(const Bauer &b)
        {
            Piece::operator=(b);
            return *this;
        }
};
