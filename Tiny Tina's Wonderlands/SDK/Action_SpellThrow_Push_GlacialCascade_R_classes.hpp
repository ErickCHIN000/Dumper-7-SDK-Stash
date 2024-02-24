#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x418 - 0x410)
// BlueprintGeneratedClass Action_SpellThrow_Push_GlacialCascade_R.Action_SpellThrow_Push_GlacialCascade_R_C
class UAction_SpellThrow_Push_GlacialCascade_R_C : public UAction_SpellThrow_Push_GlacialCascade_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Push_GlacialCascade_R_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade_R(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}


