#pragma once

#include <vector> 
#include <string> 
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswresample/swresample.h"
#include "libavutil/channel_layout.h"

class AudioPlayer
{
public:
	static std::vector<uint8_t> GetAudioByte(const char* filepath);
};