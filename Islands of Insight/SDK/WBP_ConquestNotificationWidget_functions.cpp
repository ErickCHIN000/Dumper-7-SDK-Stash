#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConquestNotificationWidget.WBP_ConquestNotificationWidget_C
// (None)

class UClass* UWBP_ConquestNotificationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConquestNotificationWidget_C");

	return Clss;
}


// WBP_ConquestNotificationWidget_C WBP_ConquestNotificationWidget.Default__WBP_ConquestNotificationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConquestNotificationWidget_C* UWBP_ConquestNotificationWidget_C::GetDefaultObj()
{
	static class UWBP_ConquestNotificationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConquestNotificationWidget_C*>(UWBP_ConquestNotificationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConquestNotificationWidget.WBP_ConquestNotificationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ConquestNotificationWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestNotificationWidget_C", "PreConstruct");

	Params::UWBP_ConquestNotificationWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConquestNotificationWidget.WBP_ConquestNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConquestNotificationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestNotificationWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConquestNotificationWidget.WBP_ConquestNotificationWidget_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConquestNotificationWidget_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestNotificationWidget_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConquestNotificationWidget.WBP_ConquestNotificationWidget_C.ExecuteUbergraph_WBP_ConquestNotificationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConquestNotificationWidget_C::ExecuteUbergraph_WBP_ConquestNotificationWidget(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestNotificationWidget_C", "ExecuteUbergraph_WBP_ConquestNotificationWidget");

	Params::UWBP_ConquestNotificationWidget_C_ExecuteUbergraph_WBP_ConquestNotificationWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


