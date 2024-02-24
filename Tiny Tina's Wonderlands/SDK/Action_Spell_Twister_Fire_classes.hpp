#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_Spell_Twister_Fire.Action_Spell_Twister_Fire_C
class UAction_Spell_Twister_Fire_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Twister_Fire_C* GetDefaultObj();

	void SpellWarmUp();
	void SpellPush();
	void ExecuteUbergraph_Action_Spell_Twister_Fire(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue);
};

}


