#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x181 (0x3B1 - 0x230)
// BlueprintGeneratedClass BP_Teleporter.BP_Teleporter_C
class ABP_Teleporter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BoxTrigger;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTeleportParameters                   Teleport_Parameters;                               // 0x248(0x58)(Edit, BlueprintVisible, NoDestructor)
	struct FLoadingScreenParameters              Loading_Screen_Parameters;                         // 0x2A0(0x48)(Edit, BlueprintVisible)
	TSoftObjectPtr<class AActor>                 TeleportLoc;                                       // 0x2E8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseOverrideTeleportLoc;                            // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F22[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OverrideTeleportLoc;                               // 0x320(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsActive;                                          // 0x350(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CanTeleport;                                       // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F28[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             TeleportSound;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Victim;                                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchForceMult;                                   // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ABP_Teleporter_C>       TeleporterToIgnoreWhenTeleporting;                 // 0x370(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         KeepVictimRotation;                                // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F35[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxCullDistance;                                   // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PlayerHasBeenTeleported;                           // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShouldRagdollAtLaunch;                             // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Teleporter_C* GetDefaultObj();

	void OnRep_IsActive();
	void SetActive(bool IsActive);
	struct FVector GetLaunchForce(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void UserConstructionScript();
	void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void PlayTeleportEffects(const struct FVector& Loc);
	void LaunchVictim(class AGGGoat* Goat);
	void DeactivateTeleport();
	void PlayerTeleported(class AGGGoat* Goat);
	void TeleportPlayer();
	void SetActiveEffectsEnabled(bool Enabled);
	void ActorTryingToTeleport(class UPrimitiveComponent* OtherComp);
	void OnTeleportStageUpdate(class AGGPlayerController* Controller, class AGGGoat* Goat, enum class ELoadingScreenStage CurrentStage);
	void ReactivateTeleport();
	void BndEvt__BP_Teleporter_BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Teleporter(int32 EntryPoint, bool CallFunc_IsLowEndPlatform_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsAllowedToTeleport_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& K2Node_CustomEvent_Loc, class AGGGoat* K2Node_CustomEvent_Goat_2, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_Teleporter_C* K2Node_DynamicCast_AsBP_Teleporter, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat_1, bool CallFunc_HasAuthority_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_1, const struct FVector& CallFunc_GetLaunchForce_ReturnValue, bool K2Node_CustomEvent_Enabled, const struct FImpulseDamageEvent& K2Node_MakeStruct_ImpulseDamageEvent, float CallFunc_ApplyImpulseDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasFinishedLevelStart_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_CustomEvent_Controller, class AGGGoat* K2Node_CustomEvent_Goat, enum class ELoadingScreenStage K2Node_CustomEvent_CurrentStage, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, bool Temp_bool_Variable, class ABP_Teleporter_C* K2Node_DynamicCast_AsBP_Teleporter_1, bool K2Node_DynamicCast_bSuccess_3, const struct FTransform& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRagdollStateChangeSettings& K2Node_MakeStruct_RagdollStateChangeSettings, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_SetRagdollBlueprint_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& K2Node_Select_Default_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_HasAuthority_ReturnValue_3, const struct FRotator& CallFunc_SelectRotator_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_IsCompGoat_IsGoat_2, bool CallFunc_IsCompGoat_IsCapsuleComponent_2, bool CallFunc_IsCompGoat_IsMeshComponent_2, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue_3, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AGGGoat* CallFunc_GetGoatFromActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayerHasBeenTeleported__DelegateSignature(class AGGGoat* Goat);
};

}


