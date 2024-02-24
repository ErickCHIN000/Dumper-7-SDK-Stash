#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_SawbladeBounce_Donkey.LightProjectile_SawbladeBounce_Donkey_C
class ULightProjectile_SawbladeBounce_Donkey_C : public ULightProjectile_Crossbow_Sawblade_New_AR_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_SawbladeBounce_Donkey_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_GetAttachedActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


