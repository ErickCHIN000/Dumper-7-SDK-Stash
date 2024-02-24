#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_TOR_GyroJet_Master.LightProjectile_TOR_GyroJet_Master_C
class ULightProjectile_TOR_GyroJet_Master_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2307[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_TOR_GyroJet_Master_C* GetDefaultObj();

	void StickyLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


