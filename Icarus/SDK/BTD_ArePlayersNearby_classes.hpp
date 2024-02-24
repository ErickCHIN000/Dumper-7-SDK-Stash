#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xA4 - 0xA0)
// BlueprintGeneratedClass BTD_ArePlayersNearby.BTD_ArePlayersNearby_C
class UBTD_ArePlayersNearby_C : public UBTDecorator_BlueprintBase
{
public:
	float                                        NearbyDistance;                                    // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_ArePlayersNearby_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, const struct FAIRelationshipsRowHandle& PlayerRelationship, const struct FAIRelationshipsRowHandle& Temp_struct_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_FAIRelationshipsRowHandleFAIRelationshipsRowHandle_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess, const struct FAIRelationshipsRowHandle& CallFunc_GetRelationshipData_ReturnValue, bool CallFunc_IsTargetAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


