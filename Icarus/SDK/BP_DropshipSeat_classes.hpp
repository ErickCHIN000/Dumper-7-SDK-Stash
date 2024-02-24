#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B (0x3C1 - 0x366)
// BlueprintGeneratedClass BP_DropshipSeat.BP_DropshipSeat_C
class ABP_DropshipSeat_C : public ABP_SeatBase_C
{
public:
	uint8                                        Pad_45D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Exit_3;                                            // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Exit_2;                                            // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Exit_1;                                            // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SeatLocked;                                        // 0x388(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         ClientSync;                                        // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SyncedTransform;                                   // 0x390(0x30)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Shake;                                             // 0x3C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_DropshipSeat_C* GetDefaultObj();

	void OnRep_SyncedTransform(const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult);
	bool EnterSeat(class AIcarusPlayerCharacter* PlayerCharacter, bool CallFunc_EnterSeat_ReturnValue);
	void ServerInteract();
	void ExecuteUbergraph_BP_DropshipSeat(int32 EntryPoint);
};

}


