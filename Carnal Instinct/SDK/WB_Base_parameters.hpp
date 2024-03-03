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

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetSeparationSteps
struct UWB_Base_C_PB_GetSeparationSteps_Params
{
public:
	int32                                        Steps;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function WB_Base.WB_Base_C.PB_AddEffect
struct UWB_Base_C_PB_AddEffect_Params
{
public:
	struct FS_Effects                            Effect;                                            // 0x0(0x69)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetEffects
struct UWB_Base_C_PB_GetEffects_Params
{
public:
	TArray<struct FS_Effects>                    Effects;                                           // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetIsMarquee
struct UWB_Base_C_PB_GetIsMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetIsCustomMarquee
struct UWB_Base_C_PB_GetIsCustomMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetThickness
struct UWB_Base_C_PB_GetThickness_Params
{
public:
	float                                        Thickness;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetBackgroundColor
struct UWB_Base_C_PB_GetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetUseGradientFillColor
struct UWB_Base_C_PB_GetUseGradientFillColor_Params
{
public:
	bool                                         UseGradientFillColor;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Negative
struct UWB_Base_C_PB_GetTargetFillColor_Negative_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Positive
struct UWB_Base_C_PB_GetTargetFillColor_Positive_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetInterpTimeTarget
struct UWB_Base_C_PB_GetInterpTimeTarget_Params
{
public:
	float                                        TargetInterpTime;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetInterpTimeCurrent
struct UWB_Base_C_PB_GetInterpTimeCurrent_Params
{
public:
	float                                        CurrentInterpTime;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetProgressMethod
struct UWB_Base_C_PB_GetProgressMethod_Params
{
public:
	enum class EProgressMethod                   EProgressMethod;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetUseTargetPercent
struct UWB_Base_C_PB_GetUseTargetPercent_Params
{
public:
	bool                                         UseTargetPercent;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetTargetPercent
struct UWB_Base_C_PB_GetTargetPercent_Params
{
public:
	float                                        TargetPercent;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetFillColor
struct UWB_Base_C_PB_GetFillColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetPercent
struct UWB_Base_C_PB_GetPercent_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_GetSize
struct UWB_Base_C_PB_GetSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetSize
struct UWB_Base_C_PB_SetSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetPercent
struct UWB_Base_C_PB_SetPercent_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillColor
struct UWB_Base_C_PB_SetFillColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetTargetPercent
struct UWB_Base_C_PB_SetTargetPercent_Params
{
public:
	float                                        TargetPercent;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetThickness
struct UWB_Base_C_PB_SetThickness_Params
{
public:
	float                                        Thickness;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetUseTargetPercent
struct UWB_Base_C_PB_SetUseTargetPercent_Params
{
public:
	bool                                         UseTargetPercent;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetProgressMethod
struct UWB_Base_C_PB_SetProgressMethod_Params
{
public:
	enum class EProgressMethod                   EProgressMethod;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetInterpTimeCurrent
struct UWB_Base_C_PB_SetInterpTimeCurrent_Params
{
public:
	float                                        CurrentInterpTime;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetInterpTimeTarget
struct UWB_Base_C_PB_SetInterpTimeTarget_Params
{
public:
	float                                        TargetInterpTime;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Positive
struct UWB_Base_C_PB_SetTargetFillColor_Positive_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Negative
struct UWB_Base_C_PB_SetTargetFillColor_Negative_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetUseGradientFillColor
struct UWB_Base_C_PB_SetUseGradientFillColor_Params
{
public:
	bool                                         UseGradientFillColor;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetBackgroundColor
struct UWB_Base_C_PB_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillColorGradientPower
struct UWB_Base_C_PB_SetFillColorGradientPower_Params
{
public:
	float                                        GradientPower;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillColorBrushTiling
struct UWB_Base_C_PB_SetFillColorBrushTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillColorMask
struct UWB_Base_C_PB_SetFillColorMask_Params
{
public:
	class UObject*                               Mask;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetBackgroundColorMask
struct UWB_Base_C_PB_SetBackgroundColorMask_Params
{
public:
	class UTexture2D*                            Mask;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetBackgroundBrushTiling
struct UWB_Base_C_PB_SetBackgroundBrushTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetBackgroundBlurStrength
struct UWB_Base_C_PB_SetBackgroundBlurStrength_Params
{
public:
	float                                        BlurStrength;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillColorGradientType
struct UWB_Base_C_PB_SetFillColorGradientType_Params
{
public:
	enum class EGradientTypes                    GradientType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetBlendMask
struct UWB_Base_C_PB_SetBlendMask_Params
{
public:
	class UTexture2D*                            BlendMask;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillType
struct UWB_Base_C_PB_SetFillType_Params
{
public:
	enum class EProgressBarFillType              FillType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetFillFromCenterSpacing
struct UWB_Base_C_PB_SetFillFromCenterSpacing_Params
{
public:
	float                                        Spacing;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetIsCustomMarquee
struct UWB_Base_C_PB_SetIsCustomMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetIsMarquee
struct UWB_Base_C_PB_SetIsMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeImage
struct UWB_Base_C_PB_SetCustomMarqueeImage_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetMarqueeImage
struct UWB_Base_C_PB_SetMarqueeImage_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeMaskType
struct UWB_Base_C_PB_SetCustomMarqueeMaskType_Params
{
public:
	enum class EMarqueeMask                      MaskType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetSeparationSteps
struct UWB_Base_C_PB_SetSeparationSteps_Params
{
public:
	int32                                        Steps;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetSeparationStepsSpacing
struct UWB_Base_C_PB_SetSeparationStepsSpacing_Params
{
public:
	float                                        Spacing;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetSeparationAbsoluteFill
struct UWB_Base_C_PB_SetSeparationAbsoluteFill_Params
{
public:
	bool                                         AbsoluteFillMethod;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetEffects
struct UWB_Base_C_PB_SetEffects_Params
{
public:
	TArray<struct FS_Effects>                    Effects;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x5 (0x5 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetEffectEnabled
struct UWB_Base_C_PB_SetEffectEnabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WB_Base.WB_Base_C.PB_SetAllEffectsEnabled
struct UWB_Base_C_PB_SetAllEffectsEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function WB_Base.WB_Base_C.PB_RemoveEffect
struct UWB_Base_C_PB_RemoveEffect_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE6 (0xE6 - 0x0)
// Function WB_Base.WB_Base_C.ExecuteUbergraph_WB_Base
struct UWB_Base_C_ExecuteUbergraph_WB_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Event_Size;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Value;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_3;                              // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_TargetPercent;                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Thickness;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_UseTargetPercent;                     // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EProgressMethod                   K2Node_Event_EProgressMethod;                      // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_CurrentInterpTime;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_TargetInterpTime;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_2;                              // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Color_1;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_UseGradientFillColor;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_Color;                                // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_GradientPower;                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_Event_Tiling_1;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_Mask_1;                               // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Event_Mask;                                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushTileType               K2Node_Event_Tiling;                               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_BlurStrength;                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGradientTypes                    K2Node_Event_GradientType;                         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Event_BlendMask;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              K2Node_Event_FillType;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Spacing_1;                            // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsMarquee_1;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsMarquee;                            // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_280A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Event_Image_1;                              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Event_Image;                                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMarqueeMask                      K2Node_Event_MaskType;                             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2816[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Steps;                                // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Spacing;                              // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AbsoluteFillMethod;                   // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_282E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Effects>                    K2Node_Event_Effects;                              // 0xD0(0x10)(ConstParm, ReferenceParm)
	int32                                        K2Node_Event_Index_1;                              // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsEnabled_1;                          // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsEnabled;                            // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


