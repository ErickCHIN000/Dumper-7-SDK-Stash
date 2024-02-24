#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x670 - 0x3C0)
// BlueprintGeneratedClass AdvancedEnemySpawner_StormMode.AdvancedEnemySpawner_StormMode_C
class AAdvancedEnemySpawner_StormMode_C : public AAdvancedEnemySpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         EnemyNoSpawn;                                      // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CustomSpawner;                                     // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoPillarSpawner;                                   // 0x3CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3026[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, float>                   EnemyPool;                                         // 0x3D0(0x50)(Edit, BlueprintVisible)
	float                                        Spawn_pool_Percetange;                             // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetEnemyPoolPreset;                                // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_StormModeArea                AreaEnemyPoolPreset;                               // 0x425(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_302B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomStream                         MySeed;                                            // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	int32                                        SelectedEnemy;                                     // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3030[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Rune_Container_C*                  RuneContainer;                                     // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vampire_CanKick;                                   // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                         Vampire_RandomizeDiving;                           // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3037[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Vampire_Diving_;                                   // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vampire_Diving;                                    // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Vampire_KickAsFirstAttack;                         // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Vampire_StartWithPounce;                           // 0x44A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Vampire_UseEatingAnimation;                        // 0x44B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        LightBrigand_WeaponIndex;                          // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LightBrigand_SkeletalIndex;                        // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLightBrigSitting;                                // 0x454(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsLightBrigEatingRat;                              // 0x455(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3045[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          LightBrigand_BeforeAggroPose;                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightBrigand_AggroMontage;                         // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_RandomizeSkeletal;                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3051[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         LightBrigand_SkeletalMesh;                         // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_FirstAttackIsAmbush;                  // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3054[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightBrigand_AggroPosePlayRate;                    // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightBrigand_AggroNearbyBrigandsRadius;            // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_RandomizeWeapon;                      // 0x484(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBrigandWeapons                   LightBrigand_Weapon;                               // 0x485(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_RandomizeHelmet;                      // 0x486(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LightBrigand_RandomizeFireCultHelmet;              // 0x487(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBrigandHelmetMeshes              LightBrigand_Helmet;                               // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightBrigand_RandomizePaleSkin;                    // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LightBrigand_UsePaleSkin;                          // 0x48A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3063[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightBrigand_SecondAggroDistance;                  // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightBrigand_EnemyVisionRadius;                    // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeavyBrigand_UseBeakMask;                          // 0x494(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsHeavyBrigSitting;                                // 0x495(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          HeavyBrigand_BeforeAggroPose;                      // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          HeavyBrigand_AggroMontage;                         // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeavyBrigand_FirstAttackIsAmbush;                  // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3072[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeavyBrigand_SecondAggroDistance;                  // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeavyBrigand_AggroPosePlayRate;                    // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3073[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        PatrolOnlyIf;                                      // 0x4B8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                SpawnedEnemyStringName;                            // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Underdog_IsMelee;                                  // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3077[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Underdog_ThrowRange;                               // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationRate;                                      // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_307A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_TriggerBox_Spawner_C*>      StormModePillarTriggers;                           // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class UClass*, float>                   FallgrimEnemyPoolPreset;                           // 0x4F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, float>                   FireTempleEnemyPoolPreset;                         // 0x548(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, float>                   CryptEnemyPoolPreset;                              // 0x598(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, float>                   CathedralEnemyPoolPreset;                          // 0x5E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        GrabSpawnTriggers_MaxDistance;                     // 0x638(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3081[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Rune_Container_C*                  RuneContainer_Debug;                               // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Rune_Container_C*                  RuneContainerAlt_Debug;                            // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrabSpawnTriggers_MinDistance;                     // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomBillboard;                                // 0x654(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Billboard;                                         // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeedID;                                            // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_308F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PatrollingSpline_C*                SpawnedSplinePatrolling;                           // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAdvancedEnemySpawner_StormMode_C* GetDefaultObj();

	void AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade);
	void AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void AddSplinePatrollingActor(bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PatrollingSpline_C* CallFunc_FinishSpawningActor_ReturnValue);
	void FrogWarning(class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void GuitarBrigandWarning(class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void DebugNoPillarSpawner(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void CheckIfVampire(bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void CheckIfUnderdog(bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void CheckIfBorisEnemy(bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void ShadowKnightWarning(class UClass* Temp_class_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void DebugEnemyPool(float Local_Z, const TArray<class UClass*>& Local_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue);
	void DebugPatrollingSpline(const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTextRenderComponent* CallFunc_AddComponent_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue);
	void GetSpawnPercentageTotal(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<float>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void NoPillarNotEnabledWarning(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsNoPillarSpawner__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void NoPillarNotCheckedWarning(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsNoPillarSpawner__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void NoPillarNoTriggerWarning(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsNoPillarSpawner__ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsNoPillarSpawner_(bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CheckForNearbyTriggers(class AActor* Local_Actor, const TArray<class ABP_TriggerBox_Spawner_C*>& Local_SpawnersToAdd, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_TriggerBox_Spawner_C* K2Node_DynamicCast_AsBP_Trigger_Box_Spawner, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class ABP_TriggerBox_Spawner_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue);
	void IsSitting(bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* K2Node_Select_Default);
	void Set_Enemy_Pool_Preset(enum class Enum_StormModeArea Temp_byte_Variable, TMap<class UClass*, float> K2Node_Select_Default);
	void Enemy_SpawnOrEnable(bool Spawn_, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_ReEnable_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1);
	void Enemy_DeAggro(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_DeAggroPlayer_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void DespawnDebug_Add(class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue);
	void SpawnDebug_Add(class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue);
	void DecreaseRotationRate();
	void DebugSpawnedEnemyString(const class FString& CallFunc_GetDisplayName_ReturnValue);
	void DisableDespawnIfFar();
	void Billboard_Spawner(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_2, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2);
	void Billboard_B(bool CallFunc_IsValid_ReturnValue);
	void Billboard_A(bool CallFunc_IsValid_ReturnValue);
	void CheckIfVampireShouldDive(bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue);
	void CheckIfRangedBrigand(bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void RandomizeLightBrigandType(int32 Temp_int_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, class USkeletalMesh* Temp_object_Variable_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, class USkeletalMesh* K2Node_Select_Default, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue_2);
	void CheckIfShouldPatrol(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnRandomizedEnemy(float Delay, bool CallFunc_Not_PreBool_ReturnValue);
	void AskGameModeToSpawn(bool* bShouldSpawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool GetEnemyDeathState(bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void RandomizeEnemy(const TArray<float>& Local_Values, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, TArray<float>& CallFunc_Map_Values_Values, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Randomizer_FloatToInt_Result);
	void UserConstructionScript();
	void SetObjectMainChance_(float Rune_Chance, float Item_Chance);
	void RemoveObject();
	void SetPillarType(enum class Enum_PillarType Type);
	void SetObjectAsTaken();
	void ReceiveBeginPlay();
	void InitiliazeSeed(int32 SeedID, int32 InitialSeed);
	void OnEnemyDeath();
	void EnemySpawned();
	void ResetSpawner();
	void RandomizedEnemyStartSpawn(float Delay);
	void BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnDespawnEvent();
	void BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Spawner_DeAggroEnemy();
	void Spawner_ReEnableEnemy();
	void SpawnOnCharacterFullySpawned();
	void Enemy_StartSpawnOnOverlap(float Delay);
	void ReRandomizeEnemy(int32 NewSeed, float Delay);
	void GrabNearbySpawnTriggers();
	void ExecuteUbergraph_AdvancedEnemySpawner_StormMode(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_Delay_1, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasCharacterFullySpawned_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 Temp_int_Array_Index_Variable_1, class ABP_TriggerBox_Spawner_C* CallFunc_Array_Get_Item, bool CallFunc_IsOverlappingActor_ReturnValue_1, float K2Node_CustomEvent_Delay, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class ATriggerBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, TScriptInterface<class IBPI_StormModeSpawner_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Spawner, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4);
};

}


