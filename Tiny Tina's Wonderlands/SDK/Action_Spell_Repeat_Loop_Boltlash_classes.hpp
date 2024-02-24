#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x420 - 0x408)
// BlueprintGeneratedClass Action_Spell_Repeat_Loop_Boltlash.Action_Spell_Repeat_Loop_Boltlash_C
class UAction_Spell_Repeat_Loop_Boltlash_C : public UAction_SpellThrow_Wand_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class AActor*                                Actor;                                             // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Repeat_FX;                                         // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Spell_Repeat_Loop_Boltlash_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void SpellCharge();
	void Notify_Spellcast1();
	void Notify_Spellcast2();
	void Notify_Spellcast3();
	void ExecuteUbergraph_Action_Spell_Repeat_Loop_Boltlash(int32 EntryPoint, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


