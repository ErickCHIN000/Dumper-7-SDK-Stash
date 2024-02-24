#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MapMenu_Dummy.WBP_MapMenu_Dummy_C
// (None)

class UClass* UWBP_MapMenu_Dummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MapMenu_Dummy_C");

	return Clss;
}


// WBP_MapMenu_Dummy_C WBP_MapMenu_Dummy.Default__WBP_MapMenu_Dummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MapMenu_Dummy_C* UWBP_MapMenu_Dummy_C::GetDefaultObj()
{
	static class UWBP_MapMenu_Dummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MapMenu_Dummy_C*>(UWBP_MapMenu_Dummy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MapMenu_Dummy.WBP_MapMenu_Dummy_C.SwitchTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMenu_Dummy_C::SwitchTab(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_Dummy_C", "SwitchTab");

	Params::UWBP_MapMenu_Dummy_C_SwitchTab_Params Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu_Dummy.WBP_MapMenu_Dummy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MapMenu_Dummy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_Dummy_C", "PreConstruct");

	Params::UWBP_MapMenu_Dummy_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu_Dummy.WBP_MapMenu_Dummy_C.ExecuteUbergraph_WBP_MapMenu_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MapMenu_Dummy_C::ExecuteUbergraph_WBP_MapMenu_Dummy(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_Dummy_C", "ExecuteUbergraph_WBP_MapMenu_Dummy");

	Params::UWBP_MapMenu_Dummy_C_ExecuteUbergraph_WBP_MapMenu_Dummy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


