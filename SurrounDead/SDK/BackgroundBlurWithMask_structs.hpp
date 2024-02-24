#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMaskTextureChannel : uint8
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	EMaskTextureChannel_MAX        = 4,
};

enum class EMaskMaterialRedrawMethod : uint8
{
	RedrawEveryFrame               = 0,
	RedrawBlueprint                = 1,
	EMaskMaterialRedrawMethod_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct BackgroundBlurWithMask.MaskMaterialSetting
struct FMaskMaterialSetting
{
public:
	class UMaterialInterface*                    MaskMaterial;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ToTextureSize;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaskMaterialRedrawMethod         RedrawMethod;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D43[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


