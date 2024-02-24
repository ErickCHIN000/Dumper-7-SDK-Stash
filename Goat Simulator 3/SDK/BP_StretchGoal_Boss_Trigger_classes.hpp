#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A0 (0x4E0 - 0x240)
// BlueprintGeneratedClass BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C
class ABP_StretchGoal_Boss_Trigger_C : public AGGStretchGoalTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ActivePS;                                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ActiveLoop_AC;                                     // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ActivationSound_AC;                                // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     InteractionCapsule;                                // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PadLightPS;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ActivateablePS;                                    // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Lid;                                               // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PlateMesh;                                         // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Portal_Trigger;                                    // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              TriggeredPS;                                       // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpenLid_Timeline_Alpha_CAA40C5F42AECBD33A4B0199E7437B67; // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenLid_Timeline__Direction_CAA40C5F42AECBD33A4B0199E7437B67; // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpenLid_Timeline;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayerEnteredTrigger;                            // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPlayerLeftTrigger;                               // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AGGGoat*>                       GoatsInTrigger;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         CanActivatePortal;                                 // 0x2E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_11D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ABP_TeleportLoc_C>      TeleportLoc;                                       // 0x2E8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGoatTeleported;                                  // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsLocked;                                          // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11D9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Lid2InitTransform;                                 // 0x330(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            Lid2FinalTransform;                                // 0x360(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        LidOpeningDuration;                                // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldShowActiveFX;                                // 0x394(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_11DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInstance>      CircleActiveMaterial;                              // 0x398(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>      CircleInactiveMaterial;                            // 0x3C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>      MiddleInactiveMaterial;                            // 0x3E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>      MiddleActiveMaterial;                              // 0x410(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsCooldownActive;                                  // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownDuration;                                  // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CooldownTimerHandle;                               // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Unlock_SG_Interact_Text;                           // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ThroneRoom_Scanner_C*              ThroneRoomScanner;                                 // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInteracted;                                      // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShouldStretchGoalBeActive;                         // 0x478(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         Can_Be_Interacted_With;                            // 0x479(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EStretchGoalStates                Current_State;                                     // 0x47A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11E3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Open_Boss_Door_Text;                               // 0x480(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                        Replay_Boss_Sequence;                              // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  Sequencer;                                         // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Reopen_Boss_Door_Text;                             // 0x4A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_StretchGoal_Boss_Trigger_C*> Buttons;                                           // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         Is_Playing_Sequence_;                              // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BossPortal_C*                      BossPortal;                                        // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StretchGoal_Boss_Trigger_C* GetDefaultObj();

	bool IsReadyForActivation(bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue_1, bool CallFunc_IsAnyGoalUnlocking_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue_1);
	bool CanBeInteractedWith(class AActor* SourceActor, bool CallFunc_IsReadyForActivation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class FText GetInteractTextTitle(class AGGPlayerController* InteractingPlayerController, float HoldDuration, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_GetRequiredHoldDuration_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2);
	bool Interact(class AActor* SourceActor, float HeldFor, float CallFunc_GetRequiredHoldDuration_ReturnValue, bool CallFunc_CanBeInteractedWith_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void SetCanBeInteractedWith(bool Enabled);
	void OnRep_ShouldStretchGoalBeActive();
	void OnRep_CanActivatePortal();
	void OnRep_ShouldShowActiveFX();
	void OnRep_CanActivateStretchGoal();
	void Set_Can_Activate_SG_Button(bool Should_ActivateSG, bool AnimateLids, bool* WasAlreadyInState, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Set_Activateable_Visuals_SG(bool Activateable, bool AnimateLids, bool ShouldAnimateLids, bool IsActivatable, bool CallFunc_GetIsLoaded_ReturnValue);
	void Update_Active_Status(bool* Active, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetButtonActive(bool NewStatus);
	void SetActiveFXEnabled(bool bEnabled, bool ShouldBeEnabled, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue);
	void UnlockTrigger(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void LockTrigger(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetLidsOpened(bool Open, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ECollisionEnabled K2Node_Select_Default);
	void Set_Activateable_Visuals_Boss(bool PortalActivateable, bool AnimateLids, bool ShouldAnimateLids, bool IsPortalActivatable, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, bool CallFunc_GetIsLoaded_ReturnValue);
	void Set_Triggered_Visuals_Boss(bool Active, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterial* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterial* CallFunc_GetLoadedAsset_ReturnValue_2, bool CallFunc_GetIsLoaded_ReturnValue_2);
	void Set_Can_Activate_Portal_Button(bool CanActivatePortal, bool AnimateLids, bool* WasAlreadyInState, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void DoesTriggerHavePlayer(class AGGGoat* Goat, bool* Has_Player, bool TriggerHasPlayer, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_GetOverlappingComponents_OutOverlappingComponents, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OpenLid_Timeline__FinishedFunc();
	void OpenLid_Timeline__UpdateFunc();
	void OnLoaded_55D6FF4846FB0812D869AC80B7004F02(class UObject* Loaded);
	void OnLoaded_6227C4B049F3B3A07665EE8A836EA64D(class UObject* Loaded);
	void ActivateTriggeredFX();
	void DeactivateTriggeredFX();
	void BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void TeleportPlayer();
	void OpenLidTimeline();
	void CloseLidsTimeline();
	void ReceiveBeginPlay();
	void OnCurrentGoalUpdated(class AGGCastleStretchGoal* UpdatedGoal);
	void SetPlateCircleMaterial(bool ShouldUseActiveMaterial);
	void SetPlateEyeMaterial(bool ShouldUseActiveMaterial);
	void DisableCooldown();
	void ActivateCooldown();
	void PlayActivationSound();
	void SetSounds();
	void PlayActiveLoop();
	void StopActiveLoop();
	void Multicast_SetActiveFXEnabled(bool bEnabled);
	void Multicast_PlayActivationFX();
	void BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Multicast_ReplayBossSequence();
	void OnDoorOpeningSeqFinished();
	void Multicast_PadStepSound();
	void OnCinematicStarted(class ULevelSequencePlayer* Sequence);
	void SeqForAllNearbyPlayers_OnFinished();
	void SeqForAllNearbyPlayers_OnStop();
	void ExecuteUbergraph_BP_StretchGoal_Boss_Trigger(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_HasAuthority_ReturnValue_1, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_TeleportLoc_C* K2Node_DynamicCast_AsBP_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLoadingScreenParameters& K2Node_MakeStruct_LoadingScreenParameters, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTeleportParameters& K2Node_MakeStruct_TeleportParameters, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGCastleStretchGoal* K2Node_CustomEvent_UpdatedGoal, bool K2Node_CustomEvent_ShouldUseActiveMaterial_1, bool K2Node_CustomEvent_ShouldUseActiveMaterial, TSoftObjectPtr<class UMaterialInstance> K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_bEnabled, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_Update_Active_Status_Active, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_3, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_4, bool CallFunc_Update_Active_Status_Active_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UObject* Temp_object_Variable, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, const struct FKeyValueBase& CallFunc_KeyValue_IntToKeyValue_ReturnValue, bool CallFunc_UpdateKeyValueData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FColor& K2Node_MakeStruct_Color, bool CallFunc_Less_IntInt_ReturnValue, const struct FTravelSettings& K2Node_MakeStruct_TravelSettings, bool CallFunc_IsValid_ReturnValue_3, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_1, class AGGGoat* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_HasGatherEventWithID_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AGGGoat* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AGGGoat* Temp_object_Variable_2, bool CallFunc_Array_RemoveItem_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGLevelTravelSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2, bool Temp_bool_Variable_1, TSoftObjectPtr<class UMaterialInstance> K2Node_Select_Default_1, class UObject* Temp_object_Variable_3, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class UObject* K2Node_CustomEvent_Loaded);
	void OnInteracted__DelegateSignature(class AActor* SourceActor);
	void OnGoatTeleported__DelegateSignature(class AGGGoat* Goat);
	void OnPlayerLeftTrigger__DelegateSignature(class AGGGoat* Goat);
	void OnPlayerEnteredTrigger__DelegateSignature(class AGGGoat* Goat);
};

}


