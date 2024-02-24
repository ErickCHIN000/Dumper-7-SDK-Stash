#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// AIActionBlueprintGeneratedClass AIAction_ScriptedCover.AIAction_ScriptedCover_C
class UAIAction_ScriptedCover_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ScriptedCover_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ScriptedCover(int32 EntryPoint);
};

}


