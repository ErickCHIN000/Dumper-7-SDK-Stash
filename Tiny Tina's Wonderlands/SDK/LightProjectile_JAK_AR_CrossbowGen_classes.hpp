#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4D0 - 0x4D0)
// BlueprintGeneratedClass LightProjectile_JAK_AR_CrossbowGen.LightProjectile_JAK_AR_CrossbowGen_C
class ULightProjectile_JAK_AR_CrossbowGen_C : public ULightProjectile_JAK_AR_CrossbowBolt_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_JAK_AR_CrossbowGen_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


