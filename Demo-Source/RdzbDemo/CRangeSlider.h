#ifndef RANGESLIDER_H
#define RANGESLIDER_H

#include <QWidget>

class CRangeSlider : public QWidget
{
	Q_OBJECT

public:
	CRangeSlider(QWidget *parent);
	~CRangeSlider();

	void SetRange( double fMin, double fMax );
	void GetRange( double* pMin, double* pMax );

	void SetArea( double fAreaMin, double fAreaMax );
	double GetAreaMin() { return m_fAreaMin; }
	double GetAreaMax() { return m_fAreaMax; };
	void SetValue( double fValue );
	double GetValue() { return m_fValue; }


	enum	EDrawAlign
	{
		eAlignNone,		//不绘制
		eAlignFar,
		eAlignNear,
		eAlignCenter
	};

	enum	ETextFormat
	{
		eTextFloat,		//浮点数
		eTextPercent,	//百分数
		eTextHMS,		//时 分 秒，值表示为秒。
		eTextHMSAuto,	//如果不足一小时，就不显示小时
	};

	struct	STextStyle
	{
		QColor		coText;		//文字颜色
		EDrawAlign	eAlign;		//对齐方式
		int			iSpace;
	};

	struct	SStyle
	{
		int		iBorderLineWidth;	//边框线的宽度
		ETextFormat	eFormat;
		int			iPrecision;	//小数位数
		QColor	coBorderLine;
		QColor	coBackgroup;
		QColor	coAreaBar;
		QColor	coValue;

		bool	bHitMinSpace;		//区域小值与控件边缘之间的空白区，鼠标按下把小值线移动到鼠标位置。
		bool	bHitMaxSpace;		//区域大值与控件边缘之间的空白区，鼠标按下把大值线移动到鼠标位置。
		bool	bHitMinLine;		//区域小值线，鼠标按下拖动。
		bool	bHitMaxLine;		//区域大值线，鼠标按下拖动。
		bool	bHitAreaBar;		//区域滑块，鼠标按下拖动。
		bool	bHitValue;			//值，在区域范围内，如果 bHitAreaBar == false，则鼠标按下设置值，否则只有在值的端点上按下移动。

		bool	bTextAlignBar;		// false 值的文本以值本身的绘制范围对齐，true 以整个滑块对齐。
		bool	bIsSpaceValue;		// false 绘制的值是值本身，true 空白区域表示的范围大小。
		STextStyle	sMinText;		// far 空白区域靠近控件边缘， near 靠近区域边线，center 空白区域中间。
		STextStyle	sMaxText;
		STextStyle	sAreaText;

		bool	bDrawValueBar;			// 是否绘制滑块
		STextStyle	sValueText;
		STextStyle	sValueTextSub;
	};

	enum	EHit
	{
		eHit_None,
		eHit_MinSpace,
		eHit_MaxSpace,
		eHit_MinLine,
		eHit_MaxLine,
		eHit_AreaBar,
		eHit_Value,
		eHit_ValueArea,
	};

	enum	EDispMode
	{
		eDispBoth,
		eDispArea,
		eDispValue,
	};
	void SetStyle( const SStyle& sStyle );
	const SStyle& GetStyle(){ return m_sStyle; }
	void SetDispMode( EDispMode eMode );
	EDispMode GetDispMode() { return m_eDisp; }
signals:
	void areaChanged( double fMin, double fMax );
	void valueChanged( double fValue );
private:
	virtual void	mouseMoveEvent ( QMouseEvent * event );
	virtual void	mousePressEvent ( QMouseEvent * event );
	virtual void	mouseReleaseEvent ( QMouseEvent * event );
	virtual void	paintEvent ( QPaintEvent * event );
	virtual void	resizeEvent ( QResizeEvent * event );
	void CalcPos( bool bRepaint = false, int iWidth = 0, int iHeight = 0 );
	void CalcHit( int x, int y );
	void CalcText( QString& szOutStr, double fValue );
	QColor CalcColor( const QColor& color );

	double	m_fMax;
	double	m_fMin;
	double	m_fAreaMin;
	double	m_fAreaMax;
	double	m_fValue;

	EHit	m_eHit;
	SStyle	m_sStyle;
	EDispMode	m_eDisp;
	int		m_iPrevPos;
	double	m_fPrevVal;
	int		m_iSize;
	////////////////////////////////
	int		m_iMinLine;
	int		m_iMaxLine;
	int		m_iPosValue;
	QRect	m_rtMinText;
	QRect	m_rtMaxText;
	QRect	m_rtArea;
	QRect	m_rtAreaText;
	QRect	m_rtValue;
	QRect	m_rtValueText;
	QRect	m_rtValueTextSub;
	QString	m_szMinText;
	QString	m_szMaxText;
	QString	m_szAreaText;
	QString	m_szValueText;
	QString	m_szValueTextSub;
};

#endif // RANGESLIDER_H
