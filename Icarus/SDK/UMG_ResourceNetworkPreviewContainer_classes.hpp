#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x460 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C
class UUMG_ResourceNetworkPreviewContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ResourcePreviewBox;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             Item;                                              // 0x270(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_ResourceNetworkPreviewContainer_C* GetDefaultObj();

	void Update(const struct FItemData& Item, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, const struct FFuelData& CallFunc_GetFuelStruct_Fuel, enum class EValid CallFunc_GetFuelStruct_Paths, const struct FWaterData& CallFunc_GetWaterStruct_Water, enum class EValid CallFunc_GetWaterStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FEnergyData& CallFunc_GetEnergyStruct_Energy, enum class EValid CallFunc_GetEnergyStruct_Paths, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
	void ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer(int32 EntryPoint);
};

}


