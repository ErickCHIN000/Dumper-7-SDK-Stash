#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// AIActionBlueprintGeneratedClass AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C
class UAIAction_ScriptedMoveSpline_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ScriptedMoveSpline_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ScriptedMoveSpline(int32 EntryPoint);
};

}


