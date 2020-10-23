#include <iostream>
#include "Piece.h"
using std::cout;
using std::string;

class ChessGame
{

private:
    /* data */
    int turn;
    Color color;
    Piece board[8][8];
public:
    ChessGame(/* args */);
    void printBoard();
    int position(int x, int y);
    //void setPosition(Piece piece, int x, int j);
};

ChessGame::ChessGame(/* args */)
{
    //Piece test(Piece(0, PieceType::P, Color::BLACK));
    //board[0][0] = test;
    for (int i = 0; i < 8; i++)
    {
        Piece black(Piece(position(1,i), PieceType::P, Color::BLACK));
        Piece white(Piece(position(6,i), PieceType::P, Color::WHITE));
        board[1][i] = black;
        board[6][i] = white;
    }
    for (int i = 2; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            Piece empty(Piece(position(i, j), PieceType::X, Color::NONE));
            board[i][j] = empty;
        }
        
    }
    PieceType pieceOrder[8] = {PieceType::R, PieceType::N, PieceType::B, PieceType::Q, PieceType::K, PieceType::B, PieceType::N, PieceType::R};
    for (int i = 0; i < 8; i++)
    {   
        PieceType pieceType = pieceOrder[i];
        Piece black(Piece(position(0,i), pieceType, Color::BLACK));
        Piece white(Piece(position(7,i), pieceType, Color::WHITE));
        board[0][i] = black;
        board[7][i] = white;
    }
    
    
    turn = 0;
    color = Color::WHITE;
}

int ChessGame::position(int x, int y)
{
    string sum, a, b;
    a = std::to_string(x);
    b = std::to_string(y);
    sum = a + b;
    int res = std::stoi(sum);

    return res;
}

void ChessGame::printBoard()
{
    cout << "*////////////////////////////////////////////*\n*/     _____   _                            /*\n*/    / ____| | |                           /*\n*/   | |      | |__     ___   ___   ___     /*\n*/   | |      | '_ \\   / _ \\ / __| / __|    /*\n*/   | |____  | | | | |  __/ \\__ \\ \\__ \\    /*\n*/    \\_____| |_| |_|  \\___| |___/ |___/    /*\n*/                                          /*\n*////////////////////////////////////////////*\n\n\n";
    cout << "BLACK: lowercase\nWHITE: UPPERCASE\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "\n";
        for (int j = 0; j < 8; j++)
        {
            cout << " " << board[i][j].toString() << " ";
        }

    }
    cout << "\n";
}

int main()
{
    ChessGame chessGame;
    chessGame.printBoard();
    return 0;
}