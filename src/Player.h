#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
protected:
	string name;
	int type;
public:
	Player(string i, int t) : name(i), type(t) {}

	int getType() { return type; }

	bool isNumber(string i) {};

	virtual string getPlayerName() { return name; }

	virtual void getMove(Board board, int& x, int& y) = 0;

	virtual ~Player() {}
};

#endif
