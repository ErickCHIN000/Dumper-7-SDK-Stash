#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x860 - 0x774)
// BlueprintGeneratedClass BP_Thumper.BP_Thumper_C
class ABP_Thumper_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_10C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODAudio_WarningLoop;                             // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGenericAITargetComponent*             GenericAITarget;                                   // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Pulse_Thickness_65643E4944BDF75F473635B6BB2F4B52; // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Pulse_Opacity_65643E4944BDF75F473635B6BB2F4B52; // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Pulse_Radius_65643E4944BDF75F473635B6BB2F4B52; // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Pulse__Direction_65643E4944BDF75F473635B6BB2F4B52; // 0x7B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Pulse;                                    // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ThumperUpdateHandle;                               // 0x7C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RegenerationRadius;                                // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        SpawnedEnemies;                                    // 0x7D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        EnemySpawnRadius;                                  // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAISetupEnum>                  SpawnPool;                                         // 0x7E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                           ResourceCountDifficultyCurve;                      // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDifficultyFactor;                             // 0x800(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnedLandSharkCount;                             // 0x804(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ElapsedSpawnCount;                                 // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           EventDurationDifficultyCurve;                      // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CooldownWaveCount;                                 // 0x818(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsThumperActive;                                   // 0x81C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_10DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReplicatedProgressPercent;                         // 0x820(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReplicatedMissingResourceCount;                    // 0x824(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MapSearchArea_Custom_C*            MapSearchArea;                                     // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReplicatedNodesToRegenCount;                       // 0x830(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumSpawnsSinceLastLandShark;                       // 0x834(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageSinceLastActivation;                         // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeactivationDamageThreshold;                       // 0x83C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventCompletionPercent;                            // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EventElapsedTime;                                  // 0x844(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOrchestrationEventsEnum              Event_to_Check;                                    // 0x848(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          DifficultyUpdateTimer;                             // 0x858(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Thumper_C* GetDefaultObj();

	void GetTooltipRenderLocation(const struct FHitResult& InteractableHit, struct FVector* WorldLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void GetTooltipClassOverride(TSoftClassPtr<class UHuntingWidget>* ClassOverride);
	float GetTotalEventTime(float CallFunc_GetFloatValue_ReturnValue);
	float GetRemainingTime(float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void IsInCaveOrWater(class FText* Message, bool* Placeable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void TickUpdateSpawnerDifficulty(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetNearbyPlayersAtLocation_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnSpawnedActorDeath(class UActorState* ActorState, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RefreshState(bool Active, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_IsInCaveOrWater_Message, bool CallFunc_IsInCaveOrWater_Placeable, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UDeployableSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1);
	void CompleteThumperEvent(class UDeployableSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnBecomeInteractedWith(bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateResourceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_IsThumperActive(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_IsServer_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetupSpawnerDifficulty(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetTotalConsumedVoxelResourceAroundLocation_VoxelNodeCount, int32 CallFunc_GetTotalConsumedVoxelResourceAroundLocation_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void GetNewAIToSpawn(const struct FVector& AtLocation, struct FAISetupEnum* AI_ToSpawn, struct FEpicCreaturesRowHandle* EpicCreature, struct FTransform* SpawnTransform, const struct FEpicCreaturesRowHandle& OutEpicCreature, int32 TotalSpawnWeights, TMap<struct FAISetupEnum, int32> SpawnWeights, int32 MaximumLandSharkCount, int32 WeightedListUID, const struct FAISetupEnum& SpawnType, const struct FVector& SpawnScale, enum class EMissionDifficulty Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, const struct FAISetupEnum& Temp_struct_Variable, const struct FAISetupEnum& Temp_struct_Variable_1, const struct FAISetupEnum& Temp_struct_Variable_2, enum class EMissionDifficulty Temp_byte_Variable_1, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, int32 Temp_int_Variable_5, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Variable_6, const struct FAISetupEnum& CallFunc_NameToStruct_ReturnValue, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, enum class EMissionDifficulty Temp_byte_Variable_2, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, bool K2Node_SwitchRowEnum_CmpSuccess, enum class EMissionDifficulty Temp_byte_Variable_3, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float Temp_float_Variable_1, int32 Temp_int_Variable_15, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable_2, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FAISetupEnum>& CallFunc_Map_Keys_Keys, bool CallFunc_RemoveList_ReturnValue, const struct FAISetupEnum& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_StructToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_AddElement_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float Temp_float_Variable_3, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, float Temp_float_Variable_4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue_1, float K2Node_Select_Default_1, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue_2, float CallFunc_Lerp_ReturnValue_1, int32 CallFunc_Round_ReturnValue_1, int32 K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 K2Node_Select_Default_3, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void Timeline_Pulse__FinishedFunc();
	void Timeline_Pulse__UpdateFunc();
	void Timeline_Pulse__Audio_Pulse__EventFunc();
	void OnNotifyEnd_E61ED4AE4E49330D4A3034A4C65BEFC5(class FName NotifyName, class UAnimNotify* Notify);
	void OnNotifyBegin_E61ED4AE4E49330D4A3034A4C65BEFC5(class FName NotifyName, class UAnimNotify* Notify);
	void OnInterrupted_E61ED4AE4E49330D4A3034A4C65BEFC5(class FName NotifyName, class UAnimNotify* Notify);
	void OnBlendOut_E61ED4AE4E49330D4A3034A4C65BEFC5(class FName NotifyName, class UAnimNotify* Notify);
	void OnCompleted_E61ED4AE4E49330D4A3034A4C65BEFC5(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveBeginPlay();
	void UpdateThumperProgress();
	void MULTI_ThumperCompleteEffects();
	void TrySpawnHostiles();
	void OnEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void EnergyNetworkStateUpdate(bool Active);
	void OnCurtainRaised();
	void RadiusPulseEffect();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnActorDamaged(const struct FIcarusDamagePacket& DamagePacket);
	void MULTI_DamagedEffects();
	void SetWarningBeepEnabled(bool Enabled);
	void ExecuteUbergraph_BP_Thumper(int32 EntryPoint, class UAnimNotify* Temp_object_Variable, class FName Temp_name_Variable, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, class UObject* Temp_wildcard_Variable, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, const struct FMapIconsRowHandle& Temp_struct_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsTargetAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, int32 Temp_int_Variable_1, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FAISetupEnum& CallFunc_GetNewAIToSpawn_AI_ToSpawn, const struct FEpicCreaturesRowHandle& CallFunc_GetNewAIToSpawn_EpicCreature, const struct FTransform& CallFunc_GetNewAIToSpawn_SpawnTransform, const struct FAISetupRowHandle& CallFunc_StructToRowHandle_ReturnValue, class AActor* CallFunc_SpawnNewAI_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UActorState* CallFunc_GetAIActorState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetRandomAliveNearbyPlayer_Player, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_Event_Active, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FMapSearchAreaRowHandle& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MapSearchArea_Custom_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, float CallFunc_Divide_FloatFloat_ReturnValue, enum class ERollResult CallFunc_BP_RollChance_Paths, float CallFunc_Lerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FIcarusDamagePacket& K2Node_CustomEvent_DamagePacket, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool K2Node_CustomEvent_Enabled, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_GetTotalEventTime_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9);
};

}


