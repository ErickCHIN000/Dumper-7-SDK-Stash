#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C
// (Actor)

class UClass* ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C");

	return Clss;
}


// BP_AoePayload_Dispellable_SunGiant_Sandstorm_C BP_AoePayload_Dispellable_SunGiant_Sandstorm.Default__BP_AoePayload_Dispellable_SunGiant_Sandstorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C* ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::GetDefaultObj()
{
	static class ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C*>(ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.StopOneShotAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::StopOneShotAudio(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "StopOneShotAudio");

	Params::ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C_StopOneShotAudio_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;
	Parms.CallFunc_PostAkEvent_ReturnValue_2 = CallFunc_PostAkEvent_ReturnValue_2;
	Parms.CallFunc_PostAkEvent_ReturnValue_3 = CallFunc_PostAkEvent_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.PlayOneShotAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::PlayOneShotAudio(bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "PlayOneShotAudio");

	Params::ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C_PlayOneShotAudio_Params Parms{};

	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_2 = CallFunc_PostAkEventScoped_ReturnValue_2;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_3 = CallFunc_PostAkEventScoped_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.HandleFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::HandleFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "HandleFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.HandleFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::HandleFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "HandleFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C.ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_Sandstorm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C::ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_Sandstorm(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ Temp_delegate_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AoePayload_Dispellable_SunGiant_Sandstorm_C", "ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_Sandstorm");

	Params::ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C_ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_Sandstorm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue_1 = CallFunc_PostAkEvent_ReturnValue_1;
	Parms.CallFunc_PostAkEvent_ReturnValue_2 = CallFunc_PostAkEvent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


