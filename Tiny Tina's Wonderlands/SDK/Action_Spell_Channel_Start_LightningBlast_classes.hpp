#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x420 - 0x408)
// BlueprintGeneratedClass Action_Spell_Channel_Start_LightningBlast.Action_Spell_Channel_Start_LightningBlast_C
class UAction_Spell_Channel_Start_LightningBlast_C : public UAction_SpellThrow_Wand_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              SpellFX_1st;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              StartFX_3rd;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Spell_Channel_Start_LightningBlast_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void Notify_SpellWarmup();
	void ExecuteUbergraph_Action_Spell_Channel_Start_LightningBlast(int32 EntryPoint, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


