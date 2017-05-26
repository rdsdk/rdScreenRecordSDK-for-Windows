#ifndef	_ENCODE_PARAMS_HEADER
#define	_ENCODE_PARAMS_HEADER
#include "windows.h"
//视频编码器的类型
enum EVideoEncoder
{
	VE_X264,				//x264 软件编码器
	VE_CUDA,				//nvidia CUDA 硬件加速编码器
	VE_NVENC,				//nvidia NVENC 硬件编码器
	VE_INTEL				//intel 核显加速编码器
};
static const char * const video_encoder_names[] = { "x264", "nvcuda", "nvenc", "intel", 0 };

//视频编码配置，profile。
enum EVideoProfile
{
	VF_Auto,
	VF_BaseLine,
	VF_Main,
	VF_High
};
static const char * const video_profile_names[] = { "auto", "baseline", "main", "high", 0 };

//用于各种视频编码器的 Preset 配置
typedef int EVideoPreset;
enum EVideoPreset_x264
{
	VP_x264_UltraFast,
	VP_x264_SuperFast,
	VP_x264_VeryFast,
	VP_x264_Faster,
	VP_x264_Fast,
	VP_x264_Medium,
	VP_x264_Slow,
	VP_x264_Slower,
	VP_x264_VerySlow,
	VP_x264_Placebo
};
static const char * const video_preset_x264_names[] = { "UltraFast", "SuperFast", "VeryFast", "Faster", "Fast", 
														"Medium", "Slow", "Slower", "VerySlow", "Placebo", 0 };

enum EVideoPreset_Cuda
{
	VP_Cuda_PSP,		//width 320  height 240
	VP_Cuda_iPod,		//width 320  height 240
	VP_Cuda_AVCHD,		//width 1920 height 1080
	VP_Cuda_BD,			//width 1920 height 1080
	VP_Cuda_HDV1440,	//width 1440 height 1080
	VP_Cuda_ZuneHD,		//width 720  height 480
	VP_Cuda_FlipCam
};
static const char * const video_preset_cuda_names[] = { "PSP", "iPod", "AVCHD", "BlurayDisk", "HDV1440", "ZuneHD", "FlipCam", 0 };

enum EVideoPreset_Nvenc
{
	VP_Nvenc_Default,
	VP_Nvenc_HighPerformance,
	VP_Nvenc_HighQuality,
	VP_Nvenc_BlurayDisk,
	VP_Nvenc_LowLatencyDefault,
	VP_Nvenc_LowLatencyHP,
	VP_Nvenc_LowLatencyHQ,
	VP_Nvenc_LosslessDefault,
	VP_Nvenc_LosslessHP
};
static const char * const video_preset_nvenc_names[] = { "Default", "HighPerformance", "HighQuality", "BlurayDisk", "LowLatencyDefault", 
														"LowLatencyHP", "LowLatencyHQ", "LosslessDefault", "LosslessHP", 0 };

enum EVideoPreset_Intel
{
	VP_Intel_Speed,
	VP_Intel_Balanced,
	VP_Intel_Quality
};
static const char * const video_preset_intel_names[] = { "Speed", "Balanced", "Quality", 0 };

//视频编码器码率控制方式设置
enum EVideoRateMode
{
	VR_AverageBitrate,		//平均码率(ABR)		
							//x264 使用 X264_RC_ABR平均码率
							//Nvenc	NV_ENC_PARAMS_RC_VBR
							//Cuda	RC_VBR

	VR_VariableBitrate,		//可变码率(VBR)		
							//x264 使用 X264_RC_ABR平均码率 进行控制
							//Nvenc	NV_ENC_PARAMS_RC_VBR
							//Cuda	RC_VBR

	VR_ConstantBitrate,		//固定码率(CBR)		
							//x264 使用 X264_RC_CRF 进行控制
							//Nvenc	NV_ENC_PARAMS_RC_CBR
							//Cuda	RC_CBR

	VR_ConstantQP,			//恒定质量(CQP)		
							//x264 使用 X264_RC_CQP恒定质量
							//Nvenc	NV_ENC_PARAMS_RC_CBR, 如果 VBV 参数有值，则使用 NV_ENC_PARAMS_RC_VBR_MINQP
							//Cuda	RC_CQP / RC_VBR_MINQP
};

//保存视频文件的格式
enum	EFileContainer
{
	Mix_FLV,
	Mix_MP4,
	Mix_AVI,

	Mix_RTMP,

	Vid_264,	//H264裸流，不封装，无音频
	Aud_ONLY,	//AAC/MP3文件，无视频

	File_Container_TypeCount
};

enum	EAudioInSamples		//输入音频的采样频率
{
	Aud_Inp_Samp_11025	= 11025,		//11Khz
	Aud_Inp_Samp_22050	= 22050,		//22Khz
	Aud_Inp_Samp_44100	= 44100,		//44Khz
	Aud_Inp_Samp_48000	= 48000		//48Khz
};

//音频编码器，
enum	EAudioEncoder
{
	Aud_Enc_AAC,
	Aud_Enc_PCM,
	//Aud_Enc_Mp3,
};

enum	EVideoCSP
{
	Vid_CSP_I420,			//IYUV  /* yuv 4:2:0 planar */	YYYY YYYY UU VV
	Vid_CSP_YV12,			//  /* yvu 4:2:0 planar */	YYYY YYYY VV UU
	Vid_CSP_NV12,			//  /* yuv 4:2:0, with one y plane and one packed u+v */	YYYY YYYY UVUV
	Vid_CSP_NV21,			//  /* yuv 4:2:0, with one y plane and one packed v+u */	YYYY YYYY VUVU
	Vid_CSP_I422,			//  /* yuv 4:2:2 planar */	YYYY YYYY UUUU VVVV

	Vid_CSP_YV16,			//  /* yvu 4:2:2 planar */	YYYY YYYY VVVV UUUU
	Vid_CSP_NV16,			//  /* yuv 4:2:2, with one y plane and one packed u+v */	YYYY YYYY UVUVUVUV
	Vid_CSP_YUY2,			//
	Vid_CSP_UYVY,
	Vid_CSP_V210,			//0x0008  /* 10-bit yuv 4:2:2 packed in 32 */

	Vid_CSP_I444,			//0x0009  /* yuv 4:4:4 planar */
	Vid_CSP_YV24,			//0x000a  /* yvu 4:4:4 planar */
	Vid_CSP_AYUV,
	Vid_CSP_RGB,			//0x000d  /* packed rgb 24bits   */
	Vid_CSP_BGR,			//0x000b  /* packed bgr 24bits   */

	Vid_CSP_ARGB,			//0x000c  /* packed bgr 32bits   */	A8R8G8B8
	Vid_CSP_ARGB10,			//0x000c  /* packed bgr 32bits   */	A2R10G10B10
};

static const char * const video_color_space_names[] = { "I420/IYUV", "YV12", "NV12", "NV21", "I422", 
														"YV16", "NV16", "YUY2", "UYVY", "V210",
														"I444", "YV24", "AYUV", "RGB", "BGR", 
														"ARGB", "ARGB10", 0 };

typedef	struct	SEncStatusConnectFail
{
	DWORD		dwErrorCode;	//错误代码
	DWORD		dwTryLaterMS;	//在多少毫秒后会尝试再次连接。如果值为 0xFFFFFFFF 表示不会再次尝试
}*PSEncStatusConnectFail;

typedef	struct	SEncStatusUploadBitrate
{
	INT64		iConnectUploadMSeconds;	//当前连接已经上传的视频时长（毫秒）
	INT64		iTotalUploadMSeconds;	//累计上传的视频时长（毫秒）
	DWORD		uCurrentUploadBitrate;	//当前上传比特率
	DWORD		uAverageUploadBitrate;	//平均上传比特率（最近一次连接）
}*PSEncStatusUploadBitrate;

typedef	struct	SEncStatusDiscardPacks
{
	INT64		iDiscardStartMSeconds;	//丢弃帧的起始时间（毫秒）
	INT64		iDiscardMSeconds;		//丢弃的时长（毫秒）
	DWORD		uDiscardFrames;			//丢弃的帧数
	DWORD		uAverageUploadBitrate;	//平均上传比特率（最近一次连接）
}*PSEncStatusDiscardPacks;

typedef	struct	SEncStatusEncodeFps
{
	INT64		iRecordTime;	//从开始录制到当前经过的时长（毫秒）。
	INT64		iInpFrameNum;	//当前正在编码帧的编号。
	INT64		iEncFrameNum;	//当前正在编码帧的编号。
	INT64		iEncFrameCount;	//实际编码完成的帧数，不包括跳过的帧数。
	float		fAvgEncodeFps;	//平均的编码帧率。
	float		fCurEncodeFps;	//当前编码的帧率。
	float		fAvgInputFps;	//平均的输入帧率。
	float		fCurInputFps;	//当前输入的帧率。

}*PSEncStatusEncodeFps;

struct	SEncoderSaveFile
{
	EFileContainer	eContainer;
	LPCWSTR			szSavePath;
	//LPCWSTR			szTitle;
	//LPCWSTR			szContent;

	union
	{
		INT64	iSplitSize;
		struct
		{
			DWORD	dwDelaySecond;
			BOOL	bAdaptiveNetwork;
		};
	};
};


//编码及保存、上传的状态，通过回调函数通知上层调用者。
enum	EEncodeStatus
{
	eEncStatusSuccess,			//成功，通常不需要通知该值

	eEncStatusStoped,			//编码已经停止。例如上传失败、写入文件错误等导致的停止，或者调用者主动停止编码，都需要通知
								//dwValue = 错误代码；pValueEx = NULL。

	eEncStatusEncodeError,		//编码器错误，例如编码过程中编码器返回失败。
								//dwValue = 错误代码；pValueEx = NULL。

	eEncStatusEncodeFps,		//编码的帧率等信息，大约每秒计算并通知一次。
								//dwValue = 0；pValueEx = PSEncStatusEncodeFps。

	eEncStatusWriteFileFail,	//写入文件失败。
								//dwValue = 当前输出文件的 Index；pValueEx = 错误代码（LPDWORD）。

	eEncStatusDisconnected,		//上传时连接被断开。
								//dwValue = 当前输出文件的 Index；pValueEx = 错误代码（LPDWORD）。

	eEncStatusReConnectStart,	//开始重新连接。
								//dwValue = 当前输出文件的 Index；pValueEx = 重连计数（LPDWORD）从1开始。

	eEncStatusReConnectDone,	//重新连接成功。
								//dwValue = 当前输出文件的 Index；pValueEx = 重连计数（LPDWORD）。
								//			回调返回后，重连计数器清0，下次断开重连时，计数器又从1开始。

	eEncStatusReConnectFail,	//重新连接失败
								//dwValue = 当前输出文件的 Index；
								//pValueEx = PSEncStatusConnectFail

	eEncStatusUploadBitrate,	//当前的上传速率，大约每秒计算并通知一次。
								//dwValue = EFileContainer；
								//pValueEx = PSEncStatusUploadBitrate。

	eEncStatusDiscardPacks,		//因为上传缓慢，丢弃了部分编码后的视频数据。
								//dwValue = EFileContainer；
								//pValueEx = PSEncStatusDiscardPacks。

	eEncStatusDiscardFrame,		//因为编码缓慢，丢弃了输入的一帧画面。
								//dwValue 为丢弃的帧编号；
								//pValueEx = NULL。

	eEncStatusResetBitrate,		//因为上传缓慢，自动重设了视频的输出码率
								//dwValue 为重设后的码率；
								//pValueEx = NULL。

	eEncStatusResetPreset,		//因为编码缓慢，自动重设了视频的编码质量(仅对于 x264 编码)
								//dwValue 为重设后的 EVideoPreset；
								//pValueEx = NULL。

};


//回调函数，通知上层调用者当前的编码状态
typedef	VOID	( WINAPI* fnEncodeStatusCallBack )( EEncodeStatus	eStatus,		//状态
													DWORD			dwValue,		//值（如果状态没有值，则为0）
													LPVOID			pValueEx,		//
													LPVOID			pCbUserParam	//用户参数，把调用者通过 GvStartEncode 函数设置的 pCbUserParam 原样返回。
													);

#endif