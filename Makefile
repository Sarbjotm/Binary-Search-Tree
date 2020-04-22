all: BST BT-visualize main



BST: BST.o
	g++ -o BST BST.o

BST.o: BST.cpp BST.h BT-node.h
	g++ -c BST.cpp

main: main.o
	g++ -o main main.o

main.o: main.cpp BST.h BT-node.h
	g++ -c main.cpp


BT-visualize: BT-visualize.o
	g++ -o BT-visualize BT-visualize.o

BT-visualize.o: BT-visualize.cpp BST.h BT-node.h
	g++ -c BT-visualize.cpp


clean:
	rm -f BST BT-visualize main *.o
