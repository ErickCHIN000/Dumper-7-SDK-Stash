#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x170 - 0x110)
// BlueprintGeneratedClass Ability_GarlicBreath.Ability_GarlicBreath_C
class UAbility_GarlicBreath_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter*                         Owner;                                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           SpellMod;                                          // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_Duration;                                    // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnableSpellBasicData              SpellData;                                         // 0x130(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_GarlicBreath_C* GetDefaultObj();

	void StartEffect(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, class AActor* SpellActor, const struct FSpawnableSpellBasicData& SpellData);
	void FireNova();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnActivated();
	void ExecuteUbergraph_Ability_GarlicBreath(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* K2Node_CustomEvent_SpellActor, const struct FSpawnableSpellBasicData& K2Node_CustomEvent_SpellData, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


