#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DeluxeItemSlot.WBP_DeluxeItemSlot_C
// (None)

class UClass* UWBP_DeluxeItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DeluxeItemSlot_C");

	return Clss;
}


// WBP_DeluxeItemSlot_C WBP_DeluxeItemSlot.Default__WBP_DeluxeItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DeluxeItemSlot_C* UWBP_DeluxeItemSlot_C::GetDefaultObj()
{
	static class UWBP_DeluxeItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DeluxeItemSlot_C*>(UWBP_DeluxeItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DeluxeItemSlot.WBP_DeluxeItemSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeluxeItemSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DeluxeItemSlot_C", "PreConstruct");

	Params::UWBP_DeluxeItemSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DeluxeItemSlot.WBP_DeluxeItemSlot_C.ExecuteUbergraph_WBP_DeluxeItemSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeluxeItemSlot_C::ExecuteUbergraph_WBP_DeluxeItemSlot(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DeluxeItemSlot_C", "ExecuteUbergraph_WBP_DeluxeItemSlot");

	Params::UWBP_DeluxeItemSlot_C_ExecuteUbergraph_WBP_DeluxeItemSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


