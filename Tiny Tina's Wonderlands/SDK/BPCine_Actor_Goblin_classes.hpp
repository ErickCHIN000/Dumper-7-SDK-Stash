#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4D0 - 0x4B8)
// BlueprintGeneratedClass BPCine_Actor_Goblin.BPCine_Actor_Goblin_C
class ABPCine_Actor_Goblin_C : public AOakCinematicActor
{
public:
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPCine_Actor_Goblin_C* GetDefaultObj();

	void UserConstructionScript();
};

}


