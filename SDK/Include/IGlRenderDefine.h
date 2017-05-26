#ifndef	_GLRENDER_DEFINE_HEAD_
#define	_GLRENDER_DEFINE_HEAD_

class	IGlRender;
class	IPinInput;
class	IScene;
typedef	VOID		( WINAPI *fnPreviewImageCB ) ( INT iWidth, INT iHeight, LPBYTE pImageBuffer, LPVOID pCbParam );
typedef	VOID		( WINAPI *fnFrameImageCB ) ( INT64 iPts, INT iWidth, INT iHeight, LPBYTE pImageBuffer, LPVOID pCbParam );
typedef	DWORD_PTR	HSCENE;
typedef	DWORD_PTR	HCHIP;
enum	IRender_ENotify		//pScene						//iValue
{
	eNotify_None,
	//预览画面中的添加场景按钮被点击。得到此通知，上层如果不调用添加场景的接口，就不会添加场景。
	eNotify_SceneAdding,	//NULL							//已有场景的数量
	//添加了一个场景。
	eNotify_SceneAdded,		//添加的场景					//是否影响到了预览布局(0=无影响, 其它值表示布局改变)
	//预览画面中的删除场景按钮被点击。得到此通知，上层如果不调用删除场景的接口，就不会删除场景。
	eNotify_SceneDeleting,	//将要删除的场景
	//删除了一个场景。
	eNotify_SceneDeleted,	//删除的场景					//是否影响到了预览布局(0=无影响, 其它值表示布局改变)
	//切换了场景，选中了一个场景作为当前场景。
	eNotify_SceneSwitched,	//当前选中的场景，如果为 NULL，则当前没有任何场景被选中
	//场景的名字发生了改变
	eNotify_SceneNamed,		//名字发生改变的场景
	//拖动了后台场景预览区域的滚动条，或者滚动条的值范围发生了改变。
	eNotify_SceneScroll,	//后台场景区域当前第一个场景	//LOWORD=滚动条的最大值，HIWORD=滚动条的当前值

	//在预览画面上按下了鼠标右键，上层酌情处理，例如弹出右键菜单。
	eNotify_RBDownCScene,	//当前场景						//鼠标所在的元件的Index，-1表示没在任何元件上。
	eNotify_RBDownBScene,	//鼠标所在的场景，NULL 表示没在任何场景上。
	eNotify_RBUpCScene,
	eNotify_RBUpBScene,

	//对元件进行的操作。上层可以在得到通知时更新界面上的相关状态。
	eNotify_ChipAdding,		//将要添加元件的场景			//场景中已有元件的数量
	eNotify_ChipAdded,		//添加元件的场景				//添加的元件的Index
	eNotify_ChipDeleting,	//将要删除元件的场景			//将要删除的元件的Index
	eNotify_ChipDeleted,	//删除元件的场景				//被删除的元件的Index
	//场景中的元件位置或大小正在被用户改变(鼠标操作)。
	eNotify_ChipPosing,		//当前场景						//被操作的元件的Index
	//场景中的元件位置或大小被用户改变完成(用户结束了操作)。
	eNotify_ChipPosed,		//当前场景						//被操作的元件的Index
	//场景中的元件正在被用户旋转(鼠标操作)。
	eNotify_ChipRotating,	//当前场景						//被操作的元件的Index
	//场景中的元件被用户旋转完成(用户结束了操作)。
	eNotify_ChipRotated,	//当前场景						//被操作的元件的Index
	//切换了场景中当前选中的元件
	eNotify_ChipSwitched,	//元件所属的场景				//低16位，SHORT=当前选中的Index，高16位，SHORT=上次选中的Index
	//场景中的元件的顺序发生了改变。
	eNotify_ChipIndexChg,	//元件所属的场景				//低16位，SHORT=原来的Index，高16位，SHORT=被插入到的Index
	//元件的状态发生改变。
	eNotify_ChipStatus,		//元件所属的场景				//状态发生改变的元件的Index
	//元件的可见状态发生改变
	eNotify_ChipVisible,	//元件所属的场景				//发生改变的元件的Index
	//元件的位置、大小、角度锁定状态发生改变
	eNotify_ChipViewLock,	//元件所属的场景				//发生改变的元件的Index
	//元件的源的分辨率发生改变。
	eNotify_ChipSourceSize,	//元件所属的场景				//源分辨率发生改变的元件的Index

	//其它的通知
	eNotify_CameraDevChanged,//NULL，						//当前摄像头的数量
	eNotify_GameListChanged, //NULL,						//当前的游戏数量
	eNotify_AudioDevChanged,
	eNotify_AudioImmVolume,

	eNotify_Count
};
typedef	VOID		( WINAPI *fnRenderNotifyCB ) ( IRender_ENotify eNotify, HSCENE hScene, INT iValue, LPVOID pCbParam );

enum	IPinInput_EClass
{
	ePinInput_Unknow,
	ePinInput_Picture,
	ePinInput_Camera,
	ePinInput_Screen,
	ePinInput_Flash,
	ePinInput_Movie,
	ePinInput_Game,
	ePinInput_Text,

	ePinInput_ClassCount
};

enum	IPinInput_EChipStatus
{
	ePin_None,		//没有设置源
	ePin_Error,		//源错误

	ePin_Closed,	//已经关闭
	ePin_Opened,	//源打开完成
	ePin_Stoped,	//源已经停止
	ePin_Paused,	//已经暂停
	ePin_Played,	//正在播放

	ePin_Closing,	//正在关闭
	ePin_Opening,	//正在打开
	ePin_Stoping,	//正在停止
	ePin_Pausing,	//正在暂停
	ePin_Loading,	//正在载入，仅当播放过程中需要加载数据时。
};

//输入源的特性，固有特性，由程序内部设置
struct IPinInput_SCharacteristics
{
	bool	bExistImage;		//是否存在静止图像
	bool	bExistMovie;		//是否存在运动图像
	bool	bExistSound;		//是否存在声音

	bool	bTunableVolume;		//是否允许控制音量
	bool	bTunableMute;		//是否允许静音
	bool	bTunableMixer;		//是否允许软件混音

	bool	bTunablePause;		//是否允许暂停
	bool	bTunableStop;		//是否允许停止
	bool	bTunableSeek;		//是否允许重置播放位置
	bool	bTunableReuse;		//是否允许复用，即多个输入使用同一个源（例如在线视频，只需一次解码）。
	bool	bExclusiveMode ;	//源是否只能是独占模式，例如游戏截图，只允许打开一次，不能多次打开，但可以复用。
	bool	bTunableInteract;	//是否允许与用户交互，例如 Flash 动画。

	bool	bDefaultLockRatio;	//源是否默认锁定长宽比
	bool	bTurnUpDown;		//源本身上下翻转，显示时需要翻转。
	bool	bTurnLeftRight;		//源本身左右翻转
	bool	bDoNotNeedAlpha;	//图像不需要有 Alpha 通道。例如摄像头、屏幕截图，即使数据中有，也不应该使用。
};
//输入源的当前状态
struct	IPinInput_SStatusInfo
{
	IPinInput_EChipStatus	eStatus;	//当前状态

	bool	bCannotReuse;	//不允许复用，这是由用户设置的。
	bool	bIsMute;		//是否是静音状态
	bool	bIsMixer;		//是否是软件混音
	bool	bIsInteract;	//是否正在用户交互

	bool	bIsLoop;		//是否是循环播放状态
	bool	bIsRange;		//是否是仅播放指定时间范围
	bool	bRangIsFrame;	//指定的播放范围是否是按帧计算，false=按秒计算，true=按帧计算

	INT64	iFrameCount;	//总的帧数
	FLOAT	fFrameRate;		//帧率
	double	fSecondCount;	//总的秒数
	INT64	iFramePlay;		//当前正在播放的帧
	double	fSecondPlay;	//当前正在播放的时间
	FLOAT	fVolume;		//当前音量 0～1

	INT64	iFrameStart;	//设置的播放区域的开始帧(播放范围包含开始帧)
	INT64	iFrameEnd;		//设置的播放区域的结束帧(播放范围包含结束帧)
	double	fSecondStart;	//设置的播放区域的开始时间
	double	fSecondEnd;		//设置的播放区域的结束时间
};

//用于设置和计算预览画面区域的结构
//在调用 Scene_SetPreviewLayout 函数时使用。
struct	IGlRender_SPreviewLayout
{
	INT			iVersion;		//(in)	此结构的版本，为了今后可能修改结构，而保持兼容性。当前值为0。
	FLOAT		fScale;			//(in,out)	当前场景预览预览显示时，与原始画面的比例，值为 0 到 1 的浮点数。
								//			当前场景的显示分辨率是视频分辨率与它的乘积。
								//			如果小于等于0，则表示不重新计算程序窗口大小，仅计算预览区域的大小。
								//			输入参数是期待使用的预览比例，返回时被修改为实际可用的预览比例。
	HWND		hMainWnd;		//(in)	程序主界面的窗口句柄，预览画面位于该窗口中。
	HWND		hPreviewWnd;	//(in)	绘制预览画面的子窗口句柄。可以设置为 NULL 或者与 hMainWnd 相同。
								//		当有值时，将会把 OpenGL 的绘图窗口设置为它的子窗口，并忽略 pCbFunction 参数。
								//		当为 NULL 时，将使用 pCbFunction 回调预览画面的图像数据。
	RECT		rtPreview;		//(in,out)	预览画面在窗口客户区的区域。
								//			如果 hPreviewWnd 有值，则该区域是相对于 hPreviewWnd 的区域，否则是相对于 hMainWnd 窗户区的区域。
								//			返回时，如果 fScale 小于等于0，此值修改为实际绘制区域。否则，则修改为新的预览画面所在区域。
								//			当 hPreviewWnd 不为 NULL 时，上层调用者应该把 hPreviewWnd 大小重设使它能包含预览画面的区域。
	SIZE		siMinimumLimit;	//(in)	计算出的预览画面分辨率不得小于这个最小值。		
	fnPreviewImageCB	pCbFunction;	//(in)	如果有值，且 hPreviewWnd 为空，则通过该回调函数传出预览画面的数据，而不是使用 OpenGL 绘制窗口。
	LPVOID				pCbParam;		//(in)	该参数是当调用 pCbFunction 时，原样传出的参数。

	enum	ELocBScene { eUp, eDown, eLeft, eRight };	//枚举：上，下，左，右。
	enum	EReposWnd			//枚举，当主窗口大小需要修改时，以哪种方式作为限制。
	{
		eNotChangePos,			//计算时不要改变主窗口的坐标
		eDesktopCenter,			//计算时，主窗口将位于桌面中心（当多显示器环境时，桌面是指所有的扩展显示器的总和）。
		eScreenCenter,			//计算时，主窗口将位于当前屏幕的中心。
		eDoNotExceedDesktop,	//计算时，只要大小改变后不超过桌面，就不要改变主窗口坐标。否则就移动位置使之在桌面范围内。
		eDoNotExceedScreen,		//计算时，只要大小改变后不超过当前屏幕，就不要改变主窗口坐标。否则就移动位置使之在当前屏幕范围内。
	};
	union UColor
	{
		struct
		{
			BYTE	r;
			BYTE	g;
			BYTE	b;
			BYTE	a;
		};
		BYTE	co[4];
		DWORD	dwColor;
	};

	struct SBorder
	{
		INT			iSize;		//边框线的宽度(粗细)，单位为像素。值为 0 到 32 之间的整数
		INT			iSpacing;	//显示内容与边框线之间的空白区域，单位为像素。值为 0 到 32 之间的整数
		UColor		sFoColor;	//边框的颜色。
		UColor		sFoColor2;	//Preview:	整个预览区域的背景色
								//CurScene:	
								//Chip:		鼠标进入的 CHIP 的边框色
								//BScene:	后台场景区域，当前场景的边框色
								//ScrollBar:滚动条颜色
	};
	EReposWnd	eReposWindow;	//(in)	计算主窗口位置的限制方式。
	BOOL		bOnlyWorkArea;	//(in)	是否以桌面的工作区域（排除任务栏之后的区域）作为限制。
	//计算得到各个新的区域，开发者应该根据新的区域重设窗口。
	RECT		rtMainWindow;	//(out) 计算后得到的主窗口在屏幕上的区域，包含整个主窗口(标题栏、边框)。
	RECT		rtMainClient;	//(out) 计算后得到的主窗口的客户区域在屏幕上的区域，是使用的屏幕坐标，而不是窗口内部的坐标。

	//根据布局参数计算得到新的预览显示区域，以及主窗口大小等。
	SBorder		boPreview;		//(in)	整个预览画面的边框属性
	SBorder		boCurScene;		//(in)	当前场景的边框属性
	SBorder		boCurChip;		//(in)	当前选中的 Chip 的边框属性
	//设置多场景时，后台场景的缩略显示时的布局。
	INT			iBSceneCount;	//(in)	显示后台场景的数量，值为 0 到 32 的整数。例如 4，那么每个后台场景的长和宽都约为主预览画面的 1/4。
								//		如果值为 0，则不显示后台场景，以下有关后台场景的布局参数均会忽略。
	BOOL		bAddSceneBut;	//(in)	显示添加场景的按钮
	BOOL		bSceneName;		//(in)	后台场景上显示场景名
	BOOL		bCurLikeBScene;	//(in)	当前场景像后台场景那样绘制，也就是后台场景列表中也包括当前场景。
	FLOAT		fEnterScale;	//(in)	当鼠标移入后台场景，后台场景缩略显示的放大比例，值为 1.0 到 iBSceneCount - 1 之间的的浮点数。
								//		当鼠标移入的后台场景放大时，其它后台场景相应变小。鼠标移开就恢复正常。
	BOOL		bNoBigCurScene;	//(in)	不要绘制大幅的当前场景。如果设置为TRUE，那么 bCurLikeBScene 也必须是 TRUE，并且 iBSceneCount 不能为0。
	ELocBScene	eLocBScene;		//(in)	后台场景显示在当前场景的上下左右哪个位置。		
	INT			iBSceneSpacing;	//(in)	后台场景之间的间距，单位为像素。值为 0 到 32 之间的整数。
	INT			iCBSpacing;		//(in)	后台场景与当前场景之间预览时的间距，单位为像素。值为 0 到 32 之间的整数。
	SBorder		boBScene;		//(in)	后台场景的边框属性

	INT			iScrollBarSize;	//(in)	场景缩略图滚动条的大小，单位为像素。值为 0 到 32 之间的整数。
								//		当添加的场景过多时，后台场景显示区域不能全部显示，因此需要使用滚动条。
								//		当值为 0 时，则不使用内置的滚动条，开发者也可以在外部界面上调用接口切换当前显示的后台场景。
	INT			iSBSpacing;		//(in)	滚动条与后台场景显示区域的间距，单位为像素。值为 0 到 32 之间的整数。
	SBorder		boScrollBar;	//(in)	滚动条的边框属性
	SBorder		boScrollSlider;	//(in)	滚动条滑块的边框属性

	BOOL		bBSceneHolder;	//(in)	计算时是否必须为后台场景缩略显示保留位置，即使当前只有一个场景。
								//		如果设置为 FALSE，则当只有一个场景时，就只计算主预览画面的大小，作为预览区域的大小。
	BOOL		bScrollHolder;	//(in)	计算时是否必须为滚动条保留位置，即使当前只有一个场景。
								//		如果不会显示后台场景（只有一个场景且不保留位置），那么此值不生效。

};

//屏幕、窗口截取的参数结构
struct	IScreen_SCapParams
{
	WCHAR	szWindow[MAX_PATH];	//窗口标题，可以设置为空字符串。
	HWND	hWindow;			//窗口句柄，如果窗口标题不为空，则忽略该值。
	INT		iScreen;			//屏幕编号(-1表示所有屏幕，其它从0开始)。如果窗口标题或窗口句柄有值，就忽略屏幕编号。
	BOOL	bOnlyClient;		//是否只截取窗口的客户区域，对于屏幕则是指工作区。
	BOOL	bUseInitRect;		//是否使用 rtInit 中指定的区域作为截图区域，不使用则是截取整个的窗口、屏幕等区域。
	RECT	rtInit;				//使用以窗口(或客户区)、屏幕（或工作区）左上角为原点的相对坐标。
};

//设置元件的 RECT 时，更改设置的边界的模式。
enum IChip_EBorderFitMode {
    eIgnoreAspectRatio,			//忽略比例，不修改边界。
    eKeepAspectRatio,			//保持比例，边界按源图像比例缩放到区域之内。
    eKeepAspectRatioByExpanding	//保持比例，边界按源图像比例缩放，布满整个设置区域，因此可能超出原区域。
};
enum IChip_ELockType {
    eLock_AspectRatio,
    eLock_Position,
    eLock_Size,
	eLock_Angle,
};

enum	IChip_EShaderParam
{
	eShader_Hue,			//色相
	eShader_UseFixedHue,	//使用固定的色相，即单色
	eShader_Saturation,		//饱和度
	eShader_Lighteness,		//亮度
	eShader_Contrast,		//对比度
	eShader_Transparency,	//透明度

	eShader_BaseCount
};

//游戏使用的绘图接口
enum	IGame_EInterface
{
	GI_Unknow,				//未知的。未初始化或尚未获得目标程序的绘图接口信息
	GI_GDI,					//GDI，通常不会出现 GDI 类型，如果出现说明由于某些原因当前只能使用 GDI 方式抓取游戏画面。
	GI_OpenGL,				//OpenGL 游戏。
	GI_DirectDraw,			//DirectX 7 及之前的所有 DirectX 版本
	GI_DirectX8,			//DirectX 8
	GI_DirectX9,			//DirectX 9
	GI_DirectX10,			//DirectX 10
	GI_DirectX11			//DirectX 11
};
static const char * const game_interface_names[] = { "Unknow", "GDI", "OpenGL", "DirectDraw", "DirectX8",
													"DirectX9", "DirectX10", "DirectX11", 0 };

//进行游戏画面截取的状态
enum	IGame_ECaptStatus
{
	GC_Idle,				//空闲的，未开始图像捕获。
	GC_Starting,			//正在开始。
	GC_Recording,			//正在捕获。
	GC_Stoping				//正在停止。停止后恢复为 GC_Idle 状态。
};

//游戏进程信息
struct	IGame_SGameInfo
{
	DWORD			dwProcessId;	//游戏进程 ID。
	DWORD			dwParentPID;	//游戏进程的父进程 ID。
	BOOL			bIs64BitProc;	//是否是 64 位的进程	
	HWND			hGameWnd;		//游戏的窗口句柄
	DWORD			dwSessionId;	//游戏进程的 Session ID。
	LPCWSTR			szFilePath;		//游戏进程的完整文件路径
	LPCWSTR			szBaseName;		//游戏进程的文件名
	LPCWSTR			szGameName;		//游戏的名字
	LPCWSTR			szIdentity;		//游戏ID，内部计算的一个字符串，用于识别是不是同一个游戏程序，而不是简单地通过文件名和路径来判断，防止误识别。
	IGame_EInterface	eInterface;		//游戏使用的绘图接口
	IGame_ECaptStatus	eCapture;		//游戏画面截取的状态
	SIZE			sViewSize;		//游戏的画面分辨率
};
#endif