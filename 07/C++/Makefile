IDIR =./includes
SDIR =./sources
BIN_NAME = politicos
All:
	g++ Main.cpp -std=c++11 $(SDIR)/*.cpp -I $(IDIR) -o $(BIN_NAME)
run:
	./$(BIN_NAME)
clean:
	rm -rf *~ $(SDIR)/*~ $(IDIR)/*~ $(BIN_NAME)
