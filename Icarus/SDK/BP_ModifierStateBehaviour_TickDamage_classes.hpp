#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x399 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage.BP_ModifierStateBehaviour_TickDamage_C
class UBP_ModifierStateBehaviour_TickDamage_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EIcarusDamageType                 DamageType;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_TickDamage_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue);
	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage(int32 EntryPoint, int32 CallFunc_GetCurrentModifierEffectiveness_ReturnValue, const class FString& Temp_string_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}


