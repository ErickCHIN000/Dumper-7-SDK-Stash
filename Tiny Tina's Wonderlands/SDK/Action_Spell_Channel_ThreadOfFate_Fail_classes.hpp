#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_Spell_Channel_ThreadOfFate_Fail.Action_Spell_Channel_ThreadOfFate_Fail_C
class UAction_Spell_Channel_ThreadOfFate_Fail_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Channel_ThreadOfFate_Fail_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fail(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}


