#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x138 - 0x110)
// BlueprintGeneratedClass Ability_Swordsplosion.Ability_Swordsplosion_C
class UAbility_Swordsplosion_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	TArray<class AActor*>                        AttachedActors;                                    // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AOakWeapon*                            OwnerWeapon;                                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  OwnerPlayer;                                       // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Swordsplosion_C* GetDefaultObj();

	void DoSpawnSwordPerTarget(class AActor* Target, int32 NStickiesAttached, const struct FForceSelection& ForceToUse, class AActor* NewTarget, int32 Temp_int_Variable, const struct FForceSelection& Temp_struct_Variable, const struct FForceSelection& Temp_struct_Variable1, const struct FForceSelection& Temp_struct_Variable2, const struct FForceSelection& Temp_struct_Variable3, const struct FForceSelection& Temp_struct_Variable4, const struct FForceSelection& Temp_struct_Variable5, const struct FForceSelection& Temp_struct_Variable6, const struct FForceSelection& Temp_struct_Variable7, const struct FForceSelection& Temp_struct_Variable8, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FHitResult& Temp_struct_Variable9, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FHitResult& Temp_struct_Variable10, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, int32 CallFunc_Clamp_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery1, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FForceSelection& K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue1);
	void OnActivated();
	void SwordsplosionAttachedToCharacter(class AActor* AttachedActor);
	void OpenExplosionGate();
	void CloseExplosionGate();
	void SwordsplosionExternalStartExplosion();
	void IterateSwordTargets();
	void ExecuteUbergraph_Ability_Swordsplosion(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* K2Node_Event_AttachedActor, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_AddUnique_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_Array_Get_Item1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
};

}


