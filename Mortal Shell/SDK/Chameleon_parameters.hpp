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

// 0x20 (0x20 - 0x0)
// Function Chameleon.Chameleon_C.Create Effect Material Instance
struct AChameleon_C_Create_Effect_Material_Instance_Params
{
public:
	class UMaterial*                             Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Instance;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Mojo Func
struct AChameleon_C_Mojo_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Pyramid Func
struct AChameleon_C_Pyramid_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D6E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Zone Func
struct AChameleon_C_Zone_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Lens Func
struct AChameleon_C_Lens_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Grid Cell Func
struct AChameleon_C_Grid_Cell_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Haunted Func
struct AChameleon_C_Haunted_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Chameleon.Chameleon_C.Screen Fire Func
struct AChameleon_C_Screen_Fire_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Selective Color Func
struct AChameleon_C_Selective_Color_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function Chameleon.Chameleon_C.Melted World Func
struct AChameleon_C_Melted_World_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E09[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Hazy Lights Func
struct AChameleon_C_Hazy_Lights_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function Chameleon.Chameleon_C.Disco Ball Func
struct AChameleon_C_Disco_Ball_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E46[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Camera Shake Func
struct AChameleon_C_Camera_Shake_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Colored AO Func
struct AChameleon_C_Colored_AO_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Infected Func
struct AChameleon_C_Infected_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function Chameleon.Chameleon_C.Actor Featurette Func
struct AChameleon_C_Actor_Featurette_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EBE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)
struct AChameleon_C_Set_Advanced_Effect_Features__No_Custom_Depth__Params
{
public:
	struct FAdvancedEffectFeaturesNoCustomDepth  Features;                                          // 0x0(0x2C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F1D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Dynamic_Material_Instance;                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function Chameleon.Chameleon_C.Set Advanced Effect Features
struct AChameleon_C_Set_Advanced_Effect_Features_Params
{
public:
	struct FAdvancedEffectFeatures               Features;                                          // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Dynamic_Material_Instance;                         // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue_1;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue_2;           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Wired Func
struct AChameleon_C_Wired_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Sketch Func
struct AChameleon_C_Sketch_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Alarm Func
struct AChameleon_C_Alarm_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function Chameleon.Chameleon_C.Digitize Func
struct AChameleon_C_Digitize_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1009[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Chameleon.Chameleon_C.World Glitch Func
struct AChameleon_C_World_Glitch_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_102F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.World Splash Func
struct AChameleon_C_World_Splash_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Snow Func
struct AChameleon_C_Snow_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function Chameleon.Chameleon_C.Letterboxing Func
struct AChameleon_C_Letterboxing_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_107C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue_1;           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Kaleidescope Func
struct AChameleon_C_Kaleidescope_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.2D Transform Func
struct AChameleon_C_TwoD_Transform_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Chameleon.Chameleon_C.SetEffectPriority
struct AChameleon_C_SetEffectPriority_Params
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func
struct AChameleon_C_Custom_Depth_Highlighter__NC__Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Custom Depth Highlighter Func
struct AChameleon_C_Custom_Depth_Highlighter_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Neon Func
struct AChameleon_C_Neon_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Frost Func
struct AChameleon_C_Frost_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func
struct AChameleon_C_Anamorphic_Lens_Flares_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Toon Shading Func
struct AChameleon_C_Toon_Shading_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1191[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Sharpen Func
struct AChameleon_C_Sharpen_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Screen Decals Func
struct AChameleon_C_Screen_Decals_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Screen Damage Func
struct AChameleon_C_Screen_Damage_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Magic Transitions Func
struct AChameleon_C_Magic_Transitions_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function Chameleon.Chameleon_C.Drawing Func
struct AChameleon_C_Drawing_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Distance Distortion Func
struct AChameleon_C_Distance_Distortion_Func_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Sonar Func
struct AChameleon_C_Sonar_Func_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Circles Func
struct AChameleon_C_Circles_Func_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function Chameleon.Chameleon_C.LOOK Func
struct AChameleon_C_LOOK_Func_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1251[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLOOKCGStruct                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.TV Noise Func
struct AChameleon_C_TV_Noise_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Tiles Func
struct AChameleon_C_Tiles_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Squares Func
struct AChameleon_C_Squares_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Pulse Func
struct AChameleon_C_Pulse_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Kuwahara Func
struct AChameleon_C_Kuwahara_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_129D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Iridescent Func
struct AChameleon_C_Iridescent_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Invert Func
struct AChameleon_C_Invert_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Hard Emboss Func
struct AChameleon_C_Hard_Emboss_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Emboss Func
struct AChameleon_C_Emboss_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Edge Detect Func
struct AChameleon_C_Edge_Detect_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.ASCII Func
struct AChameleon_C_ASCII_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Bleach Func
struct AChameleon_C_Bleach_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Scratches Func
struct AChameleon_C_Scratches_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Distance Fog Func
struct AChameleon_C_Distance_Fog_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Screen Waves Func
struct AChameleon_C_Screen_Waves_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Chameleon.Chameleon_C.Radial Blur Func
struct AChameleon_C_Radial_Blur_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1365[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Monochrome Func
struct AChameleon_C_Monochrome_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Hue Panner Func
struct AChameleon_C_Hue_Panner_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.MonitorFX Func
struct AChameleon_C_MonitorFX_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Glitch Func
struct AChameleon_C_Glitch_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Comic Func
struct AChameleon_C_Comic_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_141B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Colorize Func
struct AChameleon_C_Colorize_Func_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.Blur Func
struct AChameleon_C_Blur_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1455[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Pixel Dissolve Func
struct AChameleon_C_Pixel_Dissolve_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Drug Func
struct AChameleon_C_Drug_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Alcohol Func
struct AChameleon_C_Alcohol_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Mosaic Func
struct AChameleon_C_Mosaic_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Screen Drops Func
struct AChameleon_C_Screen_Drops_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Chameleon.Chameleon_C.Channel Swapper Func
struct AChameleon_C_Channel_Swapper_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1500[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_ByteToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_ByteToFloat_ReturnValue_1;           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_ByteToFloat_ReturnValue_2;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Chameleon.Chameleon_C.Channel Clamper Func
struct AChameleon_C_Channel_Clamper_Func_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap
struct AChameleon_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Chameleon.Chameleon_C.ReceiveTick
struct AChameleon_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon
struct AChameleon_C_ExecuteUbergraph_Chameleon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1566[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OtherActor;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


