#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoModePawn.BP_PhotoModePawn_C
// (Actor, Pawn)

class UClass* ABP_PhotoModePawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoModePawn_C");

	return Clss;
}


// BP_PhotoModePawn_C BP_PhotoModePawn.Default__BP_PhotoModePawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhotoModePawn_C* ABP_PhotoModePawn_C::GetDefaultObj()
{
	static class ABP_PhotoModePawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhotoModePawn_C*>(ABP_PhotoModePawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.SetInitialTrasform_Normal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::SetInitialTrasform_Normal(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "SetInitialTrasform_Normal");

	Params::ABP_PhotoModePawn_C_SetInitialTrasform_Normal_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.SetInitialTransform_Cutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetActiveCameraComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::SetInitialTransform_Cutscene(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UCameraComponent* CallFunc_GetActiveCameraComponent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "SetInitialTransform_Cutscene");

	Params::ABP_PhotoModePawn_C_SetInitialTransform_Cutscene_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetActiveCameraComponent_ReturnValue = CallFunc_GetActiveCameraComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.EnterPhotoMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotoModeHUD_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::EnterPhotoMode(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPhotoModeHUD_C* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "EnterPhotoMode");

	Params::ABP_PhotoModePawn_C_EnterPhotoMode_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.LeavePhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::LeavePhotoMode(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "LeavePhotoMode");

	Params::ABP_PhotoModePawn_C_LeavePhotoMode_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InterpZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InterpZoom(float DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InterpZoom");

	Params::ABP_PhotoModePawn_C_InterpZoom_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavUp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavUp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavUp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavUp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavUp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavUp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavUp__Hold__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavUp__Hold__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavUp__Hold__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavDown__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavDown__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavDown__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavDown__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavDown__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavDown__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavDown__Hold__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavDown__Hold__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavDown__Hold__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavLeft__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavLeft__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavLeft__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavLeft__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavLeft__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavLeft__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavLeft__Hold__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavLeft__Hold__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavLeft__Hold__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavRight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavRight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavRight__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavRight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavRight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavRight__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_NavRight__Hold__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_NavRight__Hold__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_NavRight__Hold__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_TakePicture__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_TakePicture__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_TakePicture__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_TakePicture__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_TakePicture__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_TakePicture__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_TakePicture__ShowHUD__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_TakePicture__ShowHUD__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_TakePicture__ShowHUD__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_TakePicture__TakePicture__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_TakePicture__TakePicture__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_TakePicture__TakePicture__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Timeline_TakePicture__HideHUD__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Timeline_TakePicture__HideHUD__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Timeline_TakePicture__HideHUD__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpActEvt_LMB_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpActEvt_LMB_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpActEvt_LMB_K2Node_InputActionEvent_1");

	Params::ABP_PhotoModePawn_C_InpActEvt_LMB_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpActEvt_LMB_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpActEvt_LMB_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpActEvt_LMB_K2Node_InputActionEvent_0");

	Params::ABP_PhotoModePawn_C_InpActEvt_LMB_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_3");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_PhotoModeAscend_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_PhotoModeAscend_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_PhotoModeAscend_K2Node_InputAxisEvent_4");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_PhotoModeAscend_K2Node_InputAxisEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_LookUpRateMouse_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_LookUpRateMouse_K2Node_InputAxisEvent_5(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_LookUpRateMouse_K2Node_InputAxisEvent_5");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_LookUpRateMouse_K2Node_InputAxisEvent_5_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_TurnRateMouse_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_TurnRateMouse_K2Node_InputAxisEvent_6(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_TurnRateMouse_K2Node_InputAxisEvent_6");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_TurnRateMouse_K2Node_InputAxisEvent_6_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.OnRMBPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::OnRMBPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "OnRMBPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.OnRMBReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipMousePosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::OnRMBReleased(bool SkipMousePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "OnRMBReleased");

	Params::ABP_PhotoModePawn_C_OnRMBReleased_Params Parms{};

	Parms.SkipMousePosition = SkipMousePosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ReceiveTick");

	Params::ABP_PhotoModePawn_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ReceivePossessed");

	Params::ABP_PhotoModePawn_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 OldController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ReceiveUnpossessed");

	Params::ABP_PhotoModePawn_C_ReceiveUnpossessed_Params Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavUp_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavUp_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavUp_Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavUp_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavUp_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavUp_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavDown_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavDown_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavDown_Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavDown_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavDown_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavDown_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavLeft_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavLeft_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavLeft_Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavLeft_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavLeft_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavLeft_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavRight_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavRight_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavRight_Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.NavRight_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::NavRight_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "NavRight_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.TakePicture_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::TakePicture_Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "TakePicture_Play");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.InpAxisEvt_PhotoModeZoom_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhotoModePawn_C::InpAxisEvt_PhotoModeZoom_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "InpAxisEvt_PhotoModeZoom_K2Node_InputAxisEvent_0");

	Params::ABP_PhotoModePawn_C_InpAxisEvt_PhotoModeZoom_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ResetToCharLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PhotoModePawn_C::ResetToCharLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ResetToCharLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModePawn.BP_PhotoModePawn_C.ExecuteUbergraph_BP_PhotoModePawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_SkipMousePosition                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_OldController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_PhotoModePawn_C::ExecuteUbergraph_BP_PhotoModePawn(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, float K2Node_InputAxisEvent_AxisValue_7, float K2Node_InputAxisEvent_AxisValue_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, bool K2Node_CustomEvent_SkipMousePosition, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_Event_DeltaSeconds, class AController* K2Node_Event_NewController, class AController* K2Node_Event_OldController, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float K2Node_InputAxisEvent_AxisValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModePawn_C", "ExecuteUbergraph_BP_PhotoModePawn");

	Params::ABP_PhotoModePawn_C_ExecuteUbergraph_BP_PhotoModePawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_7 = K2Node_InputAxisEvent_AxisValue_7;
	Parms.K2Node_InputAxisEvent_AxisValue_6 = K2Node_InputAxisEvent_AxisValue_6;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue_5 = K2Node_InputAxisEvent_AxisValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.K2Node_InputAxisEvent_AxisValue_4 = K2Node_InputAxisEvent_AxisValue_4;
	Parms.K2Node_InputAxisEvent_AxisValue_3 = K2Node_InputAxisEvent_AxisValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.K2Node_InputAxisEvent_AxisValue_2 = K2Node_InputAxisEvent_AxisValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.K2Node_CustomEvent_SkipMousePosition = K2Node_CustomEvent_SkipMousePosition;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1 = K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_Event_OldController = K2Node_Event_OldController;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_1 = CallFunc_K2_SetActorTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_1 = CallFunc_K2_SetActorTransform_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


