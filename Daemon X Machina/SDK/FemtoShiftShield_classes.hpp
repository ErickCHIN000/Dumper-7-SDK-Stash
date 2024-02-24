#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x358 - 0x348)
// BlueprintGeneratedClass FemtoShiftShield.FemtoShiftShield_C
class AFemtoShiftShield_C : public ATTLFemtoShiftShield
{
public:
	class USphereComponent*                      Sphere;                                            // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFemtoShiftShield_C* GetDefaultObj();

	void UserConstructionScript();
};

}


