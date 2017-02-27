#pragma once
#include "Parser.h"
#include <string>
using namespace std;

class DataSource
{
public:
	DataSource(void);
	~DataSource(void);
	Parser* parser;
	void attachParser(Parser* par);
	virtual bool open(string name) = 0;
	virtual void start(void) = 0;
	virtual void stop(void) = 0;
};
