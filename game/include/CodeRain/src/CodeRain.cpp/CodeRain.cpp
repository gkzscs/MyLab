#include <iostream>
#include <unistd.h>
#include <list>
using namespace std;


struct Line
{
	list<char> codes;

	int len() { return codes.size(); }
	char at(int idx) 
	{
		int n = 0;
		for (auto v : codes) 
		{
			if (n++ != idx) continue;
			return v;
		}

		return ' ';
	}
	void append(char ch) { codes.push_back(ch); }
};

struct Rain
{
	list<Line *> codeLines;

	int len() { return codeLines.size(); }
	Line *at(int idx) 
	{
		int n = 0;
		for (auto v : codeLines) 
		{
			if (n++ != idx) continue;
			return v;
		}

		return nullptr;
	}
	void append(Line *line) { codeLines.push_back(line); }
	void remove(int idx) 
	{
		int n = 0;
		for (auto it = codeLines.begin(); it != codeLines.end(); ++it)
		{
			if (n++ != idx) continue;
			codeLines.remove(*it);
			break;
		}
	}
	void remove(Line *line)
	{
		for (auto v : codeLines)
		{
			if (v == line) codeLines.remove(v);
			break;
		}
	}
};


static Rain rain;


void updateRain();
void updateLine(Line *line);
char createChar();
void changeRain();
bool die(Line *line);


int main()
{
	auto line = new Line();
	rain.append(line);

	while (1) 
	{
		updateRain();
		usleep(200*1000);
	}
}

void updateRain()
{
	// Create or destroy line
	changeRain();

	// Move
	for (int i = 0, len = rain.len(); i < len; ++i)
	{
		updateLine(rain.at(i));
	}
}

void updateLine(Line *line)
{
	// Create new character
	char ch = createChar();
	line->append(ch);

	// Move 
	cout << "\033[s";
	cout << "\033[2J";
	for (int len = line->len(), i = len-1; i >= 0; --i)
	{
		cout << line->at(i) << "\033[1D\033[1B";
	}
	cout << flush;
	cout << "\033[u";

	// Judge whether to die
	bool flag = die(line);
	if (flag) rain.remove(line);
}

char createChar()
{
	//srand((unsigned)time(NULL));
	int n = rand() % 36;

	char ch;
	if (n >= 0 && n <= 26) ch = ('a' + n);
	else if (n > 26 && n < 37) ch = ('0' + n - 26);

	return ch;
}

void changeRain()
{
//	srand((unsigned)time(NULL));
	int n = rand() % 2;

	// Destroy a line
	/*
	if (n == 0) 
	{
		srand((unsigned)time(NULL));
		n = rand() % rain.len();

		rain.remove(n);
	}
	*/
	// Create a line
	if (n == 1)
	{
		Line *line = new Line();
		rain.append(line);
	}
}

bool die(Line *line)
{
	if (line->len() > 20) return true;

	int n = rand() % 5;
	if (n == 0) return true;

	return false;
}
