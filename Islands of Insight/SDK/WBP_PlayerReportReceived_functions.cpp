#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerReportReceived.WBP_PlayerReportReceived_C
// (None)

class UClass* UWBP_PlayerReportReceived_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerReportReceived_C");

	return Clss;
}


// WBP_PlayerReportReceived_C WBP_PlayerReportReceived.Default__WBP_PlayerReportReceived_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerReportReceived_C* UWBP_PlayerReportReceived_C::GetDefaultObj()
{
	static class UWBP_PlayerReportReceived_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerReportReceived_C*>(UWBP_PlayerReportReceived_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerReportReceived.WBP_PlayerReportReceived_C.BndEvt__WBP_PlayerReportReceived_SubmitButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerReportReceived_C::BndEvt__WBP_PlayerReportReceived_SubmitButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReportReceived_C", "BndEvt__WBP_PlayerReportReceived_SubmitButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReportReceived.WBP_PlayerReportReceived_C.ExecuteUbergraph_WBP_PlayerReportReceived
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReportReceived_C::ExecuteUbergraph_WBP_PlayerReportReceived(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReportReceived_C", "ExecuteUbergraph_WBP_PlayerReportReceived");

	Params::UWBP_PlayerReportReceived_C_ExecuteUbergraph_WBP_PlayerReportReceived_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


