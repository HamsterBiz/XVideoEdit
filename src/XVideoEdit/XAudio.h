#pragma once
#include <string>
class XAudio
{
protected:
	XAudio();
	virtual ~XAudio();

public:
	static XAudio* Get();

	virtual bool ExportA(std::string src,std::string out) = 0;
	virtual void PlayAudio(std::string src) = 0;
};

