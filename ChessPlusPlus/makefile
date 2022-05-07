EXENAME = a.out
CC = g++
DIRNAME = ./
CFLAGS = -c -Wall -Wextra -Werror
FILES = ChessBoard.cpp ChessBoard.hpp Box.cpp Box.hpp Chess.cpp ChessPiece.cpp ChessPiece.hpp
OBJS = ChessBoard.o Box.o Chess.o ChessPiece.o

test:
	@echo $(FILES)

game:
	$(CC) $(CFLAGS) $(FILES)
	$(CC) -o $(EXENAME) $(OBJS)

clean:
	@rm -fr *.o *.hpp.gch a.out
