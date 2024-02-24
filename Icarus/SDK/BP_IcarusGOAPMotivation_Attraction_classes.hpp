#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x64 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Attraction.BP_IcarusGOAPMotivation_Attraction_C
class UBP_IcarusGOAPMotivation_Attraction_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	float                                        DeltaThreat;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Attraction_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float RecoveryRate, float Distance, class FName ParentCharacterKey, class APawn* ControlledPawn, const TArray<class AActor*>& NearbyNPCs, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class ABP_AnimalTrap_Base_C*>& CallFunc_GetActorsOfClassInWorld_OutActors, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_AnimalTrap_Base_C* K2Node_DynamicCast_AsBP_Animal_Trap_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_Vector_DistanceSquared_ReturnValue, float CallFunc_Square_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


