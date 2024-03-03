#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_Widget_Functions.BP_Widget_Functions_C
class UBP_Widget_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_Widget_Functions_C* GetDefaultObj();

	float RandomizePositiveNegativeFloat(float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_RandomBool_ReturnValue, float K2Node_Select_Default);
	void SetBorderBrushTiling(class UBorder* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetBorderBrushSize(class UBorder* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetBorderBrush(class UBorder* Target, class UObject* Brush, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetImageBrushSize(class UImage* Target, const struct FVector2D& Size, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetImageBrushTiling(class UImage* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetImageBrush(class UImage* Target, class UObject* Brush, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetFillImageDrawAs(class UProgressBar* Target, enum class ESlateBrushDrawType DrawAs, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetFillImageMargin(class UProgressBar* Target, float Margin, class UObject* __WorldContext, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetBackgroundTint(class UProgressBar* Target, const struct FSlateColor& Tint, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeMirroring(class UProgressBar* Target, enum class ESlateBrushMirrorType Mirroring, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeTiling(class UProgressBar* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeDrawAs(class UProgressBar* Target, enum class ESlateBrushDrawType Draw_As, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeTint(class UProgressBar* Target, const struct FLinearColor& Tint, class UObject* __WorldContext, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeMargin(class UProgressBar* Target, const struct FMargin& Margin, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeImageSize(class UProgressBar* Target, const struct FVector2D& Image_Size, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetMarqueeImage(class UProgressBar* Target, class UObject* Image, class UObject* __WorldContext, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void GetFillImage(class UProgressBar* Target, class UObject* __WorldContext, class UObject** FillImage);
	void SetFillImageTiling(class UProgressBar* Target, enum class ESlateBrushTileType Tiling, class UObject* __WorldContext, struct FProgressBarStyle* Output_Get, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetFillImageSize(class UProgressBar* Target, const struct FVector2D& FillImageSize, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	void SetFillImage(class UProgressBar* Target, class UObject* FillImage, class UObject* __WorldContext, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle);
	struct FLinearColor SubtractBrightnessValue(const struct FLinearColor& InColor, float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float Temp_float_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue);
	struct FLinearColor SubtractFromColor(const struct FLinearColor& InColor, float Value, class UObject* __WorldContext, bool Temp_bool_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default_1, bool Temp_bool_Variable_2, float K2Node_Select_Default_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void GetSize(class USizeBox* SizeBox, class UObject* __WorldContext, float* Width, float* Height, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_1, float K2Node_Select_Default_1);
	void SetSize(class USizeBox* SizeBox, float Width, float Height, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue);
	struct FVector2D GetTexture2DSizeClamped(class UTexture2D* Texture2D, const struct FVector2D& Clamp, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	struct FVector2D GetTexture2DSize(class UTexture2D* Texture2D, class UObject* __WorldContext, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


