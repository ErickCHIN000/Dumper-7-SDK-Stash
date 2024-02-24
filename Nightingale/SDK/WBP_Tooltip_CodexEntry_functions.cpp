#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip_CodexEntry.WBP_Tooltip_CodexEntry_C
// (None)

class UClass* UWBP_Tooltip_CodexEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_CodexEntry_C");

	return Clss;
}


// WBP_Tooltip_CodexEntry_C WBP_Tooltip_CodexEntry.Default__WBP_Tooltip_CodexEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_CodexEntry_C* UWBP_Tooltip_CodexEntry_C::GetDefaultObj()
{
	static class UWBP_Tooltip_CodexEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_CodexEntry_C*>(UWBP_Tooltip_CodexEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip_CodexEntry.WBP_Tooltip_CodexEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_CodexEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_CodexEntry_C", "PreConstruct");

	Params::UWBP_Tooltip_CodexEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_CodexEntry.WBP_Tooltip_CodexEntry_C.ExecuteUbergraph_WBP_Tooltip_CodexEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_CodexEntry_C::ExecuteUbergraph_WBP_Tooltip_CodexEntry(int32 EntryPoint, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_CodexEntry_C", "ExecuteUbergraph_WBP_Tooltip_CodexEntry");

	Params::UWBP_Tooltip_CodexEntry_C_ExecuteUbergraph_WBP_Tooltip_CodexEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


