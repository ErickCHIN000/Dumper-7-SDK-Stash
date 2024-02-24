#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C
// (None)

class UClass* UUMG_OnProspectNotificationBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OnProspectNotificationBase_C");

	return Clss;
}


// UMG_OnProspectNotificationBase_C UMG_OnProspectNotificationBase.Default__UMG_OnProspectNotificationBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OnProspectNotificationBase_C* UUMG_OnProspectNotificationBase_C::GetDefaultObj()
{
	static class UUMG_OnProspectNotificationBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OnProspectNotificationBase_C*>(UUMG_OnProspectNotificationBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C.SetLifeSpan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LifeSpan                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OnProspectNotificationBase_C::SetLifeSpan(float LifeSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotificationBase_C", "SetLifeSpan");

	Params::UUMG_OnProspectNotificationBase_C_SetLifeSpan_Params Parms{};

	Parms.LifeSpan = LifeSpan;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C.DestroyWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_OnProspectNotificationBase_C::DestroyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotificationBase_C", "DestroyWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C.PauseNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_OnProspectNotificationBase_C::PauseNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotificationBase_C", "PauseNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C.UnpauseNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_OnProspectNotificationBase_C::UnpauseNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotificationBase_C", "UnpauseNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C.ExecuteUbergraph_UMG_OnProspectNotificationBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Lifespan                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UUMG_OnProspectNotificationBase_C::ExecuteUbergraph_UMG_OnProspectNotificationBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Lifespan, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotificationBase_C", "ExecuteUbergraph_UMG_OnProspectNotificationBase");

	Params::UUMG_OnProspectNotificationBase_C_ExecuteUbergraph_UMG_OnProspectNotificationBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Lifespan = K2Node_CustomEvent_Lifespan;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


