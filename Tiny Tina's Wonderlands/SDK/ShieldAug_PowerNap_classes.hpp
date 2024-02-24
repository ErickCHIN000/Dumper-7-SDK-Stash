#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x130 - 0x128)
// BlueprintGeneratedClass ShieldAug_PowerNap.ShieldAug_PowerNap_C
class UShieldAug_PowerNap_C : public UShieldAugment_Amp
{
public:
	float                                        DelayTime;                                         // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmpIncrement;                                      // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShieldAug_PowerNap_C* GetDefaultObj();

	void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData);
	void K2_OnShieldNotFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData& StackData, class FName DelayName, class UAbility_PowerNap_C* PowerNapAbility, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class UAbility_PowerNap_C* K2Node_DynamicCast_AsAbility_Power_Nap, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
};

}


