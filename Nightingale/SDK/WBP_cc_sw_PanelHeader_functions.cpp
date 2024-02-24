#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_cc_sw_PanelHeader.WBP_cc_sw_PanelHeader_C
// (None)

class UClass* UWBP_cc_sw_PanelHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_cc_sw_PanelHeader_C");

	return Clss;
}


// WBP_cc_sw_PanelHeader_C WBP_cc_sw_PanelHeader.Default__WBP_cc_sw_PanelHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_cc_sw_PanelHeader_C* UWBP_cc_sw_PanelHeader_C::GetDefaultObj()
{
	static class UWBP_cc_sw_PanelHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_cc_sw_PanelHeader_C*>(UWBP_cc_sw_PanelHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_cc_sw_PanelHeader.WBP_cc_sw_PanelHeader_C.RefreshText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_PanelHeader_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_PanelHeader_C", "RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_PanelHeader.WBP_cc_sw_PanelHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_PanelHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_PanelHeader_C", "PreConstruct");

	Params::UWBP_cc_sw_PanelHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_PanelHeader.WBP_cc_sw_PanelHeader_C.ExecuteUbergraph_WBP_cc_sw_PanelHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_PanelHeader_C::ExecuteUbergraph_WBP_cc_sw_PanelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_PanelHeader_C", "ExecuteUbergraph_WBP_cc_sw_PanelHeader");

	Params::UWBP_cc_sw_PanelHeader_C_ExecuteUbergraph_WBP_cc_sw_PanelHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


