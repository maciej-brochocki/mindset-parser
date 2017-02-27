#include "StdAfx.h"
#include ".\streamlogparser.h"
#include <sstream>
#include <string>
using namespace std;

StreamlogParser::StreamlogParser(void)
: parsedSize(0)
{
}

StreamlogParser::~StreamlogParser(void)
{
}

bool StreamlogParser::process(const unsigned char* buf, int size)
{
	if (size == 1) //first empty line
	{
		return true;
	}

	istringstream iss(string((char*)buf), istringstream::in);
	float time;
	char trash;
	unsigned int val;
	iss >> time;
	iss >> trash;
	iss.setf ( 0, ios::showbase );
	while (iss.good())
	{
		iss >> skipws >> hex >> val;
		buffer[parsedSize++] = val;
	}
	parser->process(buffer,parsedSize);
	parsedSize = 0;
	return true;
}
