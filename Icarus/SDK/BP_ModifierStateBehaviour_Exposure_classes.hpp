#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x399 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_Exposure.BP_ModifierStateBehaviour_Exposure_C
class UBP_ModifierStateBehaviour_Exposure_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EIcarusDamageType                 DamageType;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_Exposure_C* GetDefaultObj();

	void GetModifierExponentialDamage(float* Scaled_Effectiveness, int32 CallFunc_GetCurrentModifierEffectiveness_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void InitComponent();
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Exposure(int32 EntryPoint, const class FString& Temp_string_Variable, float CallFunc_GetModifierExponentialDamage_Scaled_Effectiveness, class AActor* CallFunc_GetOwner_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float K2Node_Event_DeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}


