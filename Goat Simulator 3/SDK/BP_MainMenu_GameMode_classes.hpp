#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// BlueprintGeneratedClass BP_MainMenu_GameMode.BP_MainMenu_GameMode_C
class ABP_MainMenu_GameMode_C : public AGGGameMode_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MainMenu_GameMode_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MainMenu_GameMode(int32 EntryPoint);
};

}


