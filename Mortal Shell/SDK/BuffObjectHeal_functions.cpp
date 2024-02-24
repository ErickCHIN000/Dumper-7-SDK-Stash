#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObjectHeal.BuffObjectHeal_C
// (None)

class UClass* UBuffObjectHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObjectHeal_C");

	return Clss;
}


// BuffObjectHeal_C BuffObjectHeal.Default__BuffObjectHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObjectHeal_C* UBuffObjectHeal_C::GetDefaultObj()
{
	static class UBuffObjectHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObjectHeal_C*>(UBuffObjectHeal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObjectHeal.BuffObjectHeal_C.UnpauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectHeal_C::UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "UnpauseStatusIcon");

	Params::UBuffObjectHeal_C_UnpauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.PauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectHeal_C::PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "PauseStatusIcon");

	Params::UBuffObjectHeal_C_PauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.RemoveStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectHeal_C::RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "RemoveStatusIcon");

	Params::UBuffObjectHeal_C_RemoveStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.AddStatusIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectHeal_C::AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "AddStatusIcon");

	Params::UBuffObjectHeal_C_AddStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconID != nullptr)
		*IconID = Parms.IconID;

}


// Function BuffObjectHeal.BuffObjectHeal_C.OverrideStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectHeal_C::OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "OverrideStatusIcon");

	Params::UBuffObjectHeal_C_OverrideStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectHeal_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "OnBuffEnd");

	Params::UBuffObjectHeal_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.ApplyDPS
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectHeal_C::ApplyDPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "ApplyDPS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectHeal.BuffObjectHeal_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DPS                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectHeal_C::Reinitialize(float NewDuration, float DPS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "Reinitialize");

	Params::UBuffObjectHeal_C_Reinitialize_Params Parms{};

	Parms.NewDuration = NewDuration;
	Parms.DPS = DPS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectHeal.BuffObjectHeal_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectHeal_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectHeal.BuffObjectHeal_C.ExecuteUbergraph_BuffObjectHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DPS                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectHeal_C::ExecuteUbergraph_BuffObjectHeal(int32 EntryPoint, float K2Node_CustomEvent_NewDuration, float K2Node_CustomEvent_DPS, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bInterrupted, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddStatusIcon_IconID, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectHeal_C", "ExecuteUbergraph_BuffObjectHeal");

	Params::UBuffObjectHeal_C_ExecuteUbergraph_BuffObjectHeal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewDuration = K2Node_CustomEvent_NewDuration;
	Parms.K2Node_CustomEvent_DPS = K2Node_CustomEvent_DPS;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


