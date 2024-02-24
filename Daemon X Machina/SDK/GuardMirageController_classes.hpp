#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x540 - 0x4F8)
// BlueprintGeneratedClass GuardMirageController.GuardMirageController_C
class AGuardMirageController_C : public AOldMirageTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	class AMirageCharacter_C*                    SelfArsenal;                                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MovementStep;                                      // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SearchDistance;                                    // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                              FaceDirection;                                     // 0x510(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReachedDistance;                                   // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_739[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MirageRotationPitch;                               // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                GuardTarget;                                       // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               _________;                                         // 0x530(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ______HP;                                          // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGuardMirageController_C* GetDefaultObj();

	void GetStartLocationOffset(struct FVector* LocationOffset, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void InitilizeGuard(class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLanded_ReturnValue, class AActor* CallFunc_GetLockOnTarget_Target, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void ProcessAI(float DeltaSeconds, const struct FVector& ToTargetDirection, const struct FVector& TargetLocationOld, const struct FVector& MoveToDirection, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetLockOnTarget_Target, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue1);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void AIInit();
	void ExecuteUbergraph_GuardMirageController(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AMirageCharacter_C* K2Node_DynamicCast_AsMirage_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EndShield_ReturnValue, int32 CallFunc_GetShieldNum_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


