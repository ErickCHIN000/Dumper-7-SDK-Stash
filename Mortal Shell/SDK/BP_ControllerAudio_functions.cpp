#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ControllerAudio.BP_ControllerAudio_C
// (Actor)

class UClass* ABP_ControllerAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ControllerAudio_C");

	return Clss;
}


// BP_ControllerAudio_C BP_ControllerAudio.Default__BP_ControllerAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ControllerAudio_C* ABP_ControllerAudio_C::GetDefaultObj()
{
	static class ABP_ControllerAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ControllerAudio_C*>(ABP_ControllerAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ControllerAudio.BP_ControllerAudio_C.UseNormalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::UseNormalText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "UseNormalText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundConcurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSet<class USoundConcurrency*>     K2Node_MakeSet_Set                                               (None)

void ABP_ControllerAudio_C::SetSoundConcurrency(bool CallFunc_IsValid_ReturnValue, TSet<class USoundConcurrency*> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetSoundConcurrency");

	Params::ABP_ControllerAudio_C_SetSoundConcurrency_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetPitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DestroyControllerAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::DestroyControllerAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DestroyControllerAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.HandlePlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Audio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::HandlePlaySound(class UAudioComponent* Audio, float StartTime, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "HandlePlaySound");

	Params::ABP_ControllerAudio_C_HandlePlaySound_Params Parms{};

	Parms.Audio = Audio;
	Parms.StartTime = StartTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.FadeInSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeInDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeVolumeLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ControllerAudio_C::FadeInSound(float FadeInDuration, float FadeVolumeLevel, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "FadeInSound");

	Params::ABP_ControllerAudio_C_FadeInSound_Params Parms{};

	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.FadeOutSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Destroy_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FadeOutDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_ControllerAudio_C::FadeOutSound(bool Destroy_, float FadeOutDuration, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "FadeOutSound");

	Params::ABP_ControllerAudio_C_FadeOutSound_Params Parms{};

	Parms.Destroy_ = Destroy_;
	Parms.FadeOutDuration = FadeOutDuration;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewVolumeMultiplier                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::SetSoundVolume(float NewVolumeMultiplier, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetSoundVolume");

	Params::ABP_ControllerAudio_C_SetSoundVolume_Params Parms{};

	Parms.NewVolumeMultiplier = NewVolumeMultiplier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.AdjustSoundVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AdjustVolumeDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AdjustVolumeLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::AdjustSoundVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "AdjustSoundVolume");

	Params::ABP_ControllerAudio_C_AdjustSoundVolume_Params Parms{};

	Parms.AdjustVolumeDuration = AdjustVolumeDuration;
	Parms.AdjustVolumeLevel = AdjustVolumeLevel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetupVibration_3D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetupVibration_3D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetupVibration_3D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetupVibration_2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetupVibration_2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetupVibration_2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetupSound_2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetupSound_2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetupSound_2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetupSound_3D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::SetupSound_3D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetupSound_3D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.Debug_NoVibration_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::Debug_NoVibration_Text(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "Debug_NoVibration_Text");

	Params::ABP_ControllerAudio_C_Debug_NoVibration_Text_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.Debug_NoSound_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::Debug_NoSound_Text(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "Debug_NoSound_Text");

	Params::ABP_ControllerAudio_C_Debug_NoSound_Text_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugVibration_2D_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::DebugVibration_2D_Text(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DebugVibration_2D_Text");

	Params::ABP_ControllerAudio_C_DebugVibration_2D_Text_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugVibration_3D_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::DebugVibration_3D_Text(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DebugVibration_3D_Text");

	Params::ABP_ControllerAudio_C_DebugVibration_3D_Text_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSound_3D_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetLifeSpan_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::DebugSound_3D_Text(float CallFunc_GetLifeSpan_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DebugSound_3D_Text");

	Params::ABP_ControllerAudio_C_DebugSound_3D_Text_Params Parms{};

	Parms.CallFunc_GetLifeSpan_ReturnValue = CallFunc_GetLifeSpan_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSound_2D_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetLifeSpan_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_ControllerAudio_C::DebugSound_2D_Text(float CallFunc_GetLifeSpan_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DebugSound_2D_Text");

	Params::ABP_ControllerAudio_C_DebugSound_2D_Text_Params Parms{};

	Parms.CallFunc_GetLifeSpan_ReturnValue = CallFunc_GetLifeSpan_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::SetSoundLifeSpan(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetSoundLifeSpan");

	Params::ABP_ControllerAudio_C_SetSoundLifeSpan_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.SetVibrationLifeSpan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::SetVibrationLifeSpan(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "SetVibrationLifeSpan");

	Params::ABP_ControllerAudio_C_SetVibrationLifeSpan_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.ShouldEnableDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDebugDualSenseAudio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::ShouldEnableDebug(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDebugDualSenseAudio_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "ShouldEnableDebug");

	Params::ABP_ControllerAudio_C_ShouldEnableDebug_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDebugDualSenseAudio_ReturnValue = CallFunc_GetDebugDualSenseAudio_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSpheres
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Audio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            Falloff                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            Local_FallOff                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            Local_Radius                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Local_Audio                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundAttenuationSettings   CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings (None)
// bool                               CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ControllerAudio_C::DebugSpheres(class UAudioComponent* Audio, class USphereComponent* Radius, class USphereComponent* Falloff, class USphereComponent* Local_FallOff, class USphereComponent* Local_Radius, class UAudioComponent* Local_Audio, const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "DebugSpheres");

	Params::ABP_ControllerAudio_C_DebugSpheres_Params Parms{};

	Parms.Audio = Audio;
	Parms.Radius = Radius;
	Parms.Falloff = Falloff;
	Parms.Local_FallOff = Local_FallOff;
	Parms.Local_Radius = Local_Radius;
	Parms.Local_Audio = Local_Audio;
	Parms.CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings = CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings;
	Parms.CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue = CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.HandleAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ControllerAudio_C::HandleAttachment(class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "HandleAttachment");

	Params::ABP_ControllerAudio_C_HandleAttachment_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.StopAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ControllerAudio_C::StopAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "StopAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerAudio.BP_ControllerAudio_C.ExecuteUbergraph_BP_ControllerAudio
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ControllerAudio_C::ExecuteUbergraph_BP_ControllerAudio(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerAudio_C", "ExecuteUbergraph_BP_ControllerAudio");

	Params::ABP_ControllerAudio_C_ExecuteUbergraph_BP_ControllerAudio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


