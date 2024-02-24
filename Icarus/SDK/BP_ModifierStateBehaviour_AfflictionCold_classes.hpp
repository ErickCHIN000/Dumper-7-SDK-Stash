#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x3C8 - 0x3A1)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C
class UBP_ModifierStateBehaviour_AfflictionCold_C : public UBP_Modifier_TemperatureClear_C
{
public:
	uint8                                        Pad_38D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAfflictionChanceRowHandle            Affliction;                                        // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_AfflictionCold_C* GetDefaultObj();

	float GetPostProcessBlendWeights(float MinInternalTemp, float SafeRegionMin, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2);
	bool ModifierRemoved(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	bool ModifierApplied(bool CallFunc_ModifierApplied_ReturnValue);
	void UpdateBlend();
	void StartFrostnipTimer();
	void ModifierTick(float DeltaTime);
	void FrostnipTimer();
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetPostProcessBlendWeights_ReturnValue, float CallFunc_GetPostProcessBlendWeights_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, float K2Node_Event_DeltaTime, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_TriggerAfflictionChance_ReturnValue);
};

}


