#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C0 (0x9B8 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_GunMage_Polymorph.ActionSkill_GunMage_Polymorph_C
class UActionSkill_GunMage_Polymorph_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       FindPolymorphTargetSpawnLocation;                  // 0x500(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EQSFindPolymorphTarget;                            // 0x5B8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FailedToFindTarget;                                // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PolymorphTarget;                                   // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADrone_GunMage_Polymorph_C*            PolymorphDrone;                                    // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       FindGroundNearDrone;                               // 0x688(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FoundImmuneTarget;                                 // 0x740(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_GunMage_Polymorph; // 0x748(0x28)(None)
	bool                                         KilledPolymorphTarget;                             // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ImmuneDamage;                                      // 0x778(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       EQSPolymorphSpellTarget;                           // 0x790(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UGbxSkeletalMeshComponent*             Idol1st;                                           // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Idol3rd;                                           // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F05[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            IdolOrgTransform1st;                               // 0x860(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            IdolOrgTransform3rd;                               // 0x890(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInterface*>            IdolOrgMaterials1st;                               // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            IdolOrgMaterials3rd;                               // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBPEventHub_PlayerCharacter_C*         EventHub;                                          // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetupIdol;                                         // 0x8E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2F1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQS_FindTargetInArea;                              // 0x8F0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        AvailableSpellTargets;                             // 0x9A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UActionSkill_GunMage_Polymorph_C* GetDefaultObj();

	void PolymorphSetFailedToFindTarget(bool* Res);
	void PolymorphFindTarget(bool* Res, class AActor** PolymorphTarget, bool CallFunc_UnpauseActionSkillDuration_Res, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_SetupIdol();
	void ResetIdol(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1);
	void InitIdol(const struct FVector& IdolLocation, const struct FRotator& IdolRotation, const struct FVector& IdolScale, int32 Temp_int_Variable, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue1, int32 Temp_int_Variable1, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_3rd, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1);
	void OnPolymorphTargetDeath();
	void InitializeSkill(bool CallFunc_PauseActionSkillDuration_Res);
	float GetCooldownRestartPercent(bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable1, float Temp_float_Variable1, float Temp_float_Variable2, float K2Node_Select_Default, float K2Node_Select1_Default);
	void GetPolyMorphTargetSpawnLocation(class AActor* Target, struct FTransform* Res, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void OnStartActionAbility();
	void StopPolymoprhEffect();
	void OnStopActionAbility();
	void InitActionSkillResourcePools();
	void ResetStopPolymorphGate();
	void PolymorphSpawnDrone();
	void OnActivated();
	void OnDeactivated();
	void OnResumed();
	void OnPaused();
	void OnCoolingDown();
	void PolymorphCastSpell(class AActor* ImmuneTarget);
	void ExecuteUbergraph_ActionSkill_GunMage_Polymorph(int32 EntryPoint, const struct FRangedDistanceOverrides& K2Node_MakeStruct_RangedDistanceOverrides, TArray<struct FGbxActionRegister>& K2Node_MakeArray_Array, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess2, class UTeam* CallFunc_GetTeam_ReturnValue, int32 CallFunc_AddSpellweavingStacks_Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_UnpauseActionSkillDuration_Res, bool CallFunc_IsAlive_ReturnValue, bool Temp_bool_IsClosed_Variable, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetPolyMorphTargetSpawnLocation_Res, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADrone_GunMage_Polymorph_C* CallFunc_FinishSpawningActor_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess3, TArray<struct FGbxActionRegister>& K2Node_MakeArray_Array1, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<struct FGbxActionRegister>& CallFunc_SetIntGbxActionRegister_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1, TArray<struct FGbxActionRegister>& CallFunc_SetIntGbxActionRegister_ReturnValue1, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue2, TArray<struct FGbxActionRegister>& CallFunc_SetObjectGbxActionRegister_ReturnValue3, class UGbxAction* CallFunc_K2Play_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_HasPlayerClass_Res, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess5, enum class EOakPlayerClass CallFunc_GetPrimaryPlayerClass_Res, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess6, const class FString& CallFunc_Concat_StrStr_ReturnValue1, enum class EOakPlayerClass CallFunc_GetSecondaryPlayerClass_Res, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, class AOakCharacter* K2Node_DynamicCast_AsOak_Character1, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsValid_ReturnValue1, class AActor* K2Node_CustomEvent_ImmuneTarget, const struct FHitResult& Temp_struct_Variable1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USpellDuplicationComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess8, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_Not_PreBool_ReturnValue1, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
};

}


