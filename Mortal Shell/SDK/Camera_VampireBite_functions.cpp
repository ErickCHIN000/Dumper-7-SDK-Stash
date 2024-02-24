#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camera_VampireBite.Camera_VampireBite_C
// (Actor)

class UClass* ACamera_VampireBite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camera_VampireBite_C");

	return Clss;
}


// Camera_VampireBite_C Camera_VampireBite.Default__Camera_VampireBite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACamera_VampireBite_C* ACamera_VampireBite_C::GetDefaultObj()
{
	static class ACamera_VampireBite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACamera_VampireBite_C*>(ACamera_VampireBite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Camera_VampireBite.Camera_VampireBite_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::Debug(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "Debug");

	Params::ACamera_VampireBite_C_Debug_Params Parms{};

	Parms.InString = InString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.UpdateCameraReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::UpdateCameraReference(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "UpdateCameraReference");

	Params::ACamera_VampireBite_C_UpdateCameraReference_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.GetDesiredCamLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ACamera_VampireBite_C::GetDesiredCamLocation(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_VInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "GetDesiredCamLocation");

	Params::ACamera_VampireBite_C_GetDesiredCamLocation_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Camera_VampireBite.Camera_VampireBite_C.GetDesiredCameraRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator ACamera_VampireBite_C::GetDesiredCameraRotation(float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "GetDesiredCameraRotation");

	Params::ACamera_VampireBite_C_GetDesiredCameraRotation_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Camera_VampireBite.Camera_VampireBite_C.SetCameraSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::SetCameraSettings(class AZero_Base_C* Self2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "SetCameraSettings");

	Params::ACamera_VampireBite_C_SetCameraSettings_Params Parms{};

	Parms.Self2 = Self2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.FOV__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACamera_VampireBite_C::FOV__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "FOV__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camera_VampireBite.Camera_VampireBite_C.FOV__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACamera_VampireBite_C::FOV__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "FOV__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camera_VampireBite.Camera_VampireBite_C.SetupVampireBiteCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVampire_EnemyChar_C*        Vamp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::SetupVampireBiteCam(class AZero_Base_C* Character, class AVampire_EnemyChar_C* Vamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "SetupVampireBiteCam");

	Params::ACamera_VampireBite_C_SetupVampireBiteCam_Params Parms{};

	Parms.Character = Character;
	Parms.Vamp = Vamp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.StopBiteCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::StopBiteCam(class AZero_Base_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "StopBiteCam");

	Params::ACamera_VampireBite_C_StopBiteCam_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.StopCameraEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACamera_VampireBite_C::StopCameraEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "StopCameraEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camera_VampireBite.Camera_VampireBite_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "ReceiveTick");

	Params::ACamera_VampireBite_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Camera_VampireBite.Camera_VampireBite_C.UpdateCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACamera_VampireBite_C::UpdateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "UpdateCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camera_VampireBite.Camera_VampireBite_C.ExecuteUbergraph_Camera_VampireBite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode__1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_CustomEvent_Character_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVampire_EnemyChar_C*        K2Node_CustomEvent_Vamp                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDesiredCameraRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetDesiredCamLocation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_VampireBite_C::ExecuteUbergraph_Camera_VampireBite(int32 EntryPoint, class AZero_Base_C* K2Node_CustomEvent_Character, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode__1, class AZero_Base_C* K2Node_CustomEvent_Character_1, class AVampire_EnemyChar_C* K2Node_CustomEvent_Vamp, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetDesiredCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetDesiredCamLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camera_VampireBite_C", "ExecuteUbergraph_Camera_VampireBite");

	Params::ACamera_VampireBite_C_ExecuteUbergraph_Camera_VampireBite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode__1 = CallFunc_GetIsInPhotoMode_PhotoMode__1;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.K2Node_CustomEvent_Vamp = K2Node_CustomEvent_Vamp;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetDesiredCameraRotation_ReturnValue = CallFunc_GetDesiredCameraRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDesiredCamLocation_ReturnValue = CallFunc_GetDesiredCamLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


