#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x3D0 - 0x3A1)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C
class UBP_ModifierStateBehaviour_AfflictionHeat_C : public UBP_Modifier_TemperatureClear_C
{
public:
	uint8                                        Pad_5D60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Damage;                                            // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagePercentage;                                  // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAfflictionChanceRowHandle            Affliction;                                        // 0x3B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_AfflictionHeat_C* GetDefaultObj();

	float GetPostProcessBlendWeights(float MaxInternalTemp, float SafeRegionMax, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2);
	bool ModifierRemoved(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	bool ModifierApplied(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue_1, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue);
	void UpdateBlend();
	void DealDamage();
	void ModifierTick(float DeltaTime);
	void StartHeatstrokeTimer();
	void HeatstrokeTimer();
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionHeat(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetPostProcessBlendWeights_ReturnValue, float CallFunc_GetPostProcessBlendWeights_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue_4, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_TriggerAfflictionChance_ReturnValue);
};

}


