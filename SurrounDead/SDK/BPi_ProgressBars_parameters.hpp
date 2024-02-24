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
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSeparationSteps
struct IBPi_ProgressBars_C_PB_GetSeparationSteps_Params
{
public:
	int32                                        Steps;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_RemoveEffect
struct IBPi_ProgressBars_C_PB_RemoveEffect_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_AddEffect
struct IBPi_ProgressBars_C_PB_AddEffect_Params
{
public:
	struct FS_Effects                            Effect;                                            // 0x0(0x81)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x88(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetAllEffectsEnabled
struct IBPi_ProgressBars_C_PB_SetAllEffectsEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffectEnabled
struct IBPi_ProgressBars_C_PB_SetEffectEnabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetEffects
struct IBPi_ProgressBars_C_PB_GetEffects_Params
{
public:
	TArray<struct FS_Effects>                    Effects;                                           // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffects
struct IBPi_ProgressBars_C_PB_SetEffects_Params
{
public:
	TArray<struct FS_Effects>                    Effects;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationAbsoluteFill
struct IBPi_ProgressBars_C_PB_SetSeparationAbsoluteFill_Params
{
public:
	bool                                         AbsoluteFillMethod;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationStepsSpacing
struct IBPi_ProgressBars_C_PB_SetSeparationStepsSpacing_Params
{
public:
	double                                       Spacing;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationSteps
struct IBPi_ProgressBars_C_PB_SetSeparationSteps_Params
{
public:
	int32                                        Steps;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeMaskType
struct IBPi_ProgressBars_C_PB_SetCustomMarqueeMaskType_Params
{
public:
	enum class EMarqueeMask                      MaskType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetMarqueeImage
struct IBPi_ProgressBars_C_PB_SetMarqueeImage_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeImage
struct IBPi_ProgressBars_C_PB_SetCustomMarqueeImage_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsMarquee
struct IBPi_ProgressBars_C_PB_GetIsMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsMarquee
struct IBPi_ProgressBars_C_PB_SetIsMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsCustomMarquee
struct IBPi_ProgressBars_C_PB_GetIsCustomMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsCustomMarquee
struct IBPi_ProgressBars_C_PB_SetIsCustomMarquee_Params
{
public:
	bool                                         IsMarquee;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillFromCenterSpacing
struct IBPi_ProgressBars_C_PB_SetFillFromCenterSpacing_Params
{
public:
	double                                       Spacing;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillType
struct IBPi_ProgressBars_C_PB_SetFillType_Params
{
public:
	enum class EProgressBarFillType              FillType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBlendMask
struct IBPi_ProgressBars_C_PB_SetBlendMask_Params
{
public:
	class UTexture2D*                            BlendMask;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientType
struct IBPi_ProgressBars_C_PB_SetFillColorGradientType_Params
{
public:
	enum class EGradientTypes                    GradientType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBlurStrength
struct IBPi_ProgressBars_C_PB_SetBackgroundBlurStrength_Params
{
public:
	double                                       BlurStrength;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBrushTiling
struct IBPi_ProgressBars_C_PB_SetBackgroundBrushTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColorMask
struct IBPi_ProgressBars_C_PB_SetBackgroundColorMask_Params
{
public:
	class UTexture2D*                            Mask;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorMask
struct IBPi_ProgressBars_C_PB_SetFillColorMask_Params
{
public:
	class UObject*                               Mask;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorBrushTiling
struct IBPi_ProgressBars_C_PB_SetFillColorBrushTiling_Params
{
public:
	enum class ESlateBrushTileType               Tiling;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientPower
struct IBPi_ProgressBars_C_PB_SetFillColorGradientPower_Params
{
public:
	double                                       GradientPower;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetBackgroundColor
struct IBPi_ProgressBars_C_PB_GetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColor
struct IBPi_ProgressBars_C_PB_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseGradientFillColor
struct IBPi_ProgressBars_C_PB_GetUseGradientFillColor_Params
{
public:
	bool                                         UseGradientFillColor;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseGradientFillColor
struct IBPi_ProgressBars_C_PB_SetUseGradientFillColor_Params
{
public:
	bool                                         UseGradientFillColor;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Negative
struct IBPi_ProgressBars_C_PB_GetTargetFillColor_Negative_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Positive
struct IBPi_ProgressBars_C_PB_GetTargetFillColor_Positive_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Negative
struct IBPi_ProgressBars_C_PB_SetTargetFillColor_Negative_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Positive
struct IBPi_ProgressBars_C_PB_SetTargetFillColor_Positive_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeTarget
struct IBPi_ProgressBars_C_PB_GetInterpTimeTarget_Params
{
public:
	double                                       TargetInterpTime;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeTarget
struct IBPi_ProgressBars_C_PB_SetInterpTimeTarget_Params
{
public:
	double                                       TargetInterpTime;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeCurrent
struct IBPi_ProgressBars_C_PB_GetInterpTimeCurrent_Params
{
public:
	double                                       CurrentInterpTime;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeCurrent
struct IBPi_ProgressBars_C_PB_SetInterpTimeCurrent_Params
{
public:
	double                                       CurrentInterpTime;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetProgressMethod
struct IBPi_ProgressBars_C_PB_GetProgressMethod_Params
{
public:
	enum class EProgressMethod                   EProgressMethod;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetProgressMethod
struct IBPi_ProgressBars_C_PB_SetProgressMethod_Params
{
public:
	enum class EProgressMethod                   EProgressMethod;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseTargetPercent
struct IBPi_ProgressBars_C_PB_GetUseTargetPercent_Params
{
public:
	bool                                         UseTargetPercent;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseTargetPercent
struct IBPi_ProgressBars_C_PB_SetUseTargetPercent_Params
{
public:
	bool                                         UseTargetPercent;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetThickness
struct IBPi_ProgressBars_C_PB_GetThickness_Params
{
public:
	double                                       Thickness;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetThickness
struct IBPi_ProgressBars_C_PB_SetThickness_Params
{
public:
	double                                       Thickness;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetPercent
struct IBPi_ProgressBars_C_PB_GetTargetPercent_Params
{
public:
	double                                       TargetPercent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetPercent
struct IBPi_ProgressBars_C_PB_SetTargetPercent_Params
{
public:
	double                                       TargetPercent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetFillColor
struct IBPi_ProgressBars_C_PB_GetFillColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColor
struct IBPi_ProgressBars_C_PB_SetFillColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetPercent
struct IBPi_ProgressBars_C_PB_GetPercent_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetPercent
struct IBPi_ProgressBars_C_PB_SetPercent_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSize
struct IBPi_ProgressBars_C_PB_GetSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSize
struct IBPi_ProgressBars_C_PB_SetSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


