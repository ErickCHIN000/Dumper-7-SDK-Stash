#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x798 - 0x78A)
// BlueprintGeneratedClass BP_IceBox.BP_IceBox_C
class ABP_IceBox_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_87C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_IceBox_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnItemAdded(class UInventory* Inventory, int32 Location);
	void OnGeneratorStateUpdated(bool IsActive);
	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void ExecuteUbergraph_BP_IceBox(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UInventory*>& K2Node_MakeArray_Array, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool K2Node_CustomEvent_IsActive, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


