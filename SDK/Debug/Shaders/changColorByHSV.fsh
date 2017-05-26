uniform	bool		IsFixedHue;	//固定色相，着色，单色。
uniform	float		Hue;		//色相：-1~1
uniform	float		Saturation;	//饱和度：-1~1
uniform	float		Lighteness;	//亮度：-1~1
uniform	float		Contrast;	//对比度：-1~1
vec4	vColorRGBA;

void ChangByHSV()
{
	float	h, s, v, vmin, diff;
	float	f, p, q, t;
        if ( IsFixedHue || Hue != 0.0 || Saturation != 0.0 || Lighteness != 0.0 || Contrast != 0.0 )
	{
		v		= max( vColorRGBA.r, max( vColorRGBA.g, vColorRGBA.b ) );
		vmin	= min( vColorRGBA.r, min( vColorRGBA.g, vColorRGBA.b ) );
		diff	= v - vmin;
		h		= 0.0;
		if ( diff == 0.0 )
		{
			s		= 0.0;
		}
		else
		{
			s		= diff / v;
                        if ( !IsFixedHue )
			{
				if ( v == vColorRGBA.r )
					h	= ( vColorRGBA.g - vColorRGBA.b ) / diff;
				else if ( v == vColorRGBA.g )
					h	= ( vColorRGBA.b - vColorRGBA.r ) / diff + 2.0;
				else
					h	= ( vColorRGBA.r - vColorRGBA.g ) / diff + 4.0;
			}
		}
                h	+= Hue * 3.0;
		if ( h < 0.0 )	h	+= 6.0;
		if ( h > 6.0 )	h	-= 6.0;
		
                v	+= ( v - 0.5 ) * Contrast;
                v	+= Lighteness * v;
		if ( v < 0.0 ) v = 0.0; else if ( v > 1.0 ) v = 1.0;
		
                s	+= Saturation * s;
                if ( Contrast < 0.0 ) s	+= Contrast * s;

		if ( h == 6.0 )	h	= 0.0;
		f	= h - floor(h);
		p	= v * ( 1.0 - s );
		q	= v * ( 1.0 - f * s );
		t	= v * ( 1.0 - ( 1.0 - f ) * s );

		if ( h < 1.0 )
		{
			vColorRGBA.r	= v;
			vColorRGBA.g	= t;
			vColorRGBA.b	= p;
		}
		else if ( h < 2.0 )
		{
			vColorRGBA.r	= q;
			vColorRGBA.g	= v;
			vColorRGBA.b	= p;
		}
		else if ( h < 3.0 )
		{
			vColorRGBA.r	= p;
			vColorRGBA.g	= v;
			vColorRGBA.b	= t;
		}
		else if ( h < 4.0 )
		{
			vColorRGBA.r	= p;
			vColorRGBA.g	= q;
			vColorRGBA.b	= v;
		}
		else if ( h < 5.0 )
		{
			vColorRGBA.r	= t;
			vColorRGBA.g	= p;
			vColorRGBA.b	= v;
		}
		else if ( h < 6.0 )
		{
			vColorRGBA.r	= v;
			vColorRGBA.g	= p;
			vColorRGBA.b	= q;
		}
	}
}
