#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x2D0 - 0x2C5)
// BlueprintGeneratedClass BP_CrossbowProjectile_Sesters.BP_CrossbowProjectile_Sesters_C
class ABP_CrossbowProjectile_Sesters_C : public ABP_UnderdogThrownSword_C
{
public:
	uint8                                        Pad_1F8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Fire;                                              // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CrossbowProjectile_Sesters_C* GetDefaultObj();

	void PlayImpactAudio(const struct FVector& Location);
};

}


