#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x3FC - 0x398)
// BlueprintGeneratedClass BP_Modifier_Brambles.BP_Modifier_Brambles_C
class UBP_Modifier_Brambles_C : public UBP_Modifier_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EIcarusDamageType                 DamageType;                                        // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AActor*>                          BramblesInRange;                                   // 0x3A8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        LastDistance;                                      // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Modifier_Brambles_C* GetDefaultObj();

	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Brambles(int32 EntryPoint, const class FString& Temp_string_Variable, enum class EMissionDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const class FString& Temp_string_Variable_1, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, float K2Node_Select_Default, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_DealFlatDamage_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_3, int32 CallFunc_Array_Length_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
};

}


