#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x410 - 0x400)
// BlueprintGeneratedClass Action_Spell_Repeat_TimeSkip_Loop.Action_Spell_Repeat_TimeSkip_Loop_C
class UAction_Spell_Repeat_TimeSkip_Loop_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_Finger_Snap;                                 // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Spell_Repeat_TimeSkip_Loop_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_SpellCast();
	void Audio_FingerSnap();
	void ExecuteUbergraph_Action_Spell_Repeat_TimeSkip_Loop(int32 EntryPoint, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class AActor* CallFunc_K2_GetActor_ReturnValue2, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


