#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x590 - 0x580)
// BlueprintGeneratedClass AuxActor_CryoNado.AuxActor_CryoNado_C
class AAuxActor_CryoNado_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UGbxParticleSystemComponent*           GbxParticleSystem;                                 // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_CryoNado_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TurnOffEffects();
	void TurnOnEffects();
	void ExecuteUbergraph_AuxActor_CryoNado(int32 EntryPoint);
};

}


