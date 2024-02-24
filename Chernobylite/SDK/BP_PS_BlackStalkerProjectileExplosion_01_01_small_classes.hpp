#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass BP_PS_BlackStalkerProjectileExplosion_01_01_small.BP_PS_BlackStalkerProjectileExplosion_01_01_small_C
class ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              PS_BlackStalkerProjectile_Explosion_02_01;         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01_small(int32 EntryPoint);
};

}


