#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13E (0x270 - 0x132)
// BlueprintGeneratedClass Ability_All_Amulet_Barboload.Ability_All_Amulet_Barboload_C
class UAbility_All_Amulet_Barboload_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_42E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Amulet_SacSkeep; // 0x140(0x28)(None)
	class AOakCharacter*                         Character;                                         // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PincushionStacks;                                  // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Damaged_Target;                                    // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                GearOwner;                                         // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       SpineTargetEQS;                                    // 0x188(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        SpineTargets;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        TargetedProjCount;                                 // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageDealt;                                       // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Crossbolt_Explosion_Audio;                         // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RefundReductionAmt;                                // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimerDuration;                                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChildProjScalar;                                   // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RefundPercent;                                     // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_All_Amulet_Barboload_C* GetDefaultObj();

	void RefundAmmo(int32 AmountToRefund);
	void CountPincushion(class AActor* Damage_Instigator, float Damage, class UGbxDamageType* Damage_Type, class UDamageSource* Damage_Source, class AActor* Damaged_Actor, const struct FCausedDamageDetails& Details);
	void ShootChildProjectiles(const struct FCausedDamageDetails& Deatils);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Amulet_Barboload(int32 EntryPoint, class AActor* K2Node_CustomEvent_Damage_Instigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_Damage_Type, class UDamageSource* K2Node_CustomEvent_Damage_Source, class AActor* K2Node_CustomEvent_Damaged_Actor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, int32 K2Node_CustomEvent_AmountToRefund, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAbilityTimerActive_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCausedDamageDetails& K2Node_CustomEvent_Deatils, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetStatusEffectInstancesByGameplayTag_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FCriticalHitDamageOverrides& K2Node_MakeStruct_CriticalHitDamageOverrides, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue1, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


