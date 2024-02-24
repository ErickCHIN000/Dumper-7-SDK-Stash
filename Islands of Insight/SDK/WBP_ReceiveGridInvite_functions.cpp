#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ReceiveGridInvite.WBP_ReceiveGridInvite_C
// (None)

class UClass* UWBP_ReceiveGridInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ReceiveGridInvite_C");

	return Clss;
}


// WBP_ReceiveGridInvite_C WBP_ReceiveGridInvite.Default__WBP_ReceiveGridInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ReceiveGridInvite_C* UWBP_ReceiveGridInvite_C::GetDefaultObj()
{
	static class UWBP_ReceiveGridInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ReceiveGridInvite_C*>(UWBP_ReceiveGridInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ReceiveGridInvite.WBP_ReceiveGridInvite_C.BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ReceiveGridInvite_C::BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReceiveGridInvite_C", "BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UWBP_ReceiveGridInvite_C_BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ReceiveGridInvite.WBP_ReceiveGridInvite_C.ExecuteUbergraph_WBP_ReceiveGridInvite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Response                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ReceiveGridInvite_C::ExecuteUbergraph_WBP_ReceiveGridInvite(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReceiveGridInvite_C", "ExecuteUbergraph_WBP_ReceiveGridInvite");

	Params::UWBP_ReceiveGridInvite_C_ExecuteUbergraph_WBP_ReceiveGridInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Response = K2Node_ComponentBoundEvent_Response;

	UObject::ProcessEvent(Func, &Parms);

}

}


