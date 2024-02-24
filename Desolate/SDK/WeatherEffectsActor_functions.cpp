#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeatherEffectsActor.WeatherEffectsActor_C
// (Actor)

class UClass* AWeatherEffectsActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeatherEffectsActor_C");

	return Clss;
}


// WeatherEffectsActor_C WeatherEffectsActor.Default__WeatherEffectsActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeatherEffectsActor_C* AWeatherEffectsActor_C::GetDefaultObj()
{
	static class AWeatherEffectsActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeatherEffectsActor_C*>(AWeatherEffectsActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeatherEffectsActor.WeatherEffectsActor_C.UpdateRainSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeatherEffectsActor_C::UpdateRainSound(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "UpdateRainSound");

	Params::AWeatherEffectsActor_C_UpdateRainSound_Params Parms{};

	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.UpdateRainVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeatherEffectsActor_C::UpdateRainVFX(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "UpdateRainVFX");

	Params::AWeatherEffectsActor_C_UpdateRainVFX_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartRainVFXTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ParticleNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AWeatherEffectsActor_C::StartRainVFXTimer(float ParticleNumber, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartRainVFXTimer");

	Params::AWeatherEffectsActor_C_StartRainVFXTimer_Params Parms{};

	Parms.ParticleNumber = ParticleNumber;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.UpdateFogVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeatherEffectsActor_C::UpdateFogVFX(bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "UpdateFogVFX");

	Params::AWeatherEffectsActor_C_UpdateFogVFX_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartFogVFXTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Dfog                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Ffog                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AWeatherEffectsActor_C::StartFogVFXTimer(float Dfog, const struct FVector& Ffog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartFogVFXTimer");

	Params::AWeatherEffectsActor_C_StartFogVFXTimer_Params Parms{};

	Parms.Dfog = Dfog;
	Parms.Ffog = Ffog;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartToxicRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartToxicRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartToxicRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopToxicRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopToxicRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopToxicRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartSnow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopSnow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartAsh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartAsh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartAsh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopAsh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopAsh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopAsh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartFog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopFog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartSmallRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartSmallRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartSmallRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartMediumRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartMediumRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartMediumRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartBigRain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartBigRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartBigRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeatherEffectsActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "ReceiveTick");

	Params::AWeatherEffectsActor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StartOutdoorSnow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StartOutdoorSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StartOutdoorSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.StopOutdoorSnow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeatherEffectsActor_C::StopOutdoorSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "StopOutdoorSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeatherEffectsActor.WeatherEffectsActor_C.ExecuteUbergraph_WeatherEffectsActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeatherEffectsActor_C::ExecuteUbergraph_WeatherEffectsActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeatherEffectsActor_C", "ExecuteUbergraph_WeatherEffectsActor");

	Params::AWeatherEffectsActor_C_ExecuteUbergraph_WeatherEffectsActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


