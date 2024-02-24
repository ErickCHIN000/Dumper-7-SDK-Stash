#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C
// (None)

class UClass* UWBP_sw_EmptyGridEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_EmptyGridEntry_C");

	return Clss;
}


// WBP_sw_EmptyGridEntry_C WBP_sw_EmptyGridEntry.Default__WBP_sw_EmptyGridEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_EmptyGridEntry_C* UWBP_sw_EmptyGridEntry_C::GetDefaultObj()
{
	static class UWBP_sw_EmptyGridEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_EmptyGridEntry_C*>(UWBP_sw_EmptyGridEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_EmptyGridEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_EmptyGridEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_EmptyGridEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_EmptyGridEntry_C", "OnListItemObjectSet");

	Params::UWBP_sw_EmptyGridEntry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_EmptyGridEntry_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_EmptyGridEntry_C", "OnInputMethodChanged");

	Params::UWBP_sw_EmptyGridEntry_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_EmptyGridEntry.WBP_sw_EmptyGridEntry_C.ExecuteUbergraph_WBP_sw_EmptyGridEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_bNewInputType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_EmptyGridEntry_C::ExecuteUbergraph_WBP_sw_EmptyGridEntry(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, enum class ECommonInputType K2Node_Event_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_EmptyGridEntry_C", "ExecuteUbergraph_WBP_sw_EmptyGridEntry");

	Params::UWBP_sw_EmptyGridEntry_C_ExecuteUbergraph_WBP_sw_EmptyGridEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bNewInputType = K2Node_Event_bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


