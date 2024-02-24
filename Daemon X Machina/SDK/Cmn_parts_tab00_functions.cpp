#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_parts_tab00.Cmn_parts_tab00_C
// (None)

class UClass* UCmn_parts_tab00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_parts_tab00_C");

	return Clss;
}


// Cmn_parts_tab00_C Cmn_parts_tab00.Default__Cmn_parts_tab00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_parts_tab00_C* UCmn_parts_tab00_C::GetDefaultObj()
{
	static class UCmn_parts_tab00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_parts_tab00_C*>(UCmn_parts_tab00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cmn_parts_tab00.Cmn_parts_tab00_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmn_parts_tab00_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cmn_parts_tab00_C", "PreConstruct");

	Params::UCmn_parts_tab00_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cmn_parts_tab00.Cmn_parts_tab00_C.ExecuteUbergraph_Cmn_parts_tab00
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmn_parts_tab00_C::ExecuteUbergraph_Cmn_parts_tab00(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cmn_parts_tab00_C", "ExecuteUbergraph_Cmn_parts_tab00");

	Params::UCmn_parts_tab00_C_ExecuteUbergraph_Cmn_parts_tab00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


