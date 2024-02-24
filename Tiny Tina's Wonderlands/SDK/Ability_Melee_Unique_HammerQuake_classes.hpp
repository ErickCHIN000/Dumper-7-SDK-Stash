#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x350 - 0x198)
// BlueprintGeneratedClass Ability_Melee_Unique_HammerQuake.Ability_Melee_Unique_HammerQuake_C
class UAbility_Melee_Unique_HammerQuake_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FRandomStream                         RandStream;                                        // 0x1A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       EnvQuery_SpawnLocs;                                // 0x1A8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        MaxTargets;                                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EnvQuery_Targets;                                  // 0x268(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        Targets;                                           // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        InDamage;                                          // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 TantrumRadiusHandle;                               // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Melee_Unique_HammerQuake_C* GetDefaultObj();

	void CleanupHiltMod();
	void RunQuery_Targets();
	void SpawnHammerQuakeProxMine(const struct FVector& NewLocation);
	void RunQuery_Locations();
	void DoHiltMod_XHit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnMeleeXHit_HiltMod(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Melee_Unique_HammerQuake(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, const struct FVector& K2Node_CustomEvent_NewLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FVector>& CallFunc_RunEnvQueryForAllLocations_ResultLocations, bool CallFunc_RunEnvQueryForAllLocations_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UGbxDamageType* K2Node_Event_DamageType1, class AActor* K2Node_Event_DamagedActor1, const struct FCausedDamageDetails& K2Node_Event_Details1, int32 CallFunc_Array_Length_ReturnValue1, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, class AActor* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


