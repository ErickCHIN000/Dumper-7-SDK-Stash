#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_Spell_Repeat_Sawblades_Loop.Action_Spell_Repeat_Sawblades_Loop_C
class UAction_Spell_Repeat_Sawblades_Loop_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Repeat_Sawblades_Loop_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void SpellCharge();
	void SpellThrow();
	void ExecuteUbergraph_Action_Spell_Repeat_Sawblades_Loop(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket);
};

}


