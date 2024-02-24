#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C
class UBP_FocusableBehaviour_Backpack_C : public UBP_FocusableBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusItem*                           BackpackItem;                                      // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FocusableBehaviour_Backpack_C* GetDefaultObj();

	void FindBackpackItem(class ACharacter* TargetCharacter, class AIcarusItem** BackpackItem, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void HideBackpackMesh(class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, class AIcarusItem* CallFunc_FindBackpackItem_BackpackItem, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void OnFocused();
	void OnUnfocused();
	void ExecuteUbergraph_BP_FocusableBehaviour_Backpack(int32 EntryPoint, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusItem* CallFunc_FindBackpackItem_BackpackItem, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


