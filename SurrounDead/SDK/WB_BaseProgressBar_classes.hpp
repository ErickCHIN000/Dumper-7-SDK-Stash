#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x359 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_BaseProgressBar.WB_BaseProgressBar_C
class UWB_BaseProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               B_FillTypes;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          BottomToTop;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Center_Left;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Center_Right;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          FillFromCenter;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       FillTypes;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BottomToTop;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Img_FillFromCenter;                                // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Img_FillTypes;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LeftToRight;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_RightToLeft;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_TopToBottom;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          LeftToRight;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RightToLeft;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          TopToBottom;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_Marquee;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EProgressBarFillType              FillType;                                          // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Percent;                                           // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseShader;                                        // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_BaseProgressBar_C* GetDefaultObj();

	void SetPBsEnabled(bool bInIsEnabled);
	void SetImgsEnabled(bool bInIsEnabled);
	void SetInstanceBlendMask(class UImage* Img, class UTexture* BlendMask);
	void SetImageBlendMask(class UObject* BlendMask, class UTexture* Mask, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void SetTextureParameter(class UImage* Img, class FName ParameterName, class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetInstancePercent(class UImage* Img, double Percent);
	void SetScalarParameter(class UImage* Img, class FName ParameterName, double Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetImagePercent(double Percent, bool K2Node_SwitchEnum_CmpSuccess);
	void GetPercent(double* Percent, bool Temp_bool_Variable, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar, double K2Node_Select_Default, double K2Node_Select_Option_0_ImplicitCast);
	void GetCurrentProgressBar(class UProgressBar** AsProgress_Bar, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UProgressBar* K2Node_DynamicCast_AsProgress_Bar, bool K2Node_DynamicCast_bSuccess);
	void SetBarFillType(enum class EProgressBarFillType BarFillType, bool bUseShader);
	void SetPercent(double InPercent);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetFillImageTiling(enum class ESlateBrushTileType Tiling);
	void SetFillImageSize(const struct FVector2D& FillImageSize);
	void SetFillImage(class UObject* FillImage);
	void SetIsMarquee(bool InbIsMarquee);
	void SetMarqueeImage(class UObject* Image);
	void SetMarqueeImageSize(const struct FVector2D& Image_Size);
	void SetMarqueeTint(const struct FLinearColor& Color);
	void SetMarqueeDrawAs(enum class ESlateBrushDrawType Draw_As);
	void SetMarqueeTiling(enum class ESlateBrushTileType Tiling);
	void SetBackgroundTint(const struct FLinearColor& Tint);
	void SetFillImageMargin(double Margin);
	void SetFillImageDrawAs(enum class ESlateBrushDrawType Draw_As);
	void ExecuteUbergraph_WB_BaseProgressBar(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool Temp_bool_Variable, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_7, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, bool K2Node_CustomEvent_bUseShader, enum class EProgressBarFillType Temp_byte_Variable, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar, double K2Node_CustomEvent_InPercent, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_1, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_2, const struct FProgressBarStyle& CallFunc_SetFillImageTiling_Output_Get, const struct FVector2D& K2Node_CustomEvent_FillImageSize, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_3, class UObject* K2Node_CustomEvent_FillImage, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_4, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_5, bool K2Node_CustomEvent_InbIsMarquee, class UObject* K2Node_CustomEvent_Image, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_6, int32 Temp_int_Variable_8, const struct FVector2D& K2Node_CustomEvent_Image_Size, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_7, const struct FLinearColor& K2Node_CustomEvent_Color, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_8, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As_1, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_9, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_10, int32 Temp_int_Variable_9, const struct FLinearColor& K2Node_CustomEvent_Tint, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor, double K2Node_CustomEvent_Margin, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_12, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_13, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, enum class EProgressBarFillType Temp_byte_Variable_1, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_17, TArray<class UProgressBar*>& K2Node_MakeArray_Array, class UProgressBar* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UProgressBar* CallFunc_GetCurrentProgressBar_AsProgress_Bar_14, bool Temp_bool_Variable_2, int32 K2Node_Select_Default_1, int32 Temp_int_Variable_18, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, int32 K2Node_Select_Default_4, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


