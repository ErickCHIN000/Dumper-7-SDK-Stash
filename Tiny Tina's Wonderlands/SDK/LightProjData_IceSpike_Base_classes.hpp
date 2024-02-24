#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x398 - 0x378)
// BlueprintGeneratedClass LightProjData_IceSpike_Base.LightProjData_IceSpike_Base_C
class ULightProjData_IceSpike_Base_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_5E5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 PincushionDuration;                                // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjData_IceSpike_Base_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


