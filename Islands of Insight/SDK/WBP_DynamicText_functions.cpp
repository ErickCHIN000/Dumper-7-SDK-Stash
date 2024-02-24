#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DynamicText.WBP_DynamicText_C
// (None)

class UClass* UWBP_DynamicText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DynamicText_C");

	return Clss;
}


// WBP_DynamicText_C WBP_DynamicText.Default__WBP_DynamicText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DynamicText_C* UWBP_DynamicText_C::GetDefaultObj()
{
	static class UWBP_DynamicText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DynamicText_C*>(UWBP_DynamicText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DynamicText.WBP_DynamicText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DynamicText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DynamicText_C", "PreConstruct");

	Params::UWBP_DynamicText_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DynamicText.WBP_DynamicText_C.ExecuteUbergraph_WBP_DynamicText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DynamicText_C::ExecuteUbergraph_WBP_DynamicText(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DynamicText_C", "ExecuteUbergraph_WBP_DynamicText");

	Params::UWBP_DynamicText_C_ExecuteUbergraph_WBP_DynamicText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


