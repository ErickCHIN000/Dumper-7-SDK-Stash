#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x3E8 - 0x220)
// BlueprintGeneratedClass BP_AxeSuperHandler.BP_AxeSuperHandler_C
class ABP_AxeSuperHandler_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDHSpringArmComponent*                 DHSpringArm;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_TimeSlowOnMaxHeight_TimeDilation_F19B9F224AED2DCF9C8E41A52E64FB58; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TimeSlowOnMaxHeight__Direction_F19B9F224AED2DCF9C8E41A52E64FB58; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TimeSlowOnMaxHeight;                      // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_TimeSlowForTeleport_TimeDilation_A9FBE1204799D0820FBDC484BA3CF936; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TimeSlowForTeleport__Direction_A9FBE1204799D0820FBDC484BA3CF936; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TimeSlowForTeleport;                      // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Landing_TimeDilation_DEF241934AB93971620F67BDD996F897; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Landing__Direction_DEF241934AB93971620F67BDD996F897; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Landing;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ShowCharacter_Alpha_Weapon_39A60981462587AD72825D8A7310952C; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ShowCharacter_Alpha_39A60981462587AD72825D8A7310952C; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_ShowCharacter__Direction_39A60981462587AD72825D8A7310952C; // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_ShowCharacter;                            // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HideCharacter_TimeDilation_8BC05CCA4F2F8A9DE32555A29968FA42; // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HideCharacter_Alpha_Weapon_8BC05CCA4F2F8A9DE32555A29968FA42; // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HideCharacter_Alpha_8BC05CCA4F2F8A9DE32555A29968FA42; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_HideCharacter__Direction_8BC05CCA4F2F8A9DE32555A29968FA42; // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_HideCharacter;                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSuperCompleted;                                  // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsCharMoving;                                      // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCameraMoving;                                    // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MoveZ;                                             // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugEndLoc;                                       // 0x2BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               ImpactNormal;                                      // 0x2BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactPoint;                                       // 0x2C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndLocation;                                       // 0x2D4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x2E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x2EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              DashParticleSystem;                                // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AxatanaSuper_TeleportVFX_C*        BP_TeleportVFX;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEnemyCharacter_C*>             TracedEnemies;                                     // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     Stomp_EnemyChar;                                   // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Stomp_HitResult;                                   // 0x328(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        Stomp_Radius;                                      // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stomp_Radius_Multiplier;                           // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Stomp_Damage;                                      // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stomp_Damage_Multiplier;                           // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Stomp_PoiseDamage;                                 // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3916[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Stomp_HitActor;                                    // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Log;                                               // 0x3D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAudioComponent*                       SFX_SmokeEffect;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AxeSuperHandler_C* GetDefaultObj();

	void LandingSFX(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void ChangeTimeDilation(float TimeDilation, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_Not_PreBool_ReturnValue);
	void ShouldBlockPhotoMode(bool Block_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void DebugEndingNoHit(const struct FVector& EndLocation);
	void DebugEndingHit(const struct FVector& EndLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class ATextRenderActor* CallFunc_FinishSpawningActor_ReturnValue);
	void StompDamage(const struct FVector& Location, bool* Success, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_DirectionTo2D_Dir, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void LandingFX(const struct FVector& Location, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void ResetGravityScale();
	void ResetCameraCustom(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void TeleportVFX(class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AxatanaSuper_TeleportVFX_C* CallFunc_FinishSpawningActor_ReturnValue);
	void DashFX(class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void ShowCharacter(float Alpha, float Alpha_Weapon, float Local_AlphaWeapon, float Local_Alpha, bool CallFunc_IsValid_ReturnValue);
	void DissolveCharacter(float Alpha, float Alpha_Weapon, float Local_AlphaWeapon, float Local_Alpha, bool CallFunc_IsValid_ReturnValue);
	void MovementModeAndGravity(enum class EMovementMode NewMovementMode, float GravityScale);
	void CharacterCollision(enum class ECollisionEnabled NewType, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh);
	void GetCharCapsule(class UCapsuleComponent** CapsuleComponent);
	void GetTargetLocationAndRotation(struct FVector* Loc, struct FRotator* Rot, bool Temp_bool_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void GetEndingLocation(bool* Hit_, float* Distance, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_BoxTraceSingleForObjects_OutHit, bool CallFunc_BoxTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void GetCharMesh(class USkeletalMeshComponent** Mesh);
	void Timeline_HideCharacter__FinishedFunc();
	void Timeline_HideCharacter__UpdateFunc();
	void Timeline_HideCharacter__StartDash__EventFunc();
	void Timeline_ShowCharacter__FinishedFunc();
	void Timeline_ShowCharacter__UpdateFunc();
	void Timeline_TimeSlowForTeleport__FinishedFunc();
	void Timeline_TimeSlowForTeleport__UpdateFunc();
	void Timeline_Landing__FinishedFunc();
	void Timeline_Landing__UpdateFunc();
	void Timeline_TimeSlowOnMaxHeight__FinishedFunc();
	void Timeline_TimeSlowOnMaxHeight__UpdateFunc();
	void OnNotifyEnd_3433296348FF2784123856BFF03A36F8(class FName NotifyName);
	void OnNotifyBegin_3433296348FF2784123856BFF03A36F8(class FName NotifyName);
	void OnInterrupted_3433296348FF2784123856BFF03A36F8(class FName NotifyName);
	void OnBlendOut_3433296348FF2784123856BFF03A36F8(class FName NotifyName);
	void OnCompleted_3433296348FF2784123856BFF03A36F8(class FName NotifyName);
	void OnNotifyEnd_3DDFBAEC4D5B69C801C213A0BDFA73AE(class FName NotifyName);
	void OnNotifyBegin_3DDFBAEC4D5B69C801C213A0BDFA73AE(class FName NotifyName);
	void OnInterrupted_3DDFBAEC4D5B69C801C213A0BDFA73AE(class FName NotifyName);
	void OnBlendOut_3DDFBAEC4D5B69C801C213A0BDFA73AE(class FName NotifyName);
	void OnCompleted_3DDFBAEC4D5B69C801C213A0BDFA73AE(class FName NotifyName);
	void OnNotifyEnd_A4E22CBD40364D432E1C938E3246C731(class FName NotifyName);
	void OnNotifyBegin_A4E22CBD40364D432E1C938E3246C731(class FName NotifyName);
	void OnInterrupted_A4E22CBD40364D432E1C938E3246C731(class FName NotifyName);
	void OnBlendOut_A4E22CBD40364D432E1C938E3246C731(class FName NotifyName);
	void OnCompleted_A4E22CBD40364D432E1C938E3246C731(class FName NotifyName);
	void OnNotifyEnd_761F690440596771EB5FBDB019B36B43(class FName NotifyName);
	void OnNotifyBegin_761F690440596771EB5FBDB019B36B43(class FName NotifyName);
	void OnInterrupted_761F690440596771EB5FBDB019B36B43(class FName NotifyName);
	void OnBlendOut_761F690440596771EB5FBDB019B36B43(class FName NotifyName);
	void OnCompleted_761F690440596771EB5FBDB019B36B43(class FName NotifyName);
	void OnLanded(const struct FHitResult& LandingHit);
	void ResetCameraOnEnd(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp);
	void StopHide();
	void ResetCameraDoOnce();
	void ReceiveBeginPlay();
	void ReEnable_Char();
	void OnStompNotify(class FName NotifyName, const struct FVector& Location);
	void ReceiveTick(float DeltaSeconds);
	void OnLanded_Early(const struct FHitResult& LandingHit);
	void ExecuteUbergraph_BP_AxeSuperHandler(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_15, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, bool K2Node_SwitchName_CmpSuccess, enum class EMoveComponentAction Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_3, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetEndingLocation_Hit_, float CallFunc_GetEndingLocation_Distance, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetTargetLocationAndRotation_Loc, const struct FRotator& CallFunc_GetTargetLocationAndRotation_Rot, class UCapsuleComponent* CallFunc_GetCharCapsule_CapsuleComponent, const struct FHitResult& K2Node_CustomEvent_LandingHit_1, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, float K2Node_CustomEvent_BlendTime, enum class EViewTargetBlendFunction K2Node_CustomEvent_BlendFunc, float K2Node_CustomEvent_BlendExp, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_0_Base_SetDisabled_self_CastInput, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_Barbarous_SetInvulnerable_self_CastInput, bool Temp_bool_Has_Been_Initd_Variable_1, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_0_Base_SetDisabled_self_CastInput_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_Barbarous_SetInvulnerable_self_CastInput_1, bool Temp_bool_IsClosed_Variable_1, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName K2Node_CustomEvent_NotifyName, const struct FVector& K2Node_CustomEvent_Location, bool CallFunc_StompDamage_Success, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USkeletalMeshComponent* CallFunc_GetCharMesh_Mesh_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FHitResult& K2Node_CustomEvent_LandingHit);
	void OnSuperCompleted__DelegateSignature();
};

}


