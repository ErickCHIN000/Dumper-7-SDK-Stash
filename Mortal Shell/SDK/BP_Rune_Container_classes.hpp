#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2CE (0x5E0 - 0x312)
// BlueprintGeneratedClass BP_Rune_Container.BP_Rune_Container_C
class ABP_Rune_Container_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_19EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene_FogChest;                                    // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Stand;                                          // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Godray;                                         // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Fire;                                        // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Fire;                                    // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Fire;                                            // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_1;                                         // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_2;                                         // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Cube_3;                                         // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender_Debug;                                  // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPaperSpriteComponent*                 PaperSprite_Debug;                                 // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URuneRandomizerComponent_C*            RuneSystemComponent;                               // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Pillar_EnemyToFree_Alpha_00FC91674E5C17772BF0CE8C3EEE44AA; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Pillar_EnemyToFree__Direction_00FC91674E5C17772BF0CE8C3EEE44AA; // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Pillar_EnemyToFree;                       // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DisablePillarAnim_Alpha_BFBD232442E2ABD0FB63949E57C0CD04; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_DisablePillarAnim__Direction_BFBD232442E2ABD0FB63949E57C0CD04; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_DisablePillarAnim;                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Delay_Alpha_26E4BA134413E51BEBF2B5B2AFF1453E; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Delay__Direction_26E4BA134413E51BEBF2B5B2AFF1453E; // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Delay;                              // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_1_Alpha_FEA067604ED2E7CF0196B2A04E97A3F9; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_1__Direction_FEA067604ED2E7CF0196B2A04E97A3F9; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_1;                         // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_2_Alpha_FD22CA294E4AB0F728CDB9BEF0451BF2; // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_2__Direction_FD22CA294E4AB0F728CDB9BEF0451BF2; // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_2;                         // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Cubes_Movement_3_Alpha_DD5E6AA6485A060A2647CFA1452EEE74; // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Cubes_Movement_3__Direction_DD5E6AA6485A060A2647CFA1452EEE74; // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Cubes_Movement_3;                         // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeArea                Area;                                              // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_PillarType                   Type;                                              // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCryptSnowMat_;                                  // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasFogChest_;                                      // 0x3EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFog_Chest_StormMode_C*                BP_FogChest;                                       // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugType;                                         // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInfinite;                                        // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Animated;                                          // 0x3FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SpotLight;                                         // 0x3FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Width;                                             // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Length;                                            // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Guarded;                                     // 0x404(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Currency;                                    // 0x414(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Free;                                        // 0x424(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GodRay_CurrentBrightness;                          // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeDistance;                                      // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandomTime;                                        // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*              Dynamic_material;                                  // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysSpawnEnemies;                                // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NoEnemiesIfPillarRemoved;                          // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ACF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAdvancedEnemySpawner_StormMode_C*> Spawners;                                          // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	bool                                         UseSpawnersAlt;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAdvancedEnemySpawner_StormMode_C*> Spawners_Alt;                                      // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	float                                        SpawnersAlt_Chance;                                // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         MySeed;                                            // 0x484(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	uint8                                        Pad_1AEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_StormModeProgress, int32> PillarCostPerProgress;                             // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EnemiesCounter;                                    // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDelay;                                        // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AAdvancedEnemySpawner_C>> SpawnersToDisableIfGuarded;                        // 0x4E8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class AAdvancedEnemySpawner_C*>       SpawnersToDisableIfGuarded_SameLevel;              // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class FString>                        DisableSpawnersWhenGuarded_Debug;                  // 0x508(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AEnemyCharacter_C>> EnemiesToDestroyIfGuarded;                         // 0x518(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AAdvancedEnemySpawner_C>> SpawnersToAlwaysDisable;                           // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ABP_TriggerBox_Spawner_C*>      SpawnersTriggers;                                  // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	bool                                         Rot_AlignCubes;                                    // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rot_Cube_1;                                        // 0x54C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Rot_Cube_2;                                        // 0x558(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Rot_Cube_3;                                        // 0x564(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Fire_Color_Free;                                   // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Fire_Color_Guarded;                                // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Fire_Color_Currency;                               // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Pillar_Interaction;                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Pillar_Fire;                                 // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Pillar_RedToWhite;                           // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHiddenInGame;                                    // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AStaticMeshActor>> StaticMeshToRemove;                                // 0x5C0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class AActor>>         ActorsToRemove;                                    // 0x5D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Rune_Container_C* GetDefaultObj();

	void AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune);
	void AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade);
	void AskRandomUpgrade(struct FStruct_Rune* Upgrade);
	void HidePillar();
	void NoSpawnTriggerWarning(const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void RemoveActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void RemoveStaticMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSoftObjectPtr<class AStaticMeshActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void ShowHidePillar(bool CallFunc_Not_PreBool_ReturnValue);
	void RemoveFogChest(bool CallFunc_IsValid_ReturnValue);
	void SpawnFogChest(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFog_Chest_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue);
	void DisableAdvancedSpawner(class AAdvancedEnemySpawner_C* Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
	void Pillar_AlignRot(float Alpha, const struct FRotator& Rot, class USceneComponent* Component, float Yaw, const struct FRotator& CallFunc_AddCubeRot_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void Sound_FadeOut_FireAudio();
	void Sound_FadeIn_FireAudio();
	void SetPillarGodRayandFireOpacity(float Alpha, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void AddRandomRotToCubes(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2);
	void SetFireColor(const struct FLinearColor& Local_Color, enum class Enum_PillarType Temp_byte_Variable, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void SoundPillarCube(class USoundBase* Sound, class USceneComponent* Component, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void Cube3CurrentRot();
	void Cube2CurrentRot();
	void Cube1CurrentRot();
	void GetCubesCurrentRot();
	struct FRotator AddCubeRot(float Alpha, const struct FRotator& Rot, float Yaw, const struct FRotator& Temp_struct_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue);
	void RandomizeAltSpawners(bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue);
	void HideEnemies(int32 Temp_int_Array_Index_Variable, TSoftObjectPtr<class AEnemyCharacter_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HideSpawners(int32 Temp_int_Array_Index_Variable, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DestroyEnemyWhenSpawned(class AAdvancedEnemySpawner_C* Spawner, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CountKilledEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GetEnemyDeathState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Disable_Spawners();
	int32 GetCurrencyAmount(class FName CallFunc_MakeLiteralName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1);
	void DestroyPlacedInMapEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AEnemyCharacter_C> CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DisableSpawnersIfGuarded(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item, class AAdvancedEnemySpawner_C* CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void DestroyEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SimpleEnable();
	void SimpleDisable();
	void SetHardReferences(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, class ABP_TriggerBox_Spawner_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2);
	void GodRay(enum class Enum_PillarType Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void IncrementAreaProgress(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess);
	void DisableRuneContainer();
	void OnActorUsed(class APlayerController* Controller, bool* Success, int32 CallFunc_GetCurrencyAmount_ReturnValue, int32 CallFunc_GetCurrencyAmount_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Timeline_Cubes_Movement_3__FinishedFunc();
	void Timeline_Cubes_Movement_3__UpdateFunc();
	void Timeline_Cubes_Movement_3__Sound__EventFunc();
	void Timeline_Cubes_Movement_2__FinishedFunc();
	void Timeline_Cubes_Movement_2__UpdateFunc();
	void Timeline_Cubes_Movement_2__Sound__EventFunc();
	void Timeline_Cubes_Movement_1__FinishedFunc();
	void Timeline_Cubes_Movement_1__UpdateFunc();
	void Timeline_Cubes_Movement_1__Sound__EventFunc();
	void Timeline_Cubes_Delay__FinishedFunc();
	void Timeline_Cubes_Delay__UpdateFunc();
	void Timeline_DisablePillarAnim__FinishedFunc();
	void Timeline_DisablePillarAnim__UpdateFunc();
	void Timeline_Pillar_EnemyToFree__FinishedFunc();
	void Timeline_Pillar_EnemyToFree__UpdateFunc();
	void InitiliazeSeed(int32 SeedID, int32 InitialSeed);
	void CheckEnemyState();
	void RemoveObject();
	void SetPillarType(enum class Enum_PillarType Type);
	void Test_Type();
	void SetObjectAsTaken();
	void HideNormalSpawners();
	void HideNormalEnemies();
	void CubesAnim_Start();
	void BndEvt__RuneSystemComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID);
	void DisablePillarAnim();
	void Pillar_EnemyToFree();
	void OnRuneContainerUsed();
	void Animation_Cube_2();
	void Animation_Cube_1();
	void Animation_Cube_3();
	void Animation_Cube_Delay();
	void ReceiveBeginPlay();
	void ReRandomizeEnemy(int32 NewSeed, float Delay);
	void SetObjectMainChance_(float Rune_Chance, float Item_Chance);
	void ExecuteUbergraph_BP_Rune_Container(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, enum class Enum_PillarType K2Node_Event_Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrencyAmount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_Rune_Category_Randomizer K2Node_ComponentBoundEvent_Category, class FName K2Node_ComponentBoundEvent_ID, bool CallFunc_Not_PreBool_ReturnValue_3, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_2);
};

}


