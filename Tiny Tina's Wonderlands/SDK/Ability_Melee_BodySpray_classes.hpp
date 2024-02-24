#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D (0x1C5 - 0x198)
// BlueprintGeneratedClass Ability_Melee_BodySpray.Ability_Melee_BodySpray_C
class UAbility_Melee_BodySpray_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              NewVar_0_0;                                        // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 HealDurationHandle;                                // 0x1A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HealDuration;                                      // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnemyHasStatus;                                    // 0x1C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Melee_BodySpray_C* GetDefaultObj();

	void OnActivated();
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Melee_BodySpray(int32 EntryPoint, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery1, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery2, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery3, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery4, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class UOakStatusEffectManagerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue1, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue2, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue3, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue4, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


