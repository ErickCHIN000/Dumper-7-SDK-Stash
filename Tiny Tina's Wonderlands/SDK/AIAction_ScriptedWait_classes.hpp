#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x150 - 0x148)
// BlueprintGeneratedClass AIAction_ScriptedWait.AIAction_ScriptedWait_C
class UAIAction_ScriptedWait_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ScriptedWait_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ScriptedWait(int32 EntryPoint);
};

}


