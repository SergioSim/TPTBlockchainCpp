g++ -Wall -std=c++11 -I include/ -g src/** -o blockchain
valgrind --leak-check=yes ./blockchain