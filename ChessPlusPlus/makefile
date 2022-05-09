EXENAME = a.out
CC = g++
DIRNAME = ./
CFLAGS = -c -Wall -Wextra -Werror
FILES = ChessBoard.cpp ChessBoard.hpp Box.cpp Box.hpp Chess.cpp ChessPiece.cpp ChessPiece.hpp Pawn.hpp Pawn.cpp King.hpp King.cpp Queen.hpp Queen.cpp Bishop.hpp Bishop.cpp Rook.hpp Rook.cpp Knight.hpp Knight.cpp
OBJS = ChessBoard.o Box.o Chess.o ChessPiece.o Pawn.o King.o Queen.o Bishop.o Rook.o Knight.o

test:
	@echo $(FILES)

game:
	$(CC) $(CFLAGS) $(FILES)
	$(CC) -o $(EXENAME) $(OBJS)

clean:
	@rm -fr *.o *.hpp.gch a.out
