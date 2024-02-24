#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x150 - 0x148)
// BlueprintGeneratedClass AIAction_Wait.AIAction_Wait_C
class UAIAction_Wait_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_Wait_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_Wait(int32 EntryPoint);
};

}


