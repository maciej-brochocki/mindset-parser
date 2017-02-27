#pragma once
#include "DataStream.h"

class Parser
{
public:
	Parser(void);
	~Parser(void);
	DataStream* stream;
	Parser* parser;
	void populate(DataStream* strm);
	virtual bool process(const unsigned char* buffer, int size) = 0;
	void attachParser(Parser* par);
};
