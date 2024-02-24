#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5A0 - 0x580)
// BlueprintGeneratedClass AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C
class AAuxActor_Shaman_Maelstorm_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UGbxParticleSystemComponent*           Storm;                                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Rain;                                              // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_Shaman_Maelstorm_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TurnOffEffects();
	void TurnOnStormEffects();
	void TurnOnRainEffects();
	void ExecuteUbergraph_AuxActor_Shaman_Maelstorm(int32 EntryPoint);
};

}


