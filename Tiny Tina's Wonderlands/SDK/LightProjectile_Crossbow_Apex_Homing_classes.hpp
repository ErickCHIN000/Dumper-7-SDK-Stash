#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_Crossbow_Apex_Homing.LightProjectile_Crossbow_Apex_Homing_C
class ULightProjectile_Crossbow_Apex_Homing_C : public ULightProjectile_Crossbow_Bolt_PS_DAL_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_Crossbow_Apex_Homing_C* GetDefaultObj();

	void StartHoming(class UOakLightProjectile* Projectile);
};

}


