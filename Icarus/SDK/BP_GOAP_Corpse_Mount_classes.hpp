#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x778 - 0x770)
// BlueprintGeneratedClass BP_GOAP_Corpse_Mount.BP_GOAP_Corpse_Mount_C
class ABP_GOAP_Corpse_Mount_C : public ABP_GOAP_Corpse_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_GOAP_Corpse_Mount_C* GetDefaultObj();

	void SetupMountCorpse(const TArray<struct FItemData>& Items, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_1, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, TArray<class UInventory*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UInventory* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void IcarusBeginPlay();
	void OnItemRemovedVerbose(class UInventory* Inventory, int32 Location, struct FItemData& Item);
	void ExecuteUbergraph_BP_GOAP_Corpse_Mount(int32 EntryPoint, class UInventory* K2Node_Event_Inventory, int32 K2Node_Event_Location, const struct FItemData& K2Node_Event_Item);
};

}


