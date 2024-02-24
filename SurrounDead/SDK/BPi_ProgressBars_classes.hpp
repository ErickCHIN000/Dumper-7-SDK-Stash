#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPi_ProgressBars.BPi_ProgressBars_C
class IBPi_ProgressBars_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPi_ProgressBars_C* GetDefaultObj();

	void PB_GetSeparationSteps(int32* Steps);
	void PB_RemoveEffect(int32 Index);
	void PB_AddEffect(const struct FS_Effects& Effect, int32* Index);
	void PB_SetAllEffectsEnabled(bool IsEnabled);
	void PB_SetEffectEnabled(int32 Index, bool IsEnabled);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects);
	void PB_SetEffects(TArray<struct FS_Effects>& Effects);
	void PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod);
	void PB_SetSeparationStepsSpacing(double Spacing);
	void PB_SetSeparationSteps(int32 Steps);
	void PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType);
	void PB_SetMarqueeImage(class UTexture2D* Image);
	void PB_SetCustomMarqueeImage(class UTexture2D* Image);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_SetIsMarquee(bool IsMarquee);
	void PB_GetIsCustomMarquee(bool* IsMarquee);
	void PB_SetIsCustomMarquee(bool IsMarquee);
	void PB_SetFillFromCenterSpacing(double Spacing);
	void PB_SetFillType(enum class EProgressBarFillType FillType);
	void PB_SetBlendMask(class UTexture2D* BlendMask);
	void PB_SetFillColorGradientType(enum class EGradientTypes GradientType);
	void PB_SetBackgroundBlurStrength(double BlurStrength);
	void PB_SetBackgroundBrushTiling(enum class ESlateBrushTileType Tiling);
	void PB_SetBackgroundColorMask(class UTexture2D* Mask);
	void PB_SetFillColorMask(class UObject* Mask);
	void PB_SetFillColorBrushTiling(enum class ESlateBrushTileType Tiling);
	void PB_SetFillColorGradientPower(double GradientPower);
	void PB_GetBackgroundColor(struct FLinearColor* Color);
	void PB_SetBackgroundColor(const struct FLinearColor& Color);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_SetUseGradientFillColor(bool UseGradientFillColor);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_SetTargetFillColor_Negative(const struct FLinearColor& Color);
	void PB_SetTargetFillColor_Positive(const struct FLinearColor& Color);
	void PB_GetInterpTimeTarget(double* TargetInterpTime);
	void PB_SetInterpTimeTarget(double TargetInterpTime);
	void PB_GetInterpTimeCurrent(double* CurrentInterpTime);
	void PB_SetInterpTimeCurrent(double CurrentInterpTime);
	void PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod);
	void PB_SetProgressMethod(enum class EProgressMethod EProgressMethod);
	void PB_GetUseTargetPercent(bool* UseTargetPercent);
	void PB_SetUseTargetPercent(bool UseTargetPercent);
	void PB_GetThickness(double* Thickness);
	void PB_SetThickness(double Thickness);
	void PB_GetTargetPercent(double* TargetPercent);
	void PB_SetTargetPercent(double TargetPercent);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_SetFillColor(const struct FLinearColor& Color);
	void PB_GetPercent(double* Percent);
	void PB_SetPercent(double Value);
	void PB_GetSize(struct FVector2D* Size);
	void PB_SetSize(const struct FVector2D& Size);
};

}


