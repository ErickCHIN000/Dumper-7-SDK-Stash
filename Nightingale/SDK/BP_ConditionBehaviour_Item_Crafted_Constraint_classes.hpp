#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xD8 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Item_Crafted_Constraint.BP_ConditionBehaviour_Item_Crafted_Constraint_C
class UBP_ConditionBehaviour_Item_Crafted_Constraint_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Count;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraint                       ItemConstraint;                                    // 0x90(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	class UBP_CraftingComponent_C*               CraftingComponent;                                 // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Item_Crafted_Constraint_C* GetDefaultObj();

	void OnCraftedItemReceived(const struct FCraftingRecipeReference& RecipeReference, const struct FInventoryEntry& ReceivedItem, int32 ReceivedRecipeQuantity, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetDebugText(class FText* Description, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void ExecuteUbergraph_BP_ConditionBehaviour_Item_Crafted_Constraint(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


