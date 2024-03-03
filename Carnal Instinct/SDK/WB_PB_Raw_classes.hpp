#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass WB_PB_Raw.WB_PB_Raw_C
class UWB_PB_Raw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWB_BaseProgressBar_C*                 WB_BaseProgressBar;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PB_Raw_C* GetDefaultObj();

	void SetMarqueeTiling(enum class ESlateBrushTileType Tiling);
	void SetMarqueeDrawAs(enum class ESlateBrushDrawType DrawAs);
	void SetBarFillType(enum class EProgressBarFillType BarFillType);
	void SetMarqueeTint(const struct FLinearColor& Tint);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetMarqueeImageSize(const struct FVector2D& ImageSize);
	void SetBackgroundTint(const struct FLinearColor& InColor);
	void SetMarqueeImage(class UObject* Image);
	void SetFillImage(class UObject* FillImage);
	void SetMarquee(bool IsMarquee);
	void SetFillImageSize(const struct FVector2D& FillImageSize);
	void SetColor(const struct FLinearColor& InColor);
	void SetFillImageTiling(enum class ESlateBrushTileType Tiling);
	void SetPercent(float InPercent);
	void SetFillImageMargin(float Margin);
	void SetFillImageDrawAs(enum class ESlateBrushDrawType Draw_As);
	void ExecuteUbergraph_WB_PB_Raw(int32 EntryPoint, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, enum class ESlateBrushDrawType K2Node_CustomEvent_DrawAs, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, const struct FLinearColor& K2Node_CustomEvent_Tint, const struct FLinearColor& K2Node_CustomEvent_InColor_2, const struct FVector2D& K2Node_CustomEvent_ImageSize, const struct FLinearColor& K2Node_CustomEvent_InColor_1, class UObject* K2Node_CustomEvent_Image, class UObject* K2Node_CustomEvent_FillImage, bool K2Node_CustomEvent_IsMarquee, const struct FVector2D& K2Node_CustomEvent_FillImageSize, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, float K2Node_CustomEvent_InPercent, float K2Node_CustomEvent_Margin, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As);
};

}

