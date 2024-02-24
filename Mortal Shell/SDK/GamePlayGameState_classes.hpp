#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x73 (0x4A8 - 0x435)
// BlueprintGeneratedClass GamePlayGameState.GamePlayGameState_C
class AGamePlayGameState_C : public ASharedGameState_C
{
public:
	uint8                                        Pad_2AE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentMap;                                        // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        PlayerCharacters;                                  // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ExitSpawned;                                       // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreamingDynamic*                PreviousStreamedLevel;                             // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                CurrentStreamedLevel;                              // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                PreviousStreamedHallway;                           // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                CurrentStreamedHallway;                            // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Procedural_Door_C*             CurrentEntranceDoor;                               // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfProceduralRoomsSpawned;                    // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory_Slot_C*                     CurrentHoveredInvSlot;                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGodMode_;                                        // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnFrameSpacing;                                 // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        TargetSpawnFrame;                                  // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGamePlayGameState_C* GetDefaultObj();

	void Get_Next_Spawn_Frame(int64* TargetFrame, int64 CallFunc_GetFrameCount_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue, int64 CallFunc_MaxInt64_ReturnValue);
};

}


