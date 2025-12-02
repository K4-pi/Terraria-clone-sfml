bear:
	bear -- clang++ -std=c++23 main.cpp src/* -o game -Iinclude -Llib -lsfml-graphics -lsfml-window -lsfml-system

basic:
	clang++ -std=c++23 main.cpp src/* -o game -Iinclude -Llib -lsfml-graphics -lsfml-window -lsfml-system
