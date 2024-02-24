#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x438 - 0x438)
// BlueprintGeneratedClass LightProjectile_SM_LavaGoodTime_Child.LightProjectile_SM_LavaGoodTime_Child_C
class ULightProjectile_SM_LavaGoodTime_Child_C : public ULightProjectile_SM_LavaGoodTime_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_SM_LavaGoodTime_Child_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
};

}


