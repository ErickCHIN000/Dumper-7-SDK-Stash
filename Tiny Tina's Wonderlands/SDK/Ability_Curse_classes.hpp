#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x16C - 0x110)
// BlueprintGeneratedClass Ability_Curse.Ability_Curse_C
class UAbility_Curse_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter*                         Owner;                                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           SpellMod;                                          // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_NovaPulse;                                   // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPChar_Enemy_C*                       Target;                                            // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseComp;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           BuffAudioStart;                                    // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           BuffAudioStop;                                     // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                BuffAudioLoop;                                     // 0x150(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SpellTimerDuration;                                // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Curse_C* GetDefaultObj();

	void ApplyEffect();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnActivated();
	void ExecuteUbergraph_Ability_Curse(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetSpellDuration_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, float CallFunc_GetSpellDuration_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class UGbxAction* CallFunc_K2Play_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
};

}


