#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LegendItem.WBP_LegendItem_C
// (None)

class UClass* UWBP_LegendItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LegendItem_C");

	return Clss;
}


// WBP_LegendItem_C WBP_LegendItem.Default__WBP_LegendItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LegendItem_C* UWBP_LegendItem_C::GetDefaultObj()
{
	static class UWBP_LegendItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LegendItem_C*>(UWBP_LegendItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LegendItem.WBP_LegendItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LegendItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LegendItem_C", "PreConstruct");

	Params::UWBP_LegendItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LegendItem.WBP_LegendItem_C.ExecuteUbergraph_WBP_LegendItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_LegendItem_C::ExecuteUbergraph_WBP_LegendItem(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LegendItem_C", "ExecuteUbergraph_WBP_LegendItem");

	Params::UWBP_LegendItem_C_ExecuteUbergraph_WBP_LegendItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


