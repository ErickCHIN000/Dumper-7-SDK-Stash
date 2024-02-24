#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x160 - 0x110)
// BlueprintGeneratedClass Ability_CapeOfTides.Ability_CapeOfTides_C
class UAbility_CapeOfTides_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SelectiveAmnesia; // 0x118(0x28)(None)
	class AOakCharacter*                         AbilityOwner;                                      // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnLocation;                                     // 0x148(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_Soaked_Duration_Modifier;                      // 0x154(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_CapeOfTides_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void Caused_Damage(class AActor* Instigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* Damage_Source, class AActor* Damaged_Target, const struct FCausedDamageDetails& Details);
	void Audio_Explosion(const struct FVector& Location);
	void ExecuteUbergraph_Ability_CapeOfTides(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Location, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_Damage_Source, class AActor* K2Node_CustomEvent_Damaged_Target, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FHitResult& Temp_struct_Variable, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


