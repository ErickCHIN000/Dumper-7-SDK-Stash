#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x94 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Safety.BP_IcarusGOAPMotivation_Safety_C
class UBP_IcarusGOAPMotivation_Safety_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	TArray<class AActor*>                        KnownSeenActors;                                   // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        KnownHeardActors;                                  // 0x70(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UCurveFloat*                           DistanceCurve;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallCount;                                         // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLastSafe;                                      // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSafety;                                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Safety_C* GetDefaultObj();

	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float DecreasePerSecond, float SafetyModifier, const TArray<class AActor*>& AllPerceivedActors, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors_1, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetCurrentPropertyState_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Fraction_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetActorThreat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1);
};

}


