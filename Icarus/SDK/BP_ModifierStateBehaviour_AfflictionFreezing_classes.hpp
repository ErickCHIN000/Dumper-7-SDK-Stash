#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3E0 - 0x3C8)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_AfflictionFreezing.BP_ModifierStateBehaviour_AfflictionFreezing_C
class UBP_ModifierStateBehaviour_AfflictionFreezing_C : public UBP_ModifierStateBehaviour_AfflictionCold_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Damage;                                            // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FrostbiteTimer;                                    // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_AfflictionFreezing_C* GetDefaultObj();

	bool ModifierRemoved(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	bool ModifierApplied(const class FString& Temp_string_Variable, bool CallFunc_ModifierApplied_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ModifierTick(float DeltaTime);
	void UpdateBlend();
	void DealDamage();
	void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionFreezing(int32 EntryPoint, float K2Node_Event_DeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, float CallFunc_GetPostProcessBlendWeights_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue, float CallFunc_GetPostProcessBlendWeights_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
};

}


