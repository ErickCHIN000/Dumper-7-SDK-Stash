#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SharedGameState.SharedGameState_C
// (Actor)

class UClass* ASharedGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SharedGameState_C");

	return Clss;
}


// SharedGameState_C SharedGameState.Default__SharedGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASharedGameState_C* ASharedGameState_C::GetDefaultObj()
{
	static class ASharedGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASharedGameState_C*>(ASharedGameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SharedGameState.SharedGameState_C.GetForceHideCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::GetForceHideCursor(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "GetForceHideCursor");

	Params::ASharedGameState_C_GetForceHideCursor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function SharedGameState.SharedGameState_C.GetIsMouseMoving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMoving                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::GetIsMouseMoving(bool* IsMoving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "GetIsMouseMoving");

	Params::ASharedGameState_C_GetIsMouseMoving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMoving != nullptr)
		*IsMoving = Parms.IsMoving;

}


// Function SharedGameState.SharedGameState_C.IsInKeyboardMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InKeyboardMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::IsInKeyboardMode(bool* InKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "IsInKeyboardMode");

	Params::ASharedGameState_C_IsInKeyboardMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InKeyboardMode != nullptr)
		*InKeyboardMode = Parms.InKeyboardMode;

}


// Function SharedGameState.SharedGameState_C.MouseIdleResetTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::MouseIdleResetTimer(bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "MouseIdleResetTimer");

	Params::ASharedGameState_C_MouseIdleResetTimer_Params Parms{};

	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.SetAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::SetAudio(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "SetAudio");

	Params::ASharedGameState_C_SetAudio_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.HandleKeyboardModeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsKeyboardMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_KeyboardMode                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::HandleKeyboardModeChange(bool IsKeyboardMode, bool Local_KeyboardMode, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "HandleKeyboardModeChange");

	Params::ASharedGameState_C_HandleKeyboardModeChange_Params Parms{};

	Parms.IsKeyboardMode = IsKeyboardMode;
	Parms.Local_KeyboardMode = Local_KeyboardMode;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.OnRep_GameIsOver
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::OnRep_GameIsOver(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "OnRep_GameIsOver");

	Params::ASharedGameState_C_OnRep_GameIsOver_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASharedGameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.GameOver
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::GameOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "GameOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.MatchStarted
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::MatchStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "MatchStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.StartNewMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  NewMusic                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInVolumeLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutVolumeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::StartNewMusic(class USoundBase* NewMusic, float FadeInDuration, float FadeInVolumeLevel, float FadeOutDuration, float FadeOutVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "StartNewMusic");

	Params::ASharedGameState_C_StartNewMusic_Params Parms{};

	Parms.NewMusic = NewMusic;
	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeInVolumeLevel = FadeInVolumeLevel;
	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeOutVolumeLevel = FadeOutVolumeLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.PlayIntroMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  NewMusic                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInVolumeLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutVolumeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::PlayIntroMusic(class USoundBase* NewMusic, float FadeInDuration, float FadeInVolumeLevel, float FadeOutVolumeLevel, float FadeOutDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "PlayIntroMusic");

	Params::ASharedGameState_C_PlayIntroMusic_Params Parms{};

	Parms.NewMusic = NewMusic;
	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeInVolumeLevel = FadeInVolumeLevel;
	Parms.FadeOutVolumeLevel = FadeOutVolumeLevel;
	Parms.FadeOutDuration = FadeOutDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.MusicFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::MusicFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "MusicFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.StartNewAmbientFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  NewFX                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeInVolumeLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeOutVolumeLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::StartNewAmbientFX(class USoundBase* NewFX, float FadeInDuration, float FadeInVolumeLevel, float FadeOutDuration, float FadeOutVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "StartNewAmbientFX");

	Params::ASharedGameState_C_StartNewAmbientFX_Params Parms{};

	Parms.NewFX = NewFX;
	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeInVolumeLevel = FadeInVolumeLevel;
	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeOutVolumeLevel = FadeOutVolumeLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.SetKeyboardMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsKeyboardMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::SetKeyboardMode(bool IsKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "SetKeyboardMode");

	Params::ASharedGameState_C_SetKeyboardMode_Params Parms{};

	Parms.IsKeyboardMode = IsKeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.InputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESwitcherooInputDevice  ActiveInputDevice                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::InputDeviceChanged(enum class ESwitcherooInputDevice ActiveInputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "InputDeviceChanged");

	Params::ASharedGameState_C_InputDeviceChanged_Params Parms{};

	Parms.ActiveInputDevice = ActiveInputDevice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.AudioSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::AudioSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "AudioSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.Idle_Mouse_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::Idle_Mouse_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "Idle_Mouse_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "ReceiveTick");

	Params::ASharedGameState_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.Idle_Mouse_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::Idle_Mouse_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "Idle_Mouse_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.SetForceHideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::SetForceHideCursor(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "SetForceHideCursor");

	Params::ASharedGameState_C_SetForceHideCursor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.InputDeviceTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESwitcherooInputDeviceTypeActiveInputDeviceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::InputDeviceTypeChanged(enum class ESwitcherooInputDeviceType ActiveInputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "InputDeviceTypeChanged");

	Params::ASharedGameState_C_InputDeviceTypeChanged_Params Parms{};

	Parms.ActiveInputDeviceType = ActiveInputDeviceType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.StopMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASharedGameState_C::StopMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "StopMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SharedGameState.SharedGameState_C.ExecuteUbergraph_SharedGameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_NewMusic_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInDuration_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInVolumeLevel_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutDuration_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutVolumeLevel_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_NewMusic                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInDuration_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInVolumeLevel_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutVolumeLevel_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutDuration_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_NewFX                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInDuration                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeInVolumeLevel                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutDuration                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FadeOutVolumeLevel                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsKeyboardMode                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwitcherooInputDevice  K2Node_CustomEvent_ActiveInputDevice                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USwitcherooSettings*         CallFunc_GetSwitcherooSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBoolean                CallFunc_IfConsole_OutResult                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwitcherooInputDevice  CallFunc_GetDefaultInputDevice_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESwitcherooInputDeviceTypeK2Node_CustomEvent_ActiveInputDeviceType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASharedGameState_C::ExecuteUbergraph_SharedGameState(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class USoundBase* K2Node_CustomEvent_NewMusic_1, float K2Node_CustomEvent_FadeInDuration_2, float K2Node_CustomEvent_FadeInVolumeLevel_2, float K2Node_CustomEvent_FadeOutDuration_2, float K2Node_CustomEvent_FadeOutVolumeLevel_2, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* K2Node_CustomEvent_NewMusic, float K2Node_CustomEvent_FadeInDuration_1, float K2Node_CustomEvent_FadeInVolumeLevel_1, float K2Node_CustomEvent_FadeOutVolumeLevel_1, float K2Node_CustomEvent_FadeOutDuration_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class USoundBase* K2Node_CustomEvent_NewFX, float K2Node_CustomEvent_FadeInDuration, float K2Node_CustomEvent_FadeInVolumeLevel, float K2Node_CustomEvent_FadeOutDuration, float K2Node_CustomEvent_FadeOutVolumeLevel, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_IsKeyboardMode, enum class ESwitcherooInputDevice K2Node_CustomEvent_ActiveInputDevice, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, class USwitcherooSettings* CallFunc_GetSwitcherooSettings_ReturnValue, enum class EBoolean CallFunc_IfConsole_OutResult, enum class ESwitcherooInputDevice CallFunc_GetDefaultInputDevice_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool K2Node_Event_Value, enum class ESwitcherooInputDeviceType K2Node_CustomEvent_ActiveInputDeviceType, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "ExecuteUbergraph_SharedGameState");

	Params::ASharedGameState_C_ExecuteUbergraph_SharedGameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_NewMusic_1 = K2Node_CustomEvent_NewMusic_1;
	Parms.K2Node_CustomEvent_FadeInDuration_2 = K2Node_CustomEvent_FadeInDuration_2;
	Parms.K2Node_CustomEvent_FadeInVolumeLevel_2 = K2Node_CustomEvent_FadeInVolumeLevel_2;
	Parms.K2Node_CustomEvent_FadeOutDuration_2 = K2Node_CustomEvent_FadeOutDuration_2;
	Parms.K2Node_CustomEvent_FadeOutVolumeLevel_2 = K2Node_CustomEvent_FadeOutVolumeLevel_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewMusic = K2Node_CustomEvent_NewMusic;
	Parms.K2Node_CustomEvent_FadeInDuration_1 = K2Node_CustomEvent_FadeInDuration_1;
	Parms.K2Node_CustomEvent_FadeInVolumeLevel_1 = K2Node_CustomEvent_FadeInVolumeLevel_1;
	Parms.K2Node_CustomEvent_FadeOutVolumeLevel_1 = K2Node_CustomEvent_FadeOutVolumeLevel_1;
	Parms.K2Node_CustomEvent_FadeOutDuration_1 = K2Node_CustomEvent_FadeOutDuration_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewFX = K2Node_CustomEvent_NewFX;
	Parms.K2Node_CustomEvent_FadeInDuration = K2Node_CustomEvent_FadeInDuration;
	Parms.K2Node_CustomEvent_FadeInVolumeLevel = K2Node_CustomEvent_FadeInVolumeLevel;
	Parms.K2Node_CustomEvent_FadeOutDuration = K2Node_CustomEvent_FadeOutDuration;
	Parms.K2Node_CustomEvent_FadeOutVolumeLevel = K2Node_CustomEvent_FadeOutVolumeLevel;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_IsKeyboardMode = K2Node_CustomEvent_IsKeyboardMode;
	Parms.K2Node_CustomEvent_ActiveInputDevice = K2Node_CustomEvent_ActiveInputDevice;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetSwitcherooSettings_ReturnValue = CallFunc_GetSwitcherooSettings_ReturnValue;
	Parms.CallFunc_IfConsole_OutResult = CallFunc_IfConsole_OutResult;
	Parms.CallFunc_GetDefaultInputDevice_ReturnValue = CallFunc_GetDefaultInputDevice_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_CustomEvent_ActiveInputDeviceType = K2Node_CustomEvent_ActiveInputDeviceType;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SharedGameState.SharedGameState_C.OnKeyboardModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bKeyboardMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASharedGameState_C::OnKeyboardModeChanged__DelegateSignature(bool bKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SharedGameState_C", "OnKeyboardModeChanged__DelegateSignature");

	Params::ASharedGameState_C_OnKeyboardModeChanged__DelegateSignature_Params Parms{};

	Parms.bKeyboardMode = bKeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


