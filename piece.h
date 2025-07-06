#pragma once

class Piece
{
    private:
        unsigned int _x;
        unsigned int _y;
    public:
        virtual char GetPieceName() const;
        virtual bool moveEnabled() const;
        Piece(const unsigned int x, const unsigned y):_x(x),_y(y){}
        Piece &operator=(const Piece &p)
        {
            _x=p._x;
            _y=p._y;
            return *this;
        }
};


