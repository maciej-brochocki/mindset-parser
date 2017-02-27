#include "StdAfx.h"
#include ".\filedatasource.h"

FileDataSource::FileDataSource(void)
{
}

FileDataSource::~FileDataSource(void)
{
}

bool FileDataSource::open(string name)
{
	file.open(name.c_str(), ifstream::in);
	return file.is_open();
}

void FileDataSource::start(void)
{
    while (file.good())
	{
      file.getline((char*)buffer, 256);
	  if (!parser->process(buffer, file.gcount()))
	  {
		  break;
	  }
	}
    file.close();
}

void FileDataSource::stop(void)
{
}
