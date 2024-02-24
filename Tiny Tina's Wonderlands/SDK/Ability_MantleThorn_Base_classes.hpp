#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x168 - 0x110)
// BlueprintGeneratedClass Ability_MantleThorn_Base.Ability_MantleThorn_Base_C
class UAbility_MantleThorn_Base_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SelectiveAmnesia; // 0x118(0x28)(None)
	class AOakCharacter*                         AbilityOwner;                                      // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedTarget;                                     // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    PinCushionsStacks;                                 // 0x150(0xC)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3EF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffectData*                     StatusEffect;                                      // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_MantleThorn_Base_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void OnCauseDamage(class AActor* Damage_Instigator, float Damage, class UGbxDamageType* Damage_Type, class UDamageSource* Damage_Source, class AActor* Damaged_Actor, const struct FCausedDamageDetails& Details);
	void OnKill();
	void OnCrit(const struct FCausedDamageDetails& Details, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource);
	void ExecuteUbergraph_Ability_MantleThorn_Base(int32 EntryPoint, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* K2Node_CustomEvent_Damage_Instigator, float K2Node_CustomEvent_Damage1, class UGbxDamageType* K2Node_CustomEvent_Damage_Type, class UDamageSource* K2Node_CustomEvent_Damage_Source, class AActor* K2Node_CustomEvent_Damaged_Actor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, const struct FCriticalHitDamageOverrides& K2Node_MakeStruct_CriticalHitDamageOverrides, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetStatusEffectInstancesByGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGbxAttributeFloat& CallFunc_MakeGbxAttributeFloat_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_BooleanAND_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


