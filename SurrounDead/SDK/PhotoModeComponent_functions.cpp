#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PhotoModeComponent.PhotoModeComponent_C
// (None)

class UClass* UPhotoModeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotoModeComponent_C");

	return Clss;
}


// PhotoModeComponent_C PhotoModeComponent.Default__PhotoModeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotoModeComponent_C* UPhotoModeComponent_C::GetDefaultObj()
{
	static class UPhotoModeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotoModeComponent_C*>(UPhotoModeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotoModeComponent.PhotoModeComponent_C.UpdateOutputFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Custom_Path                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Directory_Path_Correction_Corrected_Path                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeScreenshotPath_Normalized_Path                 (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::UpdateOutputFolder(const class FString& Custom_Path, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "UpdateOutputFolder");

	Params::UPhotoModeComponent_C_UpdateOutputFolder_Params Parms{};

	Parms.Custom_Path = Custom_Path;
	Parms.CallFunc_Directory_Path_Correction_Corrected_Path = CallFunc_Directory_Path_Correction_Corrected_Path;
	Parms.CallFunc_NormalizeScreenshotPath_Normalized_Path = CallFunc_NormalizeScreenshotPath_Normalized_Path;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.GetCameraLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     CameraLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::GetCameraLocation(struct FVector* CameraLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "GetCameraLocation");

	Params::UPhotoModeComponent_C_GetCameraLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CameraLocation != nullptr)
		*CameraLocation = std::move(Parms.CameraLocation);

}


// Function PhotoModeComponent.PhotoModeComponent_C.GetSliderCameraDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             CameraDistance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_CameraDistance_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::GetSliderCameraDistance(double* CameraDistance, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_CameraDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "GetSliderCameraDistance");

	Params::UPhotoModeComponent_C_GetSliderCameraDistance_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_FunctionResult_CameraDistance_ImplicitCast = K2Node_FunctionResult_CameraDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CameraDistance != nullptr)
		*CameraDistance = Parms.CameraDistance;

}


// Function PhotoModeComponent.PhotoModeComponent_C.GetSliderRoll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Roll                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Roll_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::GetSliderRoll(double* Roll, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_Roll_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "GetSliderRoll");

	Params::UPhotoModeComponent_C_GetSliderRoll_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_FunctionResult_Roll_ImplicitCast = K2Node_FunctionResult_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Roll != nullptr)
		*Roll = Parms.Roll;

}


// Function PhotoModeComponent.PhotoModeComponent_C.GetSliderFOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_FOV_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::GetSliderFOV(double* FOV, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_FOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "GetSliderFOV");

	Params::UPhotoModeComponent_C_GetSliderFOV_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_FunctionResult_FOV_ImplicitCast = K2Node_FunctionResult_FOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function PhotoModeComponent.PhotoModeComponent_C.GetPostProcessVolume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          PostProcessVolume                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          HigherPostProcessVolume                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             GreatestPriority                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          K2Node_DynamicCast_AsPost_Process_Volume                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::GetPostProcessVolume(bool* IsValid, class APostProcessVolume** PostProcessVolume, class APostProcessVolume* HigherPostProcessVolume, double GreatestPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "GetPostProcessVolume");

	Params::UPhotoModeComponent_C_GetPostProcessVolume_Params Parms{};

	Parms.HigherPostProcessVolume = HigherPostProcessVolume;
	Parms.GreatestPriority = GreatestPriority;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPost_Process_Volume = K2Node_DynamicCast_AsPost_Process_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (PostProcessVolume != nullptr)
		*PostProcessVolume = Parms.PostProcessVolume;

}


// Function PhotoModeComponent.PhotoModeComponent_C.UnpausedGameAxisMovementControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             AxisValueIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AxisValueOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::UnpausedGameAxisMovementControl(double AxisValueIn, double* AxisValueOut, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "UnpausedGameAxisMovementControl");

	Params::UPhotoModeComponent_C_UnpausedGameAxisMovementControl_Params Parms{};

	Parms.AxisValueIn = AxisValueIn;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AxisValueOut != nullptr)
		*AxisValueOut = Parms.AxisValueOut;

}


// Function PhotoModeComponent.PhotoModeComponent_C.IconSelector - Gallery
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::IconSelector_Minus_Gallery(const struct FKey& Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "IconSelector - Gallery");

	Params::UPhotoModeComponent_C_IconSelector_Minus_Gallery_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.IconSelector - Photo Mode Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::IconSelector_Minus_Photo_Mode_Menu(const struct FKey& Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "IconSelector - Photo Mode Menu");

	Params::UPhotoModeComponent_C_IconSelector_Minus_Photo_Mode_Menu_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.ResetPhotoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeComponent_C::ResetPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "ResetPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeComponent.PhotoModeComponent_C.OpenGallery
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        LastKey                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UPhotoModeComponent_C::OpenGallery(const struct FKey& LastKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "OpenGallery");

	Params::UPhotoModeComponent_C_OpenGallery_Params Parms{};

	Parms.LastKey = LastKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.ResetGallery
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeComponent_C::ResetGallery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "ResetGallery");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeComponent.PhotoModeComponent_C.Initialization
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  PlayerReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CameraComponentReference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         SpringArmReference                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::Initialization(class ACharacter* PlayerReference, class UCameraComponent* CameraComponentReference, class USpringArmComponent* SpringArmReference, class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "Initialization");

	Params::UPhotoModeComponent_C_Initialization_Params Parms{};

	Parms.PlayerReference = PlayerReference;
	Parms.CameraComponentReference = CameraComponentReference;
	Parms.SpringArmReference = SpringArmReference;
	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.Photo Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UPhotoModeComponent_C::Photo_Mode(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "Photo Mode");

	Params::UPhotoModeComponent_C_Photo_Mode_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.ExecuteUbergraph_PhotoModeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotoModeWidget_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPostProcessVolume_isValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          CallFunc_GetPostProcessVolume_PostProcessVolume                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotoModeGalleryWidget_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          K2Node_DynamicCast_AsPost_Process_Volume                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessPressets        K2Node_MakeStruct_PostProcessPressets                            (HasGetValueTypeHash)
// class FString                      CallFunc_Directory_Path_Correction_Corrected_Path                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeScreenshotPath_Normalized_Path                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_CustomEvent_LastKey                                       (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_PlayerReference                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_CustomEvent_CameraComponentReference                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USpringArmComponent*         K2Node_CustomEvent_SpringArmReference                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Size_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultSpringArmLength_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultFOV_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Brightness_25_BEBC6EA248982279F9B091A036657DF0_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TargetArmLength_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::ExecuteUbergraph_PhotoModeComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPhotoModeWidget_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_GetPostProcessVolume_isValid, class APostProcessVolume* CallFunc_GetPostProcessVolume_PostProcessVolume, class UPhotoModeGalleryWidget_C* CallFunc_Create_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, const struct FPostProcessPressets& K2Node_MakeStruct_PostProcessPressets, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_1, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_2, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FKey& K2Node_CustomEvent_LastKey, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue_7, class ACharacter* K2Node_CustomEvent_PlayerReference, class UCameraComponent* K2Node_CustomEvent_CameraComponentReference, class USpringArmComponent* K2Node_CustomEvent_SpringArmReference, class APlayerController* K2Node_CustomEvent_PlayerController, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, float CallFunc_GetGlobalTimeDilation_ReturnValue_3, const struct FKey& K2Node_CustomEvent_Key, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, float K2Node_MakeStruct_Size_ImplicitCast, double K2Node_VariableSet_DefaultSpringArmLength_ImplicitCast, double K2Node_VariableSet_DefaultFOV_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float K2Node_MakeStruct_Brightness_25_BEBC6EA248982279F9B091A036657DF0_ImplicitCast, float K2Node_VariableSet_TargetArmLength_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast_1, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "ExecuteUbergraph_PhotoModeComponent");

	Params::UPhotoModeComponent_C_ExecuteUbergraph_PhotoModeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetPostProcessVolume_isValid = CallFunc_GetPostProcessVolume_isValid;
	Parms.CallFunc_GetPostProcessVolume_PostProcessVolume = CallFunc_GetPostProcessVolume_PostProcessVolume;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPost_Process_Volume = K2Node_DynamicCast_AsPost_Process_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.K2Node_MakeStruct_PostProcessPressets = K2Node_MakeStruct_PostProcessPressets;
	Parms.CallFunc_Directory_Path_Correction_Corrected_Path = CallFunc_Directory_Path_Correction_Corrected_Path;
	Parms.CallFunc_NormalizeScreenshotPath_Normalized_Path = CallFunc_NormalizeScreenshotPath_Normalized_Path;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue = CallFunc_GetGlobalTimeDilation_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_1 = CallFunc_GetGlobalTimeDilation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_CastToCharacter_Character_1 = CallFunc_CastToCharacter_Character_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CastToCharacter_Character_2 = CallFunc_CastToCharacter_Character_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.K2Node_CustomEvent_LastKey = K2Node_CustomEvent_LastKey;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_PlayerReference = K2Node_CustomEvent_PlayerReference;
	Parms.K2Node_CustomEvent_CameraComponentReference = K2Node_CustomEvent_CameraComponentReference;
	Parms.K2Node_CustomEvent_SpringArmReference = K2Node_CustomEvent_SpringArmReference;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_2 = CallFunc_GetGlobalTimeDilation_ReturnValue_2;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_3 = CallFunc_GetGlobalTimeDilation_ReturnValue_3;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;
	Parms.K2Node_MakeStruct_Size_ImplicitCast = K2Node_MakeStruct_Size_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultSpringArmLength_ImplicitCast = K2Node_VariableSet_DefaultSpringArmLength_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultFOV_ImplicitCast = K2Node_VariableSet_DefaultFOV_ImplicitCast;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1 = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.K2Node_MakeStruct_Brightness_25_BEBC6EA248982279F9B091A036657DF0_ImplicitCast = K2Node_MakeStruct_Brightness_25_BEBC6EA248982279F9B091A036657DF0_ImplicitCast;
	Parms.K2Node_VariableSet_TargetArmLength_ImplicitCast = K2Node_VariableSet_TargetArmLength_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast;
	Parms.K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast = K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1 = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1;
	Parms.K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast_1 = K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast_1;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_2 = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeComponent.PhotoModeComponent_C.PhotoModeClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeComponent_C::PhotoModeClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "PhotoModeClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeComponent.PhotoModeComponent_C.PhotoModeOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTimeDilation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeComponent_C::PhotoModeOpened__DelegateSignature(double CurrentTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeComponent_C", "PhotoModeOpened__DelegateSignature");

	Params::UPhotoModeComponent_C_PhotoModeOpened__DelegateSignature_Params Parms{};

	Parms.CurrentTimeDilation = CurrentTimeDilation;

	UObject::ProcessEvent(Func, &Parms);

}

}


