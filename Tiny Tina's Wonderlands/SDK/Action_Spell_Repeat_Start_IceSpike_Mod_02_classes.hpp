#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass Action_Spell_Repeat_Start_IceSpike_Mod_02.Action_Spell_Repeat_Start_IceSpike_Mod_02_C
class UAction_Spell_Repeat_Start_IceSpike_Mod_02_C : public UAction_Spell_Repeat_Start_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Repeat_Start_IceSpike_Mod_02_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void Notify_SpellWarmup();
	void ExecuteUbergraph_Action_Spell_Repeat_Start_IceSpike_Mod_02(int32 EntryPoint, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


