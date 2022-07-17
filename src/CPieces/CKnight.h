//
// Created by Chirkov on 06.05.2022.
//
#pragma once

#include "../CPiece.h"

/**
 * Class CKnight representing an Knight piece on the board
 */

class CKnight : public CPiece {
public:
    explicit CKnight(CBoard & board, int i, Color color);

    /**
      * Generation of all possible moves of a chess piece
      * @return std::list<CMove>
      */
    std::list<CMove> possibleMoves() const override;

    /**
    * Generation of all possible captures of a chess piece
    * @return std::list<CMove>
    */
    std::list<CMove> possibleCaptures() const override;

    /**
     * Get string representation of piece
     * @return string
     */
    std::string getChar() const override;
};

