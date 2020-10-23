/*
#include "Piece.h"
#include <iostream>
#include <string>
using std::cout;

class Test
{
    //std::array<T, rows * cols> data;
public:
    //T& operator()(int y, int x)
    //{
    //    return data[y * cols + x];
    //}

    // more methods go here

    void printBoard()
    {
        for (int i = 0; i < 8; i++)
        {
            cout << "\n";
            for (int j = 0; j < 8; j++)
            {
                cout << " X ";
            }
            

        }
        
    }
};

int main(int argc, char const *argv[])
{
    /*Matrix<Piece::Piece, 8, 8> arr;
    arr(8, 8) = Piece(0, PieceType::K, Color::BLACK);*/
//    Piece  test(Piece(0, PieceType::B, Color::WHITE));
//    cout << test.toString();
//    Test print;
//    print.printBoard();
//    return 0;
//}
#include <iostream>
#include <string>

int main()
{
	char c = 'A';

	// using string::push_back

	std::string s;
	s.push_back(c);
	std::cout << s << '\n';

	return 0;
}