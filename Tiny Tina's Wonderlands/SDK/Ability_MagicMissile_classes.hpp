#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x2F0 - 0x110)
// BlueprintGeneratedClass Ability_MagicMissile.Ability_MagicMissile_C
class UAbility_MagicMissile_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       MagicMissileEQS;                                   // 0x118(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        TargetList;                                        // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        TargetIndex;                                       // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SearchResults;                                     // 0x1E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_MagicMissile; // 0x1E8(0x28)(None)
	class AOakCharacter_Player*                  OwningCharacter;                                   // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           OwningSpellMod;                                    // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RepeatTime;                                        // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HitActors;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FEnvQueryParams                       MagicMissileBoilingEQS;                            // 0x238(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_MagicMissile_C* GetDefaultObj();

	void IsOwningSpellMod(struct FCausedDamageDetails& CausedDamageDetails, bool* Res, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void IsValidMagicMissileTarget(int32 Index, bool* Res, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SpawnOverloadProjectile(class AActor* Enemy, bool* Res, float SpawnSpreadAngle, const struct FVector& SpawnDirection, const struct FVector& SpawnLocation, class FName TargetSocket, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, uint8 CallFunc_Conv_IntToByte_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, float CallFunc_GetSpellForce_ReturnValue, class UClass* CallFunc_GetSpellDamageType_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_GetSpellModDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2);
	void FindNewMagicMissileTargets(TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void GetMagicMissileTarget(bool* Res, class AActor** Target, bool CallFunc_GetMagicMissileTarget_Res, class AActor* CallFunc_GetMagicMissileTarget_Target, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidMagicMissileTarget_Res, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnActivated();
	void OnSpellCast_FindNewTargets(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void FireMissiles();
	void ContinueFiring();
	void Event_CausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void DealtDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_MagicMissile(int32 EntryPoint, int32 Temp_int_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_DoesSpellHavePart_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SpawnOverloadProjectile_Res, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details1, int32 CallFunc_Array_Length_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsOwningSpellMod_Res, bool CallFunc_K2_EvaluateConditionType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2);
};

}


