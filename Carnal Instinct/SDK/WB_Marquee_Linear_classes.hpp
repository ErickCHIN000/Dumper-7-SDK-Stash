#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass WB_Marquee_Linear.WB_Marquee_Linear_C
class UWB_Marquee_Linear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Marquee;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Marquee;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Marquee_Linear_C* GetDefaultObj();

	void SetMarqueeSize(const struct FVector2D& Size);
	void SetMarqueeMask(class UTexture2D* Value);
	void SetMarqueeTiling(enum class ESlateBrushTileType Tiling);
	void SetMarqueeSpeed(float Value);
	void SetPercent(float Percent);
	void SetMarqueeMethod(enum class EMarqueeMethod MarqueeMethod);
	void ExecuteUbergraph_WB_Marquee_Linear(int32 EntryPoint, enum class EHorizontalAlignment Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_2, const struct FVector2D& K2Node_CustomEvent_Size, enum class EMarqueeMethod Temp_byte_Variable_3, class UTexture2D* K2Node_CustomEvent_Value_1, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_CustomEvent_Value, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_CustomEvent_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetSize_Width, float CallFunc_GetSize_Height, enum class EHorizontalAlignment Temp_byte_Variable_4, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, enum class EHorizontalAlignment K2Node_Select_Default, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1);
};

}


