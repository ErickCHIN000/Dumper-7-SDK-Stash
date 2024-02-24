#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass HitReactionLayer_Death.HitReactionLayer_Death_C
class UHitReactionLayer_Death_C : public UHitReactionLayer_Blueprint
{
public:
	float                                        OverkillThresholdPercent;                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHitReactionLayer_Death_C* GetDefaultObj();

	void EvaluateCanPinOnDeath(class AActor* Actor, class UDamageSource* DamageSource, bool* CanPinOnDeath, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UOakDamageSource* K2Node_DynamicCast_AsOak_Damage_Source, bool K2Node_DynamicCast_bSuccess1);
	void CalcHealthPercent(class UOakDamageComponent* Receiver, float Damage_Amount, float* Damage_Percent);
	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, bool CanPinOnDeath, float LaunchDeathThreshold, class UDamageComponent* HitReceiver, enum class EOakElementalType DeathElementalType, float DamageValue, float Ratio, float TargetMass, float HitForce, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EvaluateCanPinOnDeath_CanPinOnDeath, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOakDamageComponent* K2Node_DynamicCast_AsOak_Damage_Receiver, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsHitReactionTagActive_ReturnValue, float CallFunc_GetMass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsDamageOverkill_ReturnValue);
};

}


