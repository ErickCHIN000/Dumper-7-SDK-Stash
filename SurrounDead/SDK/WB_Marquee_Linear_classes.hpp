#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E8 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Marquee_Linear.WB_Marquee_Linear_C
class UWB_Marquee_Linear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Marquee;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Marquee;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Marquee_Linear_C* GetDefaultObj();

	void SetMarqueeSize(const struct FVector2D& Size);
	void SetMarqueeMask(class UTexture2D* Value);
	void SetMarqueeTiling(enum class ESlateBrushTileType Tiling);
	void SetMarqueeSpeed(double Value);
	void SetPercent(double Percent);
	void SetMarqueeMethod(enum class EMarqueeMethod MarqueeMethod);
	void ExecuteUbergraph_WB_Marquee_Linear(int32 EntryPoint, enum class EHorizontalAlignment Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable_2, const struct FVector2D& K2Node_CustomEvent_Size, enum class EMarqueeMethod Temp_byte_Variable_3, class UTexture2D* K2Node_CustomEvent_Value_1, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double K2Node_CustomEvent_Value, double CallFunc_MapRangeClamped_ReturnValue, double K2Node_CustomEvent_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetSize_Width, double CallFunc_GetSize_Height, enum class EHorizontalAlignment Temp_byte_Variable_4, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_MapRangeClamped_ReturnValue_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, enum class EHorizontalAlignment K2Node_Select_Default, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


