#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A0 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflicationDamage.BP_ModifierStateBehaviour_AfflicationDamage_C
class UBP_ModifierStateBehaviour_AfflicationDamage_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Damage;                                            // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagePercentage;                                  // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_AfflicationDamage_C* GetDefaultObj();

	bool ModifierRemoved(bool CallFunc_ModifierRemoved_ReturnValue);
	bool ModifierApplied(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue_1, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflicationDamage(int32 EntryPoint, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}


