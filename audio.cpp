#pragma once

#include <iostream> 
#include <audio.h>
#include "include/sndfile.h"

std::vector<uint8_t> AudioPlayer::GetAudioByte(const char* filepath)
{
	/* FFMpegSection
	std::vector<uint8_t> audio;

	AVFormatContext* formatContext = avformat_alloc_context(); 
	if (avformat_open_input(&formatContext, filepath, NULL, NULL) != 0)
	{
		//std::cerr << "Could not open the file." << std::endl;
		return audio;
	}

	if (avformat_find_stream_info(formatContext, NULL) < 0) 
	{ 
		//std::cerr << "Could not find stream information." << std::endl; 
		return audio; 
	}

	// Find the first audio stream 
	const AVCodec* codec = nullptr; 
	AVCodecContext* codecContext = nullptr; 

	int audioStreamIndex = -1; 
	for (unsigned int i = 0; i < formatContext->nb_streams; i++) 
	{ 
		if (formatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_AUDIO) 
		{ 
			audioStreamIndex = i; 
			codec = avcodec_find_decoder(formatContext->streams[i]->codecpar->codec_id); 
			if (!codec) 
			{ 
				//std::cerr << "Unsupported codec!" << std::endl; 
				return audio; 
			} 
			codecContext = avcodec_alloc_context3(codec); 
			if (avcodec_parameters_to_context(codecContext, formatContext->streams[i]->codecpar) < 0) 
			{ 
				//std::cerr << "Could not copy codec context." << std::endl; 
				return audio;
			} 
			if (avcodec_open2(codecContext, codec, NULL) < 0) 
			{ 
				//std::cerr << "Could not open codec." << std::endl; 
				return audio;
			} 
			break; 
		} 
	}

	AVChannelLayout ch_layout = AV_CHANNEL_LAYOUT_STEREO;

	// Set the channel layout in the codec context
	codecContext->ch_layout = ch_layout;

	// Get the number of channels
	int num_channels = ch_layout.nb_channels;

	if (audioStreamIndex == -1) 
	{ 
		std::cerr << "Audio stream not found." << std::endl; 
		return audio; 
	} 
	
	AVPacket packet; 
	av_init_packet(&packet); 
	packet.data = NULL; 
	packet.size = 0; 
	
	// Create a vector to store the byte data 
	std::vector<uint8_t> audioData; 
	while (av_read_frame(formatContext, &packet) >= 0) 
	{ 
		if (packet.stream_index == audioStreamIndex) 
		{ 
			// Decode audio frame 
			int response = avcodec_send_packet(codecContext, &packet); 
			if (response < 0) 
			{
				std::cerr << "Error while sending packet to decoder: " << response << std::endl; 
				continue; 
			} 
			
			AVFrame* frame = av_frame_alloc(); 
			response = avcodec_receive_frame(codecContext, frame); 
			if (response >= 0) 
			{ 
				// Copy audio data to the vector 
				for (int i = 0; i < frame->nb_samples * num_channels; i++)
				{ 
					audioData.push_back(frame->data[0][i]); 
				} 
			} 
			av_frame_free(&frame); 
		} 
		av_packet_unref(&packet); 
	} 
	// Clean up 
	avcodec_free_context(&codecContext); 
	avformat_close_input(&formatContext); 
	
	// Output the size of the byte array 
	//std::cout << "Audio data size: " << audioData.size() << " bytes" << std::endl;

	return audioData;
	*/

	SF_INFO info; 
	SNDFILE* file = sf_open(filepath, SFM_READ, &info); 

	if (!file) 
	{ 
		std::cerr << "Could not open the file." << std::endl; 
		return {};
	} 
	// Read the audio data 

	std::vector<uint8_t> audioData(info.frames * info.channels * info.format);
	sf_readf_short(file, reinterpret_cast<short*>(audioData.data()), info.frames); 
	
	// Close the file 
	sf_close(file);

	return audioData;
}