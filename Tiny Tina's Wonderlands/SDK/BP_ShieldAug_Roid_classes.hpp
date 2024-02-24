#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x198 - 0x198)
// BlueprintGeneratedClass BP_ShieldAug_Roid.BP_ShieldAug_Roid_C
class UBP_ShieldAug_Roid_C : public UShieldAugment_Attribute
{
public:

	static class UClass* StaticClass();
	static class UBP_ShieldAug_Roid_C* GetDefaultObj();

	void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData);
	void K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData);
	void K2_OnCausedDamage(class AShield* Shield, struct FAugmentData& StackData, class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
};

}


