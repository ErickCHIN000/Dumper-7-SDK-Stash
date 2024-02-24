#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B8 - 0x2B8)
// BlueprintGeneratedClass ShieldAug_MacedWard.ShieldAug_MacedWard_C
class UShieldAug_MacedWard_C : public UShieldAugment_Damage
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_MacedWard_C* GetDefaultObj();

	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


