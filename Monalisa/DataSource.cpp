#include "StdAfx.h"
#include ".\datasource.h"

DataSource::DataSource(void)
: parser(NULL)
{
}

DataSource::~DataSource(void)
{
}

void DataSource::attachParser(Parser* par)
{
	parser = par;
}
