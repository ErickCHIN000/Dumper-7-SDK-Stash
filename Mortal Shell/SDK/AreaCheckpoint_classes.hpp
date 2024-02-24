#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B0 - 0x220)
// BlueprintGeneratedClass AreaCheckpoint.AreaCheckpoint_C
class AAreaCheckpoint_C : public AExposedCActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   RespawnTransform;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     AreaTrigger;                                       // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNewCheckpointSet;                                // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  AreaCheckpointName;                                // 0x260(0x18)(Edit, BlueprintVisible)
	bool                                         ShouldActivateOnOverlap_;                          // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShouldCheckOnBeginPlay_;                           // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D49[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ABP_Mask_C>             MaskToActivate;                                    // 0x280(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Mask_C*                            BPMask;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAreaCheckpoint_C* GetDefaultObj();

	void ActivateCheckpoint(bool ResetEnemyState, class FName Local_StreamingLevel, class FName Local_LevelName, const struct FTransform& Local_Transform, class AGameplayPC_C* Local_PC, bool Local_ResetEnemyState, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const class FString& CallFunc_GetCurrentStreamingLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript(const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void BndEvt__AreaTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ManuallySetCheckpoint();
	void CheckOnBeginPlay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AreaCheckpoint(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_IsClosed_Variable, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_Mask_C* K2Node_DynamicCast_AsBP_Mask, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable);
	void OnNewCheckpointSet__DelegateSignature(class FText CheckpintName);
};

}


