#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObjectTimeBased.BuffObjectTimeBased_C
// (None)

class UClass* UBuffObjectTimeBased_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObjectTimeBased_C");

	return Clss;
}


// BuffObjectTimeBased_C BuffObjectTimeBased.Default__BuffObjectTimeBased_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObjectTimeBased_C* UBuffObjectTimeBased_C::GetDefaultObj()
{
	static class UBuffObjectTimeBased_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObjectTimeBased_C*>(UBuffObjectTimeBased_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.StartBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::StartBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "StartBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.EndBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::EndBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "EndBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.InterruptBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::InterruptBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "InterruptBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.ResetDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectTimeBased_C::ResetDuration(float NewDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "ResetDuration");

	Params::UBuffObjectTimeBased_C_ResetDuration_Params Parms{};

	Parms.NewDuration = NewDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.OnAttachToDeathStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeathShell_C*            DeathShell                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectTimeBased_C::OnAttachToDeathStatue(class ABP_DeathShell_C* DeathShell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "OnAttachToDeathStatue");

	Params::UBuffObjectTimeBased_C_OnAttachToDeathStatue_Params Parms{};

	Parms.DeathShell = DeathShell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.OnDetachFromDeathStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::OnDetachFromDeathStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "OnDetachFromDeathStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.OnExpiredOnStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::OnExpiredOnStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "OnExpiredOnStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.OnBuffExpiredOnDeathStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectTimeBased_C::OnBuffExpiredOnDeathStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "OnBuffExpiredOnDeathStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectTimeBased.BuffObjectTimeBased_C.ExecuteUbergraph_BuffObjectTimeBased
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeathShell_C*            K2Node_Event_DeathShell                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimerRemainingTimebyHandle_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimerRemainingTimebyHandle_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectTimeBased_C::ExecuteUbergraph_BuffObjectTimeBased(int32 EntryPoint, class UBuffObject_C* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_CustomEvent_NewDuration, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class ABP_DeathShell_C* K2Node_Event_DeathShell, float CallFunc_GetTimerRemainingTimebyHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, float CallFunc_GetTimerRemainingTimebyHandle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectTimeBased_C", "ExecuteUbergraph_BuffObjectTimeBased");

	Params::UBuffObjectTimeBased_C_ExecuteUbergraph_BuffObjectTimeBased_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NewDuration = K2Node_CustomEvent_NewDuration;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_Event_DeathShell = K2Node_Event_DeathShell;
	Parms.CallFunc_GetTimerRemainingTimebyHandle_ReturnValue = CallFunc_GetTimerRemainingTimebyHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_GetTimerRemainingTimebyHandle_ReturnValue_1 = CallFunc_GetTimerRemainingTimebyHandle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


