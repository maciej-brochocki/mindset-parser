#pragma once
#include "datasource.h"
#include <fstream>

class FileDataSource :
	public DataSource
{
public:
	FileDataSource(void);
	~FileDataSource(void);
	virtual bool open(string name);
	virtual void start(void);
	virtual void stop(void);
private:
	ifstream file;
	unsigned char buffer[256];
};
