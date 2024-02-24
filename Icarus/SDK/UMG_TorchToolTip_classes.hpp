#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x2E0 - 0x2AD)
// WidgetBlueprintGeneratedClass UMG_TorchToolTip.UMG_TorchToolTip_C
class UUMG_TorchToolTip_C : public UW_ProjectionWidget_C
{
public:
	uint8                                        Pad_17DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Pointer;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Fuel;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_1;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_TorchToolTip_C* GetDefaultObj();

	void TickWidget();
	void ExecuteUbergraph_UMG_TorchToolTip(int32 EntryPoint, class UBP_UIProjectionComponent_Generic_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Generic, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Find_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1, const struct FTransmutableData& CallFunc_GetTransmutableData_Transmutable, enum class EDataValid CallFunc_GetTransmutableData_Paths, int32 CallFunc_FindStaticStackTotal_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


