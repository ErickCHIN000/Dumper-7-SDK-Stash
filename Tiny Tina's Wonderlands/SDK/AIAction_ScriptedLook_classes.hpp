#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x180 - 0x148)
// AIActionBlueprintGeneratedClass AIAction_ScriptedLook.AIAction_ScriptedLook_C
class UAIAction_ScriptedLook_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	struct FGbxBlackboardKeySelector             LookAtTarget;                                      // 0x150(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FGbxBlackboardKeySelector             LookAtUseAim;                                      // 0x160(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FGbxBlackboardKeySelector             LookAtFireWeapon;                                  // 0x170(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UAIAction_ScriptedLook_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_ScriptedLook(int32 EntryPoint);
};

}


