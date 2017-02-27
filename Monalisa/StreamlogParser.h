#pragma once
#include "parser.h"

class StreamlogParser :
	public Parser
{
public:
	StreamlogParser(void);
	~StreamlogParser(void);
	virtual bool process(const unsigned char* buf, int size);
	unsigned char buffer[256];
	int parsedSize;
};
