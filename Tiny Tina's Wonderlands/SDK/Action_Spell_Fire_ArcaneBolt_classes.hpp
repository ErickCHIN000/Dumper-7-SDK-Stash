#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C
class UAction_Spell_Fire_ArcaneBolt_C : public UAction_SpellThrow_Wand_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Fire_ArcaneBolt_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_SpellCast();
	void Notify_SpellWarmup();
	void Notify_AudioCast();
	void Notify_SpellWarmup3rd();
	void Notify_SpellCast3rd();
	void ExecuteUbergraph_Action_Spell_Fire_ArcaneBolt(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue5, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement1, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AActor* CallFunc_K2_GetActor_ReturnValue8, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent2, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent2, class FName CallFunc_PlayFX_Socket2, class AActor* CallFunc_K2_GetActor_ReturnValue9, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue3, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent3, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent3, class FName CallFunc_PlayFX_Socket3);
};

}


