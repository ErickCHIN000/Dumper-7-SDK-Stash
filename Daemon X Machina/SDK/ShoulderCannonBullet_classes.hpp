#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xB28 - 0xB1C)
// BlueprintGeneratedClass ShoulderCannonBullet.ShoulderCannonBullet_C
class AShoulderCannonBullet_C : public ANormalBullet_C
{
public:
	uint8                                        Pad_3D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleSystem;                                    // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AShoulderCannonBullet_C* GetDefaultObj();

	void UserConstructionScript();
};

}


