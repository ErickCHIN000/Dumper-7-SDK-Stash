#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// BlueprintGeneratedClass AITree_LookAtPlayer.AITree_LookAtPlayer_C
class UAITree_LookAtPlayer_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAITree_LookAtPlayer_C* GetDefaultObj();

	void ExecuteUbergraph_AITree_LookAtPlayer(int32 EntryPoint);
};

}


