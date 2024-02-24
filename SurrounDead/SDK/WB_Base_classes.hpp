#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C8 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Base.WB_Base_C
class UWB_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWB_Base_C* GetDefaultObj();

	void PB_GetSeparationSteps(int32* Steps);
	void PB_AddEffect(const struct FS_Effects& Effect, int32* Index);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_GetIsCustomMarquee(bool* IsMarquee);
	void PB_GetThickness(double* Thickness);
	void PB_GetBackgroundColor(struct FLinearColor* Color);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_GetInterpTimeTarget(double* TargetInterpTime);
	void PB_GetInterpTimeCurrent(double* CurrentInterpTime);
	void PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod);
	void PB_GetUseTargetPercent(bool* UseTargetPercent);
	void PB_GetTargetPercent(double* TargetPercent);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_GetPercent(double* Percent);
	void PB_GetSize(struct FVector2D* Size);
	void PB_SetSize(const struct FVector2D& Size);
	void PB_SetPercent(double Value);
	void PB_SetFillColor(const struct FLinearColor& Color);
	void PB_SetTargetPercent(double TargetPercent);
	void PB_SetThickness(double Thickness);
	void PB_SetUseTargetPercent(bool UseTargetPercent);
	void PB_SetProgressMethod(enum class EProgressMethod EProgressMethod);
	void PB_SetInterpTimeCurrent(double CurrentInterpTime);
	void PB_SetInterpTimeTarget(double TargetInterpTime);
	void PB_SetTargetFillColor_Positive(const struct FLinearColor& Color);
	void PB_SetTargetFillColor_Negative(const struct FLinearColor& Color);
	void PB_SetUseGradientFillColor(bool UseGradientFillColor);
	void PB_SetBackgroundColor(const struct FLinearColor& Color);
	void PB_SetFillColorGradientPower(double GradientPower);
	void PB_SetFillColorBrushTiling(enum class ESlateBrushTileType Tiling);
	void PB_SetFillColorMask(class UObject* Mask);
	void PB_SetBackgroundColorMask(class UTexture2D* Mask);
	void PB_SetBackgroundBrushTiling(enum class ESlateBrushTileType Tiling);
	void PB_SetBackgroundBlurStrength(double BlurStrength);
	void PB_SetFillColorGradientType(enum class EGradientTypes GradientType);
	void PB_SetBlendMask(class UTexture2D* BlendMask);
	void PB_SetFillType(enum class EProgressBarFillType FillType);
	void PB_SetFillFromCenterSpacing(double Spacing);
	void PB_SetIsCustomMarquee(bool IsMarquee);
	void PB_SetIsMarquee(bool IsMarquee);
	void PB_SetCustomMarqueeImage(class UTexture2D* Image);
	void PB_SetMarqueeImage(class UTexture2D* Image);
	void PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType);
	void PB_SetSeparationSteps(int32 Steps);
	void PB_SetSeparationStepsSpacing(double Spacing);
	void PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod);
	void PB_SetEffects(TArray<struct FS_Effects>& Effects);
	void PB_SetEffectEnabled(int32 Index, bool IsEnabled);
	void PB_SetAllEffectsEnabled(bool IsEnabled);
	void PB_RemoveEffect(int32 Index);
	void ExecuteUbergraph_WB_Base(int32 EntryPoint, int32 K2Node_Event_Index, const struct FVector2D& K2Node_Event_Size, double K2Node_Event_Value, const struct FLinearColor& K2Node_Event_Color_3, double K2Node_Event_TargetPercent, double K2Node_Event_Thickness, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, double K2Node_Event_CurrentInterpTime, double K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, const struct FLinearColor& K2Node_Event_Color, double K2Node_Event_GradientPower, enum class ESlateBrushTileType K2Node_Event_Tiling_1, class UObject* K2Node_Event_Mask_1, class UTexture2D* K2Node_Event_Mask, enum class ESlateBrushTileType K2Node_Event_Tiling, double K2Node_Event_BlurStrength, enum class EGradientTypes K2Node_Event_GradientType, class UTexture2D* K2Node_Event_BlendMask, enum class EProgressBarFillType K2Node_Event_FillType, double K2Node_Event_Spacing_1, bool K2Node_Event_IsMarquee_1, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image_1, class UTexture2D* K2Node_Event_Image, enum class EMarqueeMask K2Node_Event_MaskType, int32 K2Node_Event_Steps, double K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool K2Node_Event_IsEnabled);
};

}


