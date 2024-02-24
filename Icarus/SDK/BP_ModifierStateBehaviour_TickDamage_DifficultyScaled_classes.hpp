#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x399 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C
class UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EIcarusDamageType                 DamageType;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue);
	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_DifficultyScaled(int32 EntryPoint, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue, const class FString& Temp_string_Variable, enum class EMissionDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const class FString& Temp_string_Variable_1, float K2Node_Select_Default, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}


