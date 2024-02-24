#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x798 - 0x78A)
// BlueprintGeneratedClass BP_Deep_Freeze.BP_Deep_Freeze_C
class ABP_Deep_Freeze_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_67FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Deep_Freeze_C* GetDefaultObj();

	void AddItem(enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<struct FItemData>& K2Node_MakeArray_Array, TArray<struct FItemData>& CallFunc_ForceAddItems_RemainingItems);
	void EnergyNetworkStateUpdate(bool Active, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue);
	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void AddItems();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Deep_Freeze(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


