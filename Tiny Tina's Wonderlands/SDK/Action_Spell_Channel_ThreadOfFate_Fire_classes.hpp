#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_Spell_Channel_ThreadOfFate_Fire.Action_Spell_Channel_ThreadOfFate_Fire_C
class UAction_Spell_Channel_ThreadOfFate_Fire_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Channel_ThreadOfFate_Fire_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_SpellCast();
	void Audio_FingerSnap();
	void ExecuteUbergraph_Action_Spell_Channel_ThreadOfFate_Fire(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


