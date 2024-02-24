#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x120 - 0x110)
// BlueprintGeneratedClass BP_FocusableBehaviour_Fishing.BP_FocusableBehaviour_Fishing_C
class UBP_FocusableBehaviour_Fishing_C : public UBP_FocusableBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusItem*                           FishingItem;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_FocusableBehaviour_Fishing_C* GetDefaultObj();

	void UpdateProjection(bool NewParam);
	void TryAttachToOwner(class AIcarusItem* ItemActor, class AActor* Invoking_Actor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_ActionableBehaviour_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod, bool K2Node_DynamicCast_bSuccess);
	void UpdatePanini(class AIcarusItem* Item, int32 Temp_int_Loop_Counter_Variable, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UTraitBehaviour* CallFunc_GetFirstBehaviourOfType_ReturnValue, class UBP_ActionableBehaviour_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class ABP_SkeletalItem_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fishing_Rod_Lure_C* CallFunc_GetLure_Lure, bool CallFunc_IsValid_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void FocusChangePanini();
	void ExecuteUbergraph_BP_FocusableBehaviour_Fishing(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
};

}


