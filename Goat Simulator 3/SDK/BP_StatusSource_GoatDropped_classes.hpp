#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// BlueprintGeneratedClass BP_StatusSource_GoatDropped.BP_StatusSource_GoatDropped_C
class ABP_StatusSource_GoatDropped_C : public ABP_PActor_Base_C
{
public:
	class UGGStatusEffectSourceComponent*        GGStatusEffectSource;                              // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SpreadSphere;                                      // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              DisgustingParticle;                                // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StatusSource_GoatDropped_C* GetDefaultObj();

};

}


