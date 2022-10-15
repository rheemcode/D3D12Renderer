#pragma once
#include "framework.h"

class D3DUtil
{
public:
	static bool IsKeyDown(int vKeyCode);
	static std::string ToString(HRESULT hr);
	static UINT CalcConstantBufferSize(UINT byteSize) { return(byteSize + 255) & ~255; }
	static Microsoft::WRL::ComPtr<ID3D10Blob> LoadBinary(const std::wstring& filename);
};