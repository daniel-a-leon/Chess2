#ifndef Bishop_hpp
#define Bishop_hpp

#include "Piece.hpp"

class Bishop : public Piece {
public:
	Bishop(PieceColour colour);
	std::string symbol();
	void setSquaresInRange(char file, int rank, Board *board);
};

#endif /* Bishop_hpp */
