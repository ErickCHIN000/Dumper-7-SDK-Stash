#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8E (0x3A0 - 0x312)
// BlueprintGeneratedClass Usable_Crawlspace.Usable_Crawlspace_C
class AUsable_Crawlspace_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2D23[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  TextRender;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ExitCamAnim_Alpha_9AD8699A4B723115211E38A556FAB57C; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ExitCamAnim__Direction_9AD8699A4B723115211E38A556FAB57C; // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ExitCamAnim;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CrawlSpaceEndTimeline_BlendTranslationAlpha_C8138D2142DF16C37ADDA39C192A348D; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CrawlSpaceEndTimeline__Direction_C8138D2142DF16C37ADDA39C192A348D; // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CrawlSpaceEndTimeline;                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBeenUsed_;                                      // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      UsesSpline;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACrawlSpace_C*                         CrawlSpaceReference;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsPlayerOverlappingBox_;                           // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUsable_Crawlspace_C*                  OppositeEndUsableCrawlSpace;                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GameTimeBeginStanding;                             // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndSpacePawnLocation;                              // 0x37C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CrawlingPawn;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PushoutDistance;                                   // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisabled_;                                       // 0x394(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2D56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCineCameraComponent*                  ExitCam;                                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Crawlspace_C* GetDefaultObj();

	void Enemy_IsInParryableState(bool* IsParryableState_);
	bool BossCrucix_IsSimulatingLittleBro();
	void BossCharacterHadern_IsHadern(bool* IsHadern);
	void BossCryptCharacter_GetThrowAttack(bool* ThrowAttack);
	void EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip);
	void EnemyCommon_GetHealth(float* Health, float* MaxHealth);
	void SetCapText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SwitchToExitCamera(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void SetExitCamera(class UCineCameraComponent* Cam);
	struct FVector GetCrawlspaceExitLocation(TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3);
	void GetUseActionText(class FText* ActionText);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_ForceReturn_self_CastInput);
	void CrawlSpaceEndTimeline__FinishedFunc();
	void CrawlSpaceEndTimeline__UpdateFunc();
	void ExitCamAnim__FinishedFunc();
	void ExitCamAnim__UpdateFunc();
	void Enemy_DeAggroPlayer();
	void Enemy_ReEnable();
	void Enemy_StoneSkinTimeline_Start();
	void Enemy_StoneSkinTimeline_End();
	void ReceiveBeginPlay();
	void EnemyCommon_StopPhysicalHit();
	void ForceCharacterPastOverlappingMesh(class APawn* Target);
	void BossCrucix_SimLittleBro_Stop();
	void BossCrucix_SimLittleBro_Start();
	void ForceReturn();
	void RenableMovementComponentAfterCrawl();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Usable_Crawlspace(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* K2Node_CustomEvent_Target, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCrawlspaceExitLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}


