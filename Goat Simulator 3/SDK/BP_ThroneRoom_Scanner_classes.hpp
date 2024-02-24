#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x2E0 - 0x230)
// BlueprintGeneratedClass BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C
class ABP_ThroneRoom_Scanner_C : public AGGThroneRoomScanner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       ScanSound;                                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ActivateScanSound;                                 // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ActivateParticleLoc;                               // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ThroneRoomDoorPlate;                               // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               ScannedGoatRef;                                    // 0x268(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsScanning;                                        // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ThroneRoom_MainDoors_C*            ThroneRoomDoorsRef;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ThroneRoomOpenedDispatcher;                        // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AEmitter*                              GoatHeadEyesParticleRef;                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScanningDuration;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeOpeningDoors;                           // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GoatIsStandingOnPlate;                             // 0x2A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         ScanningAccepted;                                  // 0x2A1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_10EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ThroneRoomRevealSeq;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  ThroneRoomRevealSeqPlayer;                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Teleport_Area;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DividerString;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                GatherID;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThroneRoom_Scanner_C* GetDefaultObj();

	void Are_All_Goats_On_Trigger(bool* All_Goats_On_Trigger, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_ScanningAccepted();
	void OnRep_GoatIsStandingOnPlate(bool CallFunc_GetIsLoaded_ReturnValue, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue_1, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void StartScanningFX();
	void PlayDeclinedFX();
	void PlayThroneRoomRevealSeq();
	void ThroneRoomRevealSeqFinished();
	void ScanningComplete();
	void BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void PlayActivateFX();
	void BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PlayAcceptedFX();
	void BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp);
	void OpenThroneRoomDoors();
	void ResetEyes();
	void MulticastFadeOut();
	void FadeIn(float Duration);
	void FadeOut(float Duration);
	void PlayActivateSound();
	void StartScanningSound();
	void SetSounds();
	void On_Stand_On_Plate_Effect();
	void ReceiveBeginPlay();
	void StartScan();
	void OnAllGoatsGathered(const class FString& GatherID);
	void PlayersOnScannerUpdated(bool NewPlayer);
	void GatherTheGoats(class AGGPlayerState* InitialPlayer);
	void OnCinematicStarted(class ULevelSequencePlayer* Sequence);
	void SeqForAllNearbyPlayers_OnFinished();
	void SeqForAllNearbyPlayers_OnStop();
	void ExecuteUbergraph_BP_ThroneRoom_Scanner(int32 EntryPoint, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsLoaded_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_3, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_4, bool CallFunc_GetIsLoaded_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_5, bool CallFunc_GetIsLoaded_ReturnValue_3, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_6, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FCountNotificationParameters& K2Node_MakeStruct_CountNotificationParameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, float K2Node_CustomEvent_Duration_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, float K2Node_CustomEvent_Duration, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_8, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_6, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_GetIsLoaded_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_11, bool CallFunc_GetIsLoaded_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_GetIsLoaded_ReturnValue_6, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_11, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const class FString& K2Node_CustomEvent_GatherID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasGatherEventWithID_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_NewPlayer, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FGatherGoatParameters& K2Node_MakeStruct_GatherGoatParameters, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, class AActor* CallFunc_Array_Get_Item_1, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class AGGPlayerState* K2Node_CustomEvent_InitialPlayer, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetPlayerColorIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FInviteNotificationParameters& K2Node_MakeStruct_InviteNotificationParameters, bool CallFunc_GatherAllGoats_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2);
	void ThroneRoomOpenedDispatcher__DelegateSignature(class AGGGoat* Goat);
};

}

