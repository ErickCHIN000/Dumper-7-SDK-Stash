#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SimpleNotificationWidget.WBP_SimpleNotificationWidget_C
// (None)

class UClass* UWBP_SimpleNotificationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SimpleNotificationWidget_C");

	return Clss;
}


// WBP_SimpleNotificationWidget_C WBP_SimpleNotificationWidget.Default__WBP_SimpleNotificationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SimpleNotificationWidget_C* UWBP_SimpleNotificationWidget_C::GetDefaultObj()
{
	static class UWBP_SimpleNotificationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SimpleNotificationWidget_C*>(UWBP_SimpleNotificationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SimpleNotificationWidget.WBP_SimpleNotificationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SimpleNotificationWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleNotificationWidget_C", "PreConstruct");

	Params::UWBP_SimpleNotificationWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleNotificationWidget.WBP_SimpleNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SimpleNotificationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleNotificationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleNotificationWidget.WBP_SimpleNotificationWidget_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleNotificationWidget_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleNotificationWidget_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleNotificationWidget.WBP_SimpleNotificationWidget_C.ExecuteUbergraph_WBP_SimpleNotificationWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SimpleNotificationWidget_C::ExecuteUbergraph_WBP_SimpleNotificationWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleNotificationWidget_C", "ExecuteUbergraph_WBP_SimpleNotificationWidget");

	Params::UWBP_SimpleNotificationWidget_C_ExecuteUbergraph_WBP_SimpleNotificationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


