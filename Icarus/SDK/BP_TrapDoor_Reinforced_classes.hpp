#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x7C8 - 0x7B4)
// BlueprintGeneratedClass BP_TrapDoor_Reinforced.BP_TrapDoor_Reinforced_C
class ABP_TrapDoor_Reinforced_C : public ABP_Door_Base_C
{
public:
	uint8                                        Pad_7B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_WeatherAudioComponent_C*           BP_WeatherAudioComponent;                          // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TrapDoor_Reinforced_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TrapDoor_Reinforced(int32 EntryPoint);
};

}


