#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x318 - 0x2E0)
// BlueprintGeneratedClass BlindManBossRoom.BlindManBossRoom_C
class ABlindManBossRoom_C : public ABossRoomVolume_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ASHAISpawnPoint*>               BlindStageSpawnPoints;                             // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E75[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASHAISpawnPoint*>               HealingStageSpawnPoints;                           // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABlindManBossRoom_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BlindManBossRoom(int32 EntryPoint);
};

}


