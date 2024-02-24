#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_HW_COV_Love_Child.LightProjectile_HW_COV_Love_Child_C
class ULightProjectile_HW_COV_Love_Child_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3CDD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_HW_COV_Love_Child_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


