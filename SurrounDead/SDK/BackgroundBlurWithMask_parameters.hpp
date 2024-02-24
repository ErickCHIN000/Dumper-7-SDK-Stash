#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetVerticalAlignment
struct UBackgroundBlurWithMask_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetUseMaskMaterial
struct UBackgroundBlurWithMask_SetUseMaskMaterial_Params
{
public:
	bool                                         bInUseMaskMaterial;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetPadding
struct UBackgroundBlurWithMask_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTextureChannel
struct UBackgroundBlurWithMask_SetMaskTextureChannel_Params
{
public:
	enum class EMaskTextureChannel               InMaskTextureChannel;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTexture
struct UBackgroundBlurWithMask_SetMaskTexture_Params
{
public:
	class UTexture2D*                            InMaskTexture;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskMaterialSetting
struct UBackgroundBlurWithMask_SetMaskMaterialSetting_Params
{
public:
	struct FMaskMaterialSetting                  InMaskMaterialSetting;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetLowQualityFallbackBrush
struct UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetHorizontalAlignment
struct UBackgroundBlurWithMask_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurStrength
struct UBackgroundBlurWithMask_SetBlurStrength_Params
{
public:
	float                                        InStrength;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurRadius
struct UBackgroundBlurWithMask_SetBlurRadius_Params
{
public:
	int32                                        InBlurRadius;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetApplyAlphaToBlur
struct UBackgroundBlurWithMask_SetApplyAlphaToBlur_Params
{
public:
	bool                                         bInApplyAlphaToBlur;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMask.GetMaskTextureInUse
struct UBackgroundBlurWithMask_GetMaskTextureInUse_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetVerticalAlignment
struct UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetPadding
struct UBackgroundBlurWithMaskSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetHorizontalAlignment
struct UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


