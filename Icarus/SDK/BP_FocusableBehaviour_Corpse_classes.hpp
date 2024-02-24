#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x128 - 0x110)
// BlueprintGeneratedClass BP_FocusableBehaviour_Corpse.BP_FocusableBehaviour_Corpse_C
class UBP_FocusableBehaviour_Corpse_C : public UBP_FocusableBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GOAP_Corpse_C*                     CorpseRef;                                         // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           OwningItemRef;                                     // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FocusableBehaviour_Corpse_C* GetDefaultObj();

	void OnFocused();
	void ExecuteUbergraph_BP_FocusableBehaviour_Corpse(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class AIcarusItem* CallFunc_GetOwnerIcarusItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_1, TArray<class USkeletalMeshComponent*>& K2Node_Select_Default, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPhysicsAsset* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult);
};

}


