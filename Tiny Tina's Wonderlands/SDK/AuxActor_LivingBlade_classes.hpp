#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x598 - 0x580)
// BlueprintGeneratedClass AuxActor_LivingBlade.AuxActor_LivingBlade_C
class AAuxActor_LivingBlade_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UGbxParticleSystemComponent*           BladeSpawnParticle;                                // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           Blade;                                             // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_LivingBlade_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DeactivateBladeEffect();
	void ExecuteUbergraph_AuxActor_LivingBlade(int32 EntryPoint);
};

}


