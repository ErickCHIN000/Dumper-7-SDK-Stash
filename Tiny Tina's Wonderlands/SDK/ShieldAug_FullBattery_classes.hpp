#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1E0 - 0x128)
// BlueprintGeneratedClass ShieldAug_FullBattery.ShieldAug_FullBattery_C
class UShieldAug_FullBattery_C : public UShieldAugment_Amp
{
public:
	struct FEnvQueryParams                       FullBatteryEQS;                                    // 0x128(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UShieldAug_FullBattery_C* GetDefaultObj();

	void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, float CallFunc_GetBaseShieldDamage_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void K2_OnWeaponShotModified(class AShield* Shield, struct FAugmentData& StackData, class AWeapon* Weapon, struct FWeaponShotModifierData& Data, float CallFunc_GetBaseShieldDamage_ReturnValue, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


