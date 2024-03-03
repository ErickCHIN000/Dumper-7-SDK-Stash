#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_PlayerCameraManager.ALS_PlayerCameraManager_C
// (Actor)

class UClass* AALS_PlayerCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_PlayerCameraManager_C");

	return Clss;
}


// ALS_PlayerCameraManager_C ALS_PlayerCameraManager.Default__ALS_PlayerCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AALS_PlayerCameraManager_C* AALS_PlayerCameraManager_C::GetDefaultObj()
{
	static class AALS_PlayerCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AALS_PlayerCameraManager_C*>(AALS_PlayerCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.GetDebugTraceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDrawDebugTrace         ShowTraceType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         DebugTypu                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Controller_BPI_C>K2Node_DynamicCast_AsALS_Controller_BPI                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_DebugInfo_DebugView                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowHUD                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowTraces                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowDebugShapes                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowLayerColors                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_Slomo                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AALS_PlayerCameraManager_C::GetDebugTraceType(enum class EDrawDebugTrace ShowTraceType, enum class EDrawDebugTrace* DebugTypu, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IALS_Controller_BPI_C> K2Node_DynamicCast_AsALS_Controller_BPI, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter, bool CallFunc_BPI_Get_DebugInfo_DebugView, bool CallFunc_BPI_Get_DebugInfo_ShowHUD, bool CallFunc_BPI_Get_DebugInfo_ShowTraces, bool CallFunc_BPI_Get_DebugInfo_ShowDebugShapes, bool CallFunc_BPI_Get_DebugInfo_ShowLayerColors, bool CallFunc_BPI_Get_DebugInfo_Slomo, bool CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "GetDebugTraceType");

	Params::AALS_PlayerCameraManager_C_GetDebugTraceType_Params Parms{};

	Parms.ShowTraceType = ShowTraceType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Controller_BPI = K2Node_DynamicCast_AsALS_Controller_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter = CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugView = CallFunc_BPI_Get_DebugInfo_DebugView;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowHUD = CallFunc_BPI_Get_DebugInfo_ShowHUD;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowTraces = CallFunc_BPI_Get_DebugInfo_ShowTraces;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowDebugShapes = CallFunc_BPI_Get_DebugInfo_ShowDebugShapes;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowLayerColors = CallFunc_BPI_Get_DebugInfo_ShowLayerColors;
	Parms.CallFunc_BPI_Get_DebugInfo_Slomo = CallFunc_BPI_Get_DebugInfo_Slomo;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo = CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugTypu != nullptr)
		*DebugTypu = Parms.DebugTypu;

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.Get_CameraBehaviorParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CurveName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

float AALS_PlayerCameraManager_C::Get_CameraBehaviorParam(class FName CurveName, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "Get_CameraBehaviorParam");

	Params::AALS_PlayerCameraManager_C_Get_CameraBehaviorParam_Params Parms{};

	Parms.CurveName = CurveName;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.CalculateAxisIndependentLag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     CurrentLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CameraRotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     LagSpeeds                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CameraRotationYaw                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AALS_PlayerCameraManager_C::CalculateAxisIndependentLag(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, const struct FRotator& CameraRotation, const struct FVector& LagSpeeds, const struct FRotator& CameraRotationYaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_FInterpTo_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_FInterpTo_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "CalculateAxisIndependentLag");

	Params::AALS_PlayerCameraManager_C_CalculateAxisIndependentLag_Params Parms{};

	Parms.CurrentLocation = CurrentLocation;
	Parms.TargetLocation = TargetLocation;
	Parms.CameraRotation = CameraRotation;
	Parms.LagSpeeds = LagSpeeds;
	Parms.CameraRotationYaw = CameraRotationYaw;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue_1 = CallFunc_LessLess_VectorRotator_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.CustomCameraBehavior
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FPFOV                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TPFOV                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     FPTarget                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  PivotTarget                                                      (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Camera_BPI_C>K2Node_DynamicCast_AsALS_Camera_BPI                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Camera_BPI_C>K2Node_DynamicCast_AsALS_Camera_BPI_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BPI_Get_FP_CameraTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_BPI_Get_3P_PivotTarget_ReturnValue                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Camera_BPI_C>K2Node_DynamicCast_AsALS_Camera_BPI_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_Get_CameraParameters_TP_FOV                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_Get_CameraParameters_FP_FOV                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_CameraParameters_RightShoulder                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         CallFunc_GetDebugTraceType_DebugTypu                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Camera_BPI_C>K2Node_DynamicCast_AsALS_Camera_BPI_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BPI_Get_3P_TraceParams_TraceOrigin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_Get_3P_TraceParams_TraceRadius                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETraceTypeQuery         CallFunc_BPI_Get_3P_TraceParams_TraceChannel                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Controller_BPI_C>K2Node_DynamicCast_AsALS_Controller_BPI                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalculateAxisIndependentLag_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_DebugInfo_DebugView                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowHUD                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowTraces                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowDebugShapes                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowLayerColors                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_Slomo                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_CameraBehaviorParam_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetUpVector_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue_1                                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_PlayerCameraManager_C::CustomCameraBehavior(struct FVector* Location, struct FRotator* Rotation, float* FOV, float FPFOV, float TPFOV, const struct FVector& FPTarget, const struct FTransform& PivotTarget, TArray<class AActor*>& Temp_object_Variable, float CallFunc_Get_CameraBehaviorParam_ReturnValue, float CallFunc_Get_CameraBehaviorParam_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_BPI_Get_FP_CameraTarget_ReturnValue, const struct FTransform& CallFunc_BPI_Get_3P_PivotTarget_ReturnValue, float CallFunc_Get_CameraBehaviorParam_ReturnValue_2, float CallFunc_Lerp_ReturnValue, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Get_CameraBehaviorParam_ReturnValue_3, float CallFunc_BPI_Get_CameraParameters_TP_FOV, float CallFunc_BPI_Get_CameraParameters_FP_FOV, bool CallFunc_BPI_Get_CameraParameters_RightShoulder, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, enum class EDrawDebugTrace CallFunc_GetDebugTraceType_DebugTypu, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI_3, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_BPI_Get_3P_TraceParams_TraceOrigin, float CallFunc_BPI_Get_3P_TraceParams_TraceRadius, enum class ETraceTypeQuery CallFunc_BPI_Get_3P_TraceParams_TraceChannel, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, float CallFunc_Get_CameraBehaviorParam_ReturnValue_4, float CallFunc_Get_CameraBehaviorParam_ReturnValue_5, float CallFunc_Get_CameraBehaviorParam_ReturnValue_6, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TScriptInterface<class IALS_Controller_BPI_C> K2Node_DynamicCast_AsALS_Controller_BPI, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_CalculateAxisIndependentLag_ReturnValue, class ACharacter* CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter, bool CallFunc_BPI_Get_DebugInfo_DebugView, bool CallFunc_BPI_Get_DebugInfo_ShowHUD, bool CallFunc_BPI_Get_DebugInfo_ShowTraces, bool CallFunc_BPI_Get_DebugInfo_ShowDebugShapes, bool CallFunc_BPI_Get_DebugInfo_ShowLayerColors, bool CallFunc_BPI_Get_DebugInfo_Slomo, bool CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, const struct FVector& CallFunc_BreakTransform_Location_10, const struct FRotator& CallFunc_BreakTransform_Rotation_10, const struct FVector& CallFunc_BreakTransform_Scale_10, float CallFunc_Get_CameraBehaviorParam_ReturnValue_7, float CallFunc_Get_CameraBehaviorParam_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_Get_CameraBehaviorParam_ReturnValue_9, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, float CallFunc_Get_CameraBehaviorParam_ReturnValue_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, float CallFunc_Get_CameraBehaviorParam_ReturnValue_11, float CallFunc_Get_CameraBehaviorParam_ReturnValue_12, float CallFunc_Get_CameraBehaviorParam_ReturnValue_13, float CallFunc_Get_CameraBehaviorParam_ReturnValue_14, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_GetRightVector_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, const struct FTransform& CallFunc_TLerp_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location_11, const struct FRotator& CallFunc_BreakTransform_Rotation_11, const struct FVector& CallFunc_BreakTransform_Scale_11, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "CustomCameraBehavior");

	Params::AALS_PlayerCameraManager_C_CustomCameraBehavior_Params Parms{};

	Parms.FPFOV = FPFOV;
	Parms.TPFOV = TPFOV;
	Parms.FPTarget = FPTarget;
	Parms.PivotTarget = PivotTarget;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue = CallFunc_Get_CameraBehaviorParam_ReturnValue;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_1 = CallFunc_Get_CameraBehaviorParam_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Camera_BPI = K2Node_DynamicCast_AsALS_Camera_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsALS_Camera_BPI_1 = K2Node_DynamicCast_AsALS_Camera_BPI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPI_Get_FP_CameraTarget_ReturnValue = CallFunc_BPI_Get_FP_CameraTarget_ReturnValue;
	Parms.CallFunc_BPI_Get_3P_PivotTarget_ReturnValue = CallFunc_BPI_Get_3P_PivotTarget_ReturnValue;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_2 = CallFunc_Get_CameraBehaviorParam_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Camera_BPI_2 = K2Node_DynamicCast_AsALS_Camera_BPI_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_3 = CallFunc_Get_CameraBehaviorParam_ReturnValue_3;
	Parms.CallFunc_BPI_Get_CameraParameters_TP_FOV = CallFunc_BPI_Get_CameraParameters_TP_FOV;
	Parms.CallFunc_BPI_Get_CameraParameters_FP_FOV = CallFunc_BPI_Get_CameraParameters_FP_FOV;
	Parms.CallFunc_BPI_Get_CameraParameters_RightShoulder = CallFunc_BPI_Get_CameraParameters_RightShoulder;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetDebugTraceType_DebugTypu = CallFunc_GetDebugTraceType_DebugTypu;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Camera_BPI_3 = K2Node_DynamicCast_AsALS_Camera_BPI_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_BPI_Get_3P_TraceParams_TraceOrigin = CallFunc_BPI_Get_3P_TraceParams_TraceOrigin;
	Parms.CallFunc_BPI_Get_3P_TraceParams_TraceRadius = CallFunc_BPI_Get_3P_TraceParams_TraceRadius;
	Parms.CallFunc_BPI_Get_3P_TraceParams_TraceChannel = CallFunc_BPI_Get_3P_TraceParams_TraceChannel;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_4 = CallFunc_Get_CameraBehaviorParam_ReturnValue_4;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_5 = CallFunc_Get_CameraBehaviorParam_ReturnValue_5;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_6 = CallFunc_Get_CameraBehaviorParam_ReturnValue_6;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Controller_BPI = K2Node_DynamicCast_AsALS_Controller_BPI;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_CalculateAxisIndependentLag_ReturnValue = CallFunc_CalculateAxisIndependentLag_ReturnValue;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter = CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugView = CallFunc_BPI_Get_DebugInfo_DebugView;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowHUD = CallFunc_BPI_Get_DebugInfo_ShowHUD;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowTraces = CallFunc_BPI_Get_DebugInfo_ShowTraces;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowDebugShapes = CallFunc_BPI_Get_DebugInfo_ShowDebugShapes;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowLayerColors = CallFunc_BPI_Get_DebugInfo_ShowLayerColors;
	Parms.CallFunc_BPI_Get_DebugInfo_Slomo = CallFunc_BPI_Get_DebugInfo_Slomo;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo = CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_BreakTransform_Location_10 = CallFunc_BreakTransform_Location_10;
	Parms.CallFunc_BreakTransform_Rotation_10 = CallFunc_BreakTransform_Rotation_10;
	Parms.CallFunc_BreakTransform_Scale_10 = CallFunc_BreakTransform_Scale_10;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_7 = CallFunc_Get_CameraBehaviorParam_ReturnValue_7;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_8 = CallFunc_Get_CameraBehaviorParam_ReturnValue_8;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_9 = CallFunc_Get_CameraBehaviorParam_ReturnValue_9;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_10 = CallFunc_Get_CameraBehaviorParam_ReturnValue_10;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_11 = CallFunc_Get_CameraBehaviorParam_ReturnValue_11;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_12 = CallFunc_Get_CameraBehaviorParam_ReturnValue_12;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_13 = CallFunc_Get_CameraBehaviorParam_ReturnValue_13;
	Parms.CallFunc_Get_CameraBehaviorParam_ReturnValue_14 = CallFunc_Get_CameraBehaviorParam_ReturnValue_14;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue_1 = CallFunc_GetUpVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_GetRightVector_ReturnValue_1 = CallFunc_GetRightVector_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = CallFunc_Add_VectorVector_ReturnValue_5;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_6 = CallFunc_Add_VectorVector_ReturnValue_6;
	Parms.CallFunc_TLerp_ReturnValue_1 = CallFunc_TLerp_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_7 = CallFunc_Add_VectorVector_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location_11 = CallFunc_BreakTransform_Location_11;
	Parms.CallFunc_BreakTransform_Rotation_11 = CallFunc_BreakTransform_Rotation_11;
	Parms.CallFunc_BreakTransform_Scale_11 = CallFunc_BreakTransform_Scale_11;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CameraTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewCameraLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewCameraRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewCameraFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              TargetFOV                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TargetRotation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BlueprintUpdateCamera_NewCameraLocation                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BlueprintUpdateCamera_NewCameraRotation                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BlueprintUpdateCamera_NewCameraFOV                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BlueprintUpdateCamera_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CustomCameraBehavior_Location                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_CustomCameraBehavior_Rotation                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CustomCameraBehavior_FOV                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AALS_PlayerCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, float TargetFOV, const struct FRotator& TargetRotation, const struct FVector& TargetLocation, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_BlueprintUpdateCamera_NewCameraLocation, const struct FRotator& CallFunc_BlueprintUpdateCamera_NewCameraRotation, float CallFunc_BlueprintUpdateCamera_NewCameraFOV, bool CallFunc_BlueprintUpdateCamera_ReturnValue, const struct FVector& CallFunc_CustomCameraBehavior_Location, const struct FRotator& CallFunc_CustomCameraBehavior_Rotation, float CallFunc_CustomCameraBehavior_FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "BlueprintUpdateCamera");

	Params::AALS_PlayerCameraManager_C_BlueprintUpdateCamera_Params Parms{};

	Parms.CameraTarget = CameraTarget;
	Parms.TargetFOV = TargetFOV;
	Parms.TargetRotation = TargetRotation;
	Parms.TargetLocation = TargetLocation;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_BlueprintUpdateCamera_NewCameraLocation = CallFunc_BlueprintUpdateCamera_NewCameraLocation;
	Parms.CallFunc_BlueprintUpdateCamera_NewCameraRotation = CallFunc_BlueprintUpdateCamera_NewCameraRotation;
	Parms.CallFunc_BlueprintUpdateCamera_NewCameraFOV = CallFunc_BlueprintUpdateCamera_NewCameraFOV;
	Parms.CallFunc_BlueprintUpdateCamera_ReturnValue = CallFunc_BlueprintUpdateCamera_ReturnValue;
	Parms.CallFunc_CustomCameraBehavior_Location = CallFunc_CustomCameraBehavior_Location;
	Parms.CallFunc_CustomCameraBehavior_Rotation = CallFunc_CustomCameraBehavior_Rotation;
	Parms.CallFunc_CustomCameraBehavior_FOV = CallFunc_CustomCameraBehavior_FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = std::move(Parms.NewCameraLocation);

	if (NewCameraRotation != nullptr)
		*NewCameraRotation = std::move(Parms.NewCameraRotation);

	if (NewCameraFOV != nullptr)
		*NewCameraFOV = Parms.NewCameraFOV;

	return Parms.ReturnValue;

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.civision__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AALS_PlayerCameraManager_C::Civision__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "civision__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.civision__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AALS_PlayerCameraManager_C::Civision__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "civision__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.OnPossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_PlayerCameraManager_C::OnPossess(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "OnPossess");

	Params::AALS_PlayerCameraManager_C_OnPossess_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.CreateSwimmingPostProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AALS_PlayerCameraManager_C::CreateSwimmingPostProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "CreateSwimmingPostProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.RemoveSwimmingPostProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AALS_PlayerCameraManager_C::RemoveSwimmingPostProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "RemoveSwimmingPostProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.CI Vision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On_                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AALS_PlayerCameraManager_C::CI_Vision(bool On_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "CI Vision");

	Params::AALS_PlayerCameraManager_C_CI_Vision_Params Parms{};

	Parms.On_ = On_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_PlayerCameraManager.ALS_PlayerCameraManager_C.ExecuteUbergraph_ALS_PlayerCameraManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_On_                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AALS_PlayerCameraManager_C::ExecuteUbergraph_ALS_PlayerCameraManager(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue_1, class APawn* K2Node_CustomEvent_NewPawn, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_On_, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraManager_C", "ExecuteUbergraph_ALS_PlayerCameraManager");

	Params::AALS_PlayerCameraManager_C_ExecuteUbergraph_ALS_PlayerCameraManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Behavior = K2Node_DynamicCast_AsALS_Player_Camera_Behavior;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_On_ = K2Node_CustomEvent_On_;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


