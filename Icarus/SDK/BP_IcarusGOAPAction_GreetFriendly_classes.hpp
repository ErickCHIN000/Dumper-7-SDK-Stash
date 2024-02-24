#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x84 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_GreetFriendly.BP_IcarusGOAPAction_GreetFriendly_C
class UBP_IcarusGOAPAction_GreetFriendly_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	float                                        MaxGreetDistance;                                  // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_GreetFriendly_C* GetDefaultObj();

	void IsTargetValid(class AActor* Target, bool* IsValid, class AAIController* CallFunc_GetAIController_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, class UIcarusGOAPAction* CallFunc_GetCurrentAction_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GetCurrentPropertyState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetValid_IsValid, class AActor* CallFunc_GetNearbyTargetToGreet_ValidTarget, bool CallFunc_IsValid_ReturnValue_1);
	void GetNearbyTargetToGreet(class AActor** ValidTarget, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsTargetValid_IsValid);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class AActor* CallFunc_GetNearbyTargetToGreet_ValidTarget, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


