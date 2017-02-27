#pragma once
#include "parser.h"
#include "ThinkGearStreamParser.h"

class BinaryParser :
	public Parser
{
public:
	BinaryParser(void);
	~BinaryParser(void);
	ThinkGearStreamParser TGSparser;
	virtual bool process(const unsigned char * buf, int size);
};
