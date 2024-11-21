#pragma once

#include <vector> 
#include <string> 
#include "FFmpeg/libavcodec/avcodec.h"
#include "FFmpeg/libavformat/avformat.h"
#include "FFmpeg/libswresample/swresample.h"
#include "FFmpeg/libavutil/channel_layout.h"

class AudioPlayer
{
public:
	static std::vector<uint8_t> GetAudioByte(const char* filepath);
};