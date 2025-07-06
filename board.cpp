#include "piece.h"
#include "board.h"
#include "bauer.h"

Board::Board()
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            _white[i+j] = std::make_shared<Piece>(Bauer(i,j));
            _black[i+j] = std::make_shared<Piece>(Bauer(i,j));
            _board[j+8*i] = _white[i,j]->GetPieceName();
            _board [j+8*(i+7)] = _black[i,j]->GetPieceName();
        }
    }
       
}

std::ostream &operator<<(std::ostream &s, Board &b)
{
    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 16; j++)
        {
            if (j%2==0)
            {
                s << "+ ";
            }
            else{
                s << " ";
            }
        }
        s << '\n' << '\n';
    }
    return s;
}
