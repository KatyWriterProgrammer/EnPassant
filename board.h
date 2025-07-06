#pragma once
#include "piece.h"
#include <memory>
#include <array>
#include <iostream>
class Board
{
    private:
        std::array<std::shared_ptr<Piece>,16> _white;
        std::array<std::shared_ptr<Piece>,16> _black;
        std::array<char,64> _board;
        unsigned short _moveCounter;
    public:
        bool move(std::shared_ptr<Piece> from, unsigned int to_x, const unsigned int to_y);
        std::array<std::shared_ptr<Piece>,16> GetArr(char c) const{return (c=='w')?_white:_black;}
        Board();
};

std::ostream& operator<<(std::ostream& s, const Board& b);
