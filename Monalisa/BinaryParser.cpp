#include "StdAfx.h"
#include ".\binaryparser.h"

int pkts=0;
extern "C" void HandleDataValueFunc( unsigned char extendedCodeLevel,
                            unsigned char code,
                            unsigned char numBytes,
                            const unsigned char *value,
                            void *customData )
{
	pkts++;
}

BinaryParser::BinaryParser(void)
{
	THINKGEAR_initParser(&TGSparser, PARSER_TYPE_PACKETS, HandleDataValueFunc, this);
}

BinaryParser::~BinaryParser(void)
{
}

bool BinaryParser::process(const unsigned char * buf, int size)
{
	for (int i=0; i<size; i++)
	{
		THINKGEAR_parseByte(&TGSparser, buf[i]);
	}
	return true;
}
