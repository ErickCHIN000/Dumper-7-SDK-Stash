#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB98 - 0xB90)
// BlueprintGeneratedClass AIAction_ReviveAlly.AIAction_ReviveAlly_C
class UAIAction_ReviveAlly_C : public UAIAction_ReviveActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ReviveAlly_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ReviveAlly(int32 EntryPoint);
};

}


