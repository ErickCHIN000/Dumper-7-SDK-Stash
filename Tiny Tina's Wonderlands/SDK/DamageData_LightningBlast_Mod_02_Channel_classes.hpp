#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x350 - 0x350)
// BlueprintGeneratedClass DamageData_LightningBlast_Mod_02_Channel.DamageData_LightningBlast_Mod_02_Channel_C
class UDamageData_LightningBlast_Mod_02_Channel_C : public USpellDamageData
{
public:

	static class UClass* StaticClass();
	static class UDamageData_LightningBlast_Mod_02_Channel_C* GetDefaultObj();

	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue);
};

}


