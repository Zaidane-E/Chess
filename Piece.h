#include "PieceType.h"
#include "Color.h"
#include <string>
#include<bits/stdc++.h>
using namespace std; 
using std::string;

class Piece
{

private:
    /* data */
    int position;
    PieceType type;
    Color color;

public:
    Piece(int position, PieceType type, Color color);
    Piece() = default;
    string toString();
    PieceType getType();
};

Piece::Piece(int position, PieceType type, Color color)
{
    this->position = position;
    this->type = type;
    this->color = color;
}

PieceType Piece::getType()
{
    return type;
}

string Piece::toString()
{
    char typeString;

    switch (type)
    {
    case PieceType::K:
        typeString = 'K';
        break;

    case PieceType::Q:
        typeString = 'Q';
        break;
    
    case PieceType::B:
        typeString = 'B';
        break;

    case PieceType::N:
        typeString = 'N';
        break;
    
    case PieceType::R:
        typeString = 'R';
        break;
    
    case PieceType::P:
        typeString = 'P';
        break;
    
    case PieceType::X:
        typeString = '.';
        break;

    default:
        typeString = ' ';
        break;
    }
    
    string s(1, typeString);

    if ( color == Color::BLACK ) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    return s;
}
