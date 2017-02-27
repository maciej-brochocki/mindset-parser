#include "StdAfx.h"
#include ".\parser.h"

Parser::Parser(void)
: stream(NULL)
{
}

Parser::~Parser(void)
{
}

void Parser::populate(DataStream* strm)
{
	stream = strm;
}

void Parser::attachParser(Parser* par)
{
	parser = par;
}
