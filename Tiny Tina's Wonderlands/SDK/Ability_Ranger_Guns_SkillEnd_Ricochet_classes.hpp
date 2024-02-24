#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x2C0 - 0x198)
// BlueprintGeneratedClass Ability_Ranger_Guns_SkillEnd_Ricochet.Ability_Ranger_Guns_SkillEnd_Ricochet_C
class UAbility_Ranger_Guns_SkillEnd_Ricochet_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        ExplosionDamageScalar;                             // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ranger_Wards_SkillEnd_Ricochet; // 0x1A8(0x28)(None)
	struct FVector                               NewOrigin;                                         // 0x1D0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        NearbyTargets;                                     // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                NewTarget;                                         // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       Query_NearbyTargets;                               // 0x1F8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                NewOriginActor;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProcChance;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagePercent;                                     // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Ranger_Guns_SkillEnd_Ricochet_C* GetDefaultObj();

	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void CE_Ench_Caused_Damange(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Ranger_Guns_SkillEnd_Ricochet(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle2, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, float CallFunc_EvaluateAttributeInitializer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


