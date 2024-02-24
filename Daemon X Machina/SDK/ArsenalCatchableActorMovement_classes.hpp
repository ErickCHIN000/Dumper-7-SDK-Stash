#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x38C - 0x370)
// BlueprintGeneratedClass ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C
class UArsenalCatchableActorMovement_C : public UTTLArsenalCatchableActorMovement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	float                                        InputAimForward_0;                                 // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InputAimRight_0;                                   // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AimCameraDirection;                                // 0x380(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalCatchableActorMovement_C* GetDefaultObj();

	bool TryStartOuterPunchThrow_Throw();
	bool TryStartOuterPunchThrow_Catch(bool CallFunc_TryStartCatchActor_isSuccess, bool CallFunc_TryReadyCatch_result);
	void TryCatchGrenadeEitherHand(bool NeedCanMoveCheck, bool* Succeed, bool* IsLeftHandResult, bool IsLeftHand, bool CallFunc_CanCatchMovement_OneSideHand_ReturnValue, bool CallFunc_CanCatchMovement_OneSideHand_ReturnValue1, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_CanTryAllMovementCPP_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class UTTLBasicStatusComponent* CallFunc_FindOwnerStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ThrowAwayWeapon(bool IsLeft, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TryCatchWeaponCpp_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryStartAim_isStartAim);
	void TryThrowAwayWeapon(class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	bool IsPickableTargetCaught(bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void CancelThrow(bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTTLArsenalAnimInstance* K2Node_DynamicCast_AsTTLArsenal_Anim_Instance, bool K2Node_DynamicCast_bSuccess1);
	void TryCancelThrow();
	void TryPutDown(bool CallFunc_TryMoveBackForTransport_ReturnValue, bool CallFunc_IsOthersAtPuttingPoint_ReturnValue, const struct FTransform& CallFunc_TryGeTransformForTransportCenter_transform, bool CallFunc_TryGeTransformForTransportCenter_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void TryCancelCatchMotion(bool* Result, bool* EnableOtherAction, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTTLArsenalAnimInstance* K2Node_DynamicCast_AsTTLArsenal_Anim_Instance, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void TryRelinquishActor(bool IsLeft, bool CallFunc_CanRelinquish_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RelinquishActor(class AActor* CallFunc_GetOwner_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue);
	void GetCatchableActor(class AActor** CaughtActor, bool* IsCaught, bool* IsLeft, float CollisionCheckRadius, const struct FVector& CollisionCheckEndLoc, const struct FVector& CollisionCheckStartLoc, bool _IsFallingOrFlying, float _NearestDistanceRight, class AActor* _CaughtActorRight, bool _IsCaughtRight, class AArsenalCharacter_C* _ArsenalCharacter, float _NearestDistanceLeft, class AActor* _CaughtActorLeft, bool _IsCaughtLeft);
	void GetThrowBaseTransform(struct FTransform* baseTransform, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetWorldAimCameraDestPosition(struct FVector* Position, const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void TryCatchGrenade(bool IsLeft, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CatchGrenade(bool IsLeft, class UTTLCatchableActorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_IsValid_ReturnValue4, class ATTLGrenade* K2Node_DynamicCast_AsTTLGrenade, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_SpawnGrenade_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue4, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue5, float CallFunc_CalcOuterThrowSpeedWithFluctuation_ReturnValue);
	void TryOnDead(bool CallFunc_IsValid_ReturnValue, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container, bool K2Node_DynamicCast_bSuccess);
	void AttachToTargetOnPick_0(float DiffRotationZ, const struct FRotator& NewRotator, const struct FVector& NewLocation, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult1, bool CallFunc_K2_SetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue1, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FRotator& CallFunc_RLerp_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float CallFunc_Abs_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1);
	void CatchActor(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetBulletSpeedCPP_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsGrenade_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, float K2Node_Select_Default);
	void TryCatchActor(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container, bool K2Node_DynamicCast_bSuccess, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
	void TryUnreadyCatch();
	void TryReadyCatch(bool* Result);
	void TryReleaseActor(bool CallFunc_IsValid_ReturnValue);
	void ReleaseActor(bool Temp_bool_Variable, enum class ETTLWeaponSlot Temp_byte_Variable, enum class ETTLWeaponSlot Temp_byte_Variable1, bool CallFunc_IsCatchingPickableCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCatchingWeaponCPP_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, enum class ETTLWeaponSlot K2Node_Select_Default, class UArsenalChangeWeaponComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess1, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	void TryEndThrowActor();
	void TryThrowActor(bool CallFunc_IsValid_ReturnValue);
	void TryStartCatchActor(enum class ETTLThrowType ThrowType, bool* IsSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetCatchableActorCPP_caughtActor, bool CallFunc_GetCatchableActorCPP_isCaught, bool CallFunc_GetCatchableActorCPP_isLeft, bool CallFunc_GetCatchableActorCPP_isFailCatch, bool CallFunc_IsValid_ReturnValue, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
	void TryCancelAim();
	void TryStartThrowActor(bool IsLeft, bool IsHandWeapon, enum class ETTLThrowType ThrowType, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, bool CallFunc_CanTryAllMovementCPP_ReturnValue, const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TryStartAim(const struct FVector& StartAimDirection, enum class ETTLThrowType ThrowType, bool* IsStartAim, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UnreadyCatch();
	void ReadyCatch(const class FString& CallFunc_Conv_BoolToString_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue);
	void CancelAim(bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTMPOverHeat_ReturnValue, bool CallFunc_IsOuterPunchThrowing_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void DrawThrowDebugLine(const struct FVector& SourcePosition, const struct FVector& Direction, float Duration, const struct FVector& CurrentGravity, const struct FVector& LineTraceDestinationPosition, const struct FVector& LineTraceSourcePosition, const struct FVector& ThrowVelocity, const struct FVector& CurrentPosition, const struct FVector& NextPosition, bool IsHit, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetGravityCPP_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void EndThrowActor(bool Temp_bool_Variable, enum class ETTLDestroyablePartsType Temp_byte_Variable, enum class ETTLDestroyablePartsType Temp_byte_Variable1, class AActor* CallFunc_GetOwner_ReturnValue, enum class ETTLDestroyablePartsType K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompletelyDestroyed_ReturnValue);
	void StartThrowActor(class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_SwitchRisePressed_ReturnValue);
	void EndAim(const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTMPOverHeat_ReturnValue);
	void StartAim(const struct FVector& StartAimDirection, enum class ETTLThrowType ThrowType, float DirectionA, const struct FRotator& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, float CallFunc_GetBulletSpeedCPP_ReturnValue, const struct FVector& CallFunc_GetGravityCPP_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation1, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_MakeVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_GetSystemSettingFloatValue_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ANewAimCamera_C* K2Node_DynamicCast_AsNew_Aim_Camera, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FVector& CallFunc_CalcShootLocation_ShootLocation, class AActor* CallFunc_GetLockOnTarget_Target, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_VSize2D_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, float K2Node_MathExpression_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue1, float K2Node_MathExpression_ReturnValue1, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float K2Node_MathExpression_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_DegAtan_ReturnValue, float CallFunc_BreakRotator_Roll4, float CallFunc_BreakRotator_Pitch4, float CallFunc_BreakRotator_Yaw4, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, float CallFunc_Abs_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue2, bool CallFunc_IsTMPOverHeat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue2);
	void StartCatchActor(class AActor* CaughtTarget, bool IsLeft, enum class ETTLThrowType ThrowType);
	void ThrowActor(bool CallFunc_IsMultiplayBattleMission_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, float CallFunc_GetBulletSpeedCPP_ReturnValue, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SelectFloat_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckBulletInfinityMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void RunOnServerStartCatch(class AActor* CaughtActor, bool IsLeft, enum class ETTLThrowType ThrowType);
	void MulticastStartCatch(class AActor* CaughtActor, bool IsLeft, enum class ETTLThrowType ThrowType);
	void TTLBeginPlay();
	void OnDamageReactionTransportBP();
	void CallReleaseForStun();
	void NotifyPutDownAndEnd();
	void CancelAllCatchableMovement();
	void ForceCancelBP();
	void OnStartDamageReaction_Main(enum class ETTLDamageState DamageState);
	void CatchActorBP();
	void OnCompletelyDestroyedParts______0(enum class ETTLDestroyablePartsType PartsType);
	void OnNotifyExecCancelAimBP();
	void OnNotifyExecThrowBP(bool IsLeft, bool IsHandWeapon, struct FVector& TargetPos, struct FVector& Direction, enum class ETTLThrowType ThrowType);
	void CallTryRelinquishActor(bool IsLeft);
	void StartCatchActorCPP(class AActor* CaughtTarget, bool IsLeft, enum class ETTLThrowType ThrowType);
	void CallStartAimForOuterPunchThrow(struct FVector& Direction);
	void ExecuteUbergraph_ArsenalCatchableActorMovement(int32 EntryPoint, const struct FVector& K2Node_Event_direction, class AActor* K2Node_CustomEvent_CaughtActor1, bool K2Node_CustomEvent_IsLeft1, enum class ETTLThrowType K2Node_CustomEvent_throwType1, bool CallFunc_TryStartAim_isStartAim, class AActor* K2Node_CustomEvent_CaughtActor, bool K2Node_CustomEvent_IsLeft, enum class ETTLThrowType K2Node_CustomEvent_throwType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetOwner_ReturnValue1, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOuter_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue3, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocallyControlledPlayer_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, enum class ETTLDamageState K2Node_Event_damageState, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSystemSettingFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue4, enum class ETTLDestroyablePartsType K2Node_CustomEvent_partsType, class UTTLArsenalDestroyPartsComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, bool K2Node_Event_IsLeft2, bool K2Node_Event_isHandWeapon, const struct FVector& K2Node_Event_targetPos, const struct FVector& K2Node_Event_direction1, enum class ETTLThrowType K2Node_Event_throwType1, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_TryCatchWeaponCpp_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue5, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess4, class ATTLWeaponBase* CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentRightCaughtWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class ATTLCloseRangeWeapon* K2Node_DynamicCast_AsTTLClose_Range_Weapon, bool K2Node_DynamicCast_bSuccess5, class ATTLCloseRangeWeapon* K2Node_DynamicCast_AsTTLClose_Range_Weapon1, bool K2Node_DynamicCast_bSuccess6, bool K2Node_Event_isLeft1, bool CallFunc_ChangeArsenalParameter_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_TryForceCancelCatchMotion_ReturnValue, class AActor* K2Node_Event_caughtTarget, bool K2Node_Event_isLeft, enum class ETTLThrowType K2Node_Event_throwType, bool CallFunc_CheckStartCatchStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue6, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue1);
};

}


