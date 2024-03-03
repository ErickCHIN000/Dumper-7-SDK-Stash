#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass WB_BaseProgressBar.WB_BaseProgressBar_C
class UWB_BaseProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          BottomToTop;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          FillFromCenter;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       FillTypes;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          LeftToRight;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RightToLeft;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          TopToBottom;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_BaseProgressBar_C* GetDefaultObj();

	void GetPercent(float* Percent, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar);
	void GetCurrentProgressBar(class UProgressBar** AsProgress_Bar, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UProgressBar* K2Node_DynamicCast_AsProgress_Bar, bool K2Node_DynamicCast_bSuccess);
	void SetPercent(float InPercent);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetFillImageTiling(enum class ESlateBrushTileType Tiling);
	void SetBarFillType(enum class EProgressBarFillType BarFillType);
	void SetFillImageSize(const struct FVector2D& FillImageSize);
	void SetFillImage(class UObject* FillImage);
	void SetIsMarquee(bool InbIsMarquee);
	void SetMarqueeImage(class UObject* Image);
	void SetMarqueeImageSize(const struct FVector2D& Image_Size);
	void SetMarqueeTint(const struct FLinearColor& Color);
	void SetMarqueeDrawAs(enum class ESlateBrushDrawType Draw_As);
	void SetMarqueeTiling(enum class ESlateBrushTileType Tiling);
	void SetBackgroundTint(const struct FLinearColor& Tint);
	void SetFillImageMargin(float Margin);
	void SetFillImageDrawAs(enum class ESlateBrushDrawType Draw_As);
	void ExecuteUbergraph_WB_BaseProgressBar(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, float K2Node_CustomEvent_InPercent, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar, const struct FLinearColor& K2Node_CustomEvent_InColor, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_1, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_2, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, const struct FProgressBarStyle& CallFunc_SetFillImageTiling_Output_Get, const struct FVector2D& K2Node_CustomEvent_FillImageSize, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_3, class UObject* K2Node_CustomEvent_FillImage, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_4, enum class EProgressBarFillType Temp_byte_Variable, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_5, int32 K2Node_Select_Default, bool K2Node_CustomEvent_InbIsMarquee, class UObject* K2Node_CustomEvent_Image, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_6, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_CustomEvent_Image_Size, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_7, const struct FLinearColor& K2Node_CustomEvent_Color, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_8, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_9, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_10, const struct FLinearColor& K2Node_CustomEvent_Tint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_11, float K2Node_CustomEvent_Margin, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_12, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_13, int32 Temp_int_Loop_Counter_Variable, TArray<class UProgressBar*>& K2Node_MakeArray_Array, class UProgressBar* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_14);
};

}


