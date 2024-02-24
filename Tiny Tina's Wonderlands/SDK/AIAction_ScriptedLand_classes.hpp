#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// AIActionBlueprintGeneratedClass AIAction_ScriptedLand.AIAction_ScriptedLand_C
class UAIAction_ScriptedLand_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ScriptedLand_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ScriptedLand(int32 EntryPoint);
};

}


