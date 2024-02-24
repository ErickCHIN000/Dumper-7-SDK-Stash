#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5F0 - 0x5C0)
// BlueprintGeneratedClass AIActionArsenalComponent.AIActionArsenalComponent_C
class UAIActionArsenalComponent_C : public UTTLAIActionArsenalComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(Transient, DuplicateTransient)
	class AArsenalCharacter_C*                   SelfArsenal;                                       // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenalMovement_C*                    ArsenalMovement;                                   // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenalFireControlComponent_C*        ArsenalFireControl;                                // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           CharacterMovement;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLAIController*                      SelfController;                                    // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIActionArsenalComponent_C* GetDefaultObj();

	int32 GetBulletRemain(enum class ETTLAIWeaponPart WeaponPart, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetBulletRemain_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	bool IsWeaponConsumeFemto(enum class ETTLAIWeaponEnum Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsWeaponConsumeFemto_ReturnValue, bool CallFunc_IsWeaponConsumeFemto_ReturnValue1, bool CallFunc_IsWeaponConsumeFemto_ReturnValue2, bool CallFunc_IsWeaponConsumeFemto_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWeaponConsumeFemto_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsWeaponConsumeFemto_ReturnValue5, bool CallFunc_IsWeaponConsumeFemto_ReturnValue6, bool CallFunc_IsWeaponConsumeFemto_ReturnValue7, bool CallFunc_IsWeaponConsumeFemto_ReturnValue8, bool CallFunc_IsWeaponConsumeFemto_ReturnValue9, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_IsWeaponConsumeFemto_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5);
	bool StartMirageBP(class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UMirageComponent_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_SpawnMirage_SuccessMirage);
	void SetIsAttackFlag(bool IsLeft, bool Flag);
	void SetIsShootFlag(bool IsLeft, bool Flag);
	void FireWeaponImpl(class ALongRangeWeaponCommon_C* LongRangeWeapon, class ACloseRangeWeaponCommon_C* CloseRangeWeapon, class ATTLWeaponShield* ShieldWeapon, bool IsLeft, bool MontageCurrentSectionIsStart, bool RangeIsValid, bool IsPlayingAttackAnimMontage, bool CallFunc_GetAttackFlag_ReturnValue, bool CallFunc_GetAttackFlag_ReturnValue1, bool CallFunc_CheckDoubleAttackCpp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, class FName CallFunc_Montage_GetCurrentSection_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue1, bool CallFunc_ProcessFireInput_Result);
	bool GetIsPunch(enum class ETTLAIWeaponEnum Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsPunch_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPunchWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsPunchWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue4);
	void GetWeaponTypeOfLeftRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5);
	bool GetWeaponType(enum class ETTLAIWeaponEnum Type, enum class ETTLWeaponType* ReturnType, bool CallFunc_IsDestroyedParts_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ETTLWeaponType CallFunc_GetWeaponType_returnType, bool CallFunc_GetWeaponType_ReturnValue, bool CallFunc_IsDestroyedParts_ReturnValue1, bool CallFunc_GetWeaponTypeOfLeftRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLeftRight_WeaponType, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetWeaponTypeOfSupportWeapon_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfSupportWeapon_WeaponType, bool CallFunc_GetWeaponTypeOfShoulderWeapon_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShoulderWeapon_WeaponType, bool CallFunc_GetWeaponTypeOfShieldOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShieldOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfShieldOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShieldOnRight_WeaponType, bool CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_WeaponType, bool CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_WeaponType);
	void GetWeaponTypeOfShieldOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfShieldOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfSupportWeapon(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfShoulderWeapon(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfCloseRangeWeaponOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfCloseRangeWeaponOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfLongRangeWeaponOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponTypeOfLongRangeWeaponOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue);
	bool DoActionAttackWeaponSpecial();
	bool DoActionAttackWeaponAll();
	bool DoActionAttackWeaponLeftRight();
	bool DoActionAttackWeaponShoulder(bool CallFunc_IsOuter_ReturnValue, enum class ETTLEWeaponCategory CallFunc_GetWeaponCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool DoActionAttackWeaponLeft();
	bool DoActionAttackWeaponRight();
	bool DoActionGuard(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_CalcMovementInputForGuard_ReturnValue, bool CallFunc_StartActionNone_ReturnValue, bool CallFunc_StartShield_ReturnValue, int32 CallFunc_GetShieldNum_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void StartActionStraightMoveBP(const struct FVector& TargetDirection, bool* Result);
	void StartActionSpecialBP(class AActor* TargetActor, bool* Result, bool CallFunc_StartActionSpecialBP_result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StartAction_ReturnValue, bool CallFunc_StartActionNone_ReturnValue);
	void FireWeapon(bool Right, bool Left, bool Shoulder, bool SupportSpecial, const TArray<class AActor*>& MissileTargets, class AActor* CallFunc_GetNearestMissionTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_GetHateTargets_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void StartActionGoAroundSideBP(class AActor* TargetActor, float Distance, float Degree, bool* Result);
	void CheckMoveTypeBP(enum class ETTLAIMoveMode Mode, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void AIInit(class AActor* MyActor);
	void FinishAttackWeaponRightBP();
	void FinishAttackWeaponLeftBP();
	void FinishAttackWeaponShoulderBP();
	void ActionChangedBP(enum class ETTLAIActionType ActionPrev, enum class ETTLAIActionType ActionNext);
	void FinishGuardBP();
	void FinishAttackWeaponSpecialBP();
	void StartGetOffBP();
	void ExecuteUbergraph_AIActionArsenalComponent(int32 EntryPoint, class AActor* K2Node_Event_myActor, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetCollisionByCharacterType_result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, enum class ETTLAIActionType K2Node_Event_actionPrev, enum class ETTLAIActionType K2Node_Event_actionNext, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EndShield_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FName CallFunc_GetBodyMeshID_ReturnValue, class AOuterCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class UTTLAIActionOuterComponent* CallFunc_GetComponentByClass_ReturnValue1, class UArsenalEquipComponent_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_TryEndChangeEquipMode_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ATTLAIController* K2Node_DynamicCast_AsTTLAIController, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue7, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess2);
};

}


