#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x68 - 0x60)
// BlueprintGeneratedClass BP_GOAPMotivation_Hunting.BP_GOAPMotivation_Hunting_C
class UBP_GOAPMotivation_Hunting_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	float                                        DeltaChange;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTargetDistance;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GOAPMotivation_Hunting_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateCost_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetNearestAlivePlayer_Player, TArray<class AActor*>& CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers, float CallFunc_Conv_IntToFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget, bool CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView, bool CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


