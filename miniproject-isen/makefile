STB_INCLUDE_PATH = ./extern/stb

CFLAGS = -std=c++11 -g -I$(STB_INCLUDE_PATH) -Isrc
LDFLAGS =

APP = FigureCreator
OBJ = miniproj.o Drawing.o Figure.o Cross.o Rectangle.o Square.o


$(APP): $(OBJ)
	g++ $(CFLAGS) -o $(APP) $(OBJ) $(LDFLAGS)

miniproj.o: miniproj.cpp
	g++ $(CFLAGS) -c miniproj.cpp $(LDFLAGS)

Drawing.o: src/Drawing.cpp
	g++ $(CFLAGS) -c src/Drawing.cpp $(LDFLAGS)

Figure.o:src/Figure.cpp
	g++ $(CFLAGS) -c src/Figure.cpp $(LDFLAGS)


Rectangle.o:src/Rectangle.cpp
	g++ $(CFLAGS) -c src/Rectangle.cpp $(LDFLAGS)

Cross.o:src/Cross.cpp
	g++ $(CFLAGS) -c src/Cross.cpp $(LDFLAGS)


Square.o:src/Square.cpp
	g++ $(CFLAGS) -c src/Square.cpp $(LDFLAGS)



.PHONY: test clean

clean:
	rm -f $(APP)
	rm -f *.o
