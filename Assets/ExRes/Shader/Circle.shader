// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/Circle"
{
	Properties
	{
		_StencilComp("Stencil Comparison", Float) = 8
		_Stencil("Stencil ID", Float) = 0
		_StencilOp("Stencil Operation", Float) = 0
		_StencilWriteMask("Stencil Write Mask", Float) = 255
		_StencilReadMask("Stencil Read Mask", Float) = 255
		_ColorMask("Color Mask", Float) = 15

		_Color("First Color", Color) = (1,1,1,1)
		_Radius("is Vertical", Float) = 0.5
	}

		SubShader
	{
		Pass
	{
		Blend SrcAlpha OneMinusSrcAlpha

		CGPROGRAM
#pragma vertex vert
#pragma fragment frag

		struct vertexIn {
		float4 pos : POSITION;
		float2 uv : TEXCOORD0;
	};

	struct v2f {
		float4 pos : SV_POSITION;
		float2 uv : TEXCOORD0;
	};

	v2f vert(vertexIn input)
	{
		v2f output;
		output.pos = UnityObjectToClipPos(input.pos);
		output.uv = input.uv;

		return output;
	}

	fixed4 _Color;
	fixed _Radius;

	fixed4 frag(v2f input) : COLOR
	{
		fixed2 mag = fixed2(0.5f - input.uv.x, 0.5f - input.uv.y);
		
		return ((mag.x * mag.x + mag.y * mag.y) <= (_Radius * _Radius)) ? _Color : fixed4(0,0,0,0);
	}

		ENDCG
	}
	}
}
