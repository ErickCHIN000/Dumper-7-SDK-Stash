#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_itemTooltip_Spells.WBP_sw_itemTooltip_Spells_C
// (None)

class UClass* UWBP_sw_itemTooltip_Spells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_itemTooltip_Spells_C");

	return Clss;
}


// WBP_sw_itemTooltip_Spells_C WBP_sw_itemTooltip_Spells.Default__WBP_sw_itemTooltip_Spells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_itemTooltip_Spells_C* UWBP_sw_itemTooltip_Spells_C::GetDefaultObj()
{
	static class UWBP_sw_itemTooltip_Spells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_itemTooltip_Spells_C*>(UWBP_sw_itemTooltip_Spells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_itemTooltip_Spells.WBP_sw_itemTooltip_Spells_C.SetupIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Spells_C::SetupIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Spells_C", "SetupIcon");

	Params::UWBP_sw_itemTooltip_Spells_C_SetupIcon_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_itemTooltip_Spells.WBP_sw_itemTooltip_Spells_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Spells_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Spells_C", "PreConstruct");

	Params::UWBP_sw_itemTooltip_Spells_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_itemTooltip_Spells.WBP_sw_itemTooltip_Spells_C.ExecuteUbergraph_WBP_sw_itemTooltip_Spells
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Spells_C::ExecuteUbergraph_WBP_sw_itemTooltip_Spells(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Spells_C", "ExecuteUbergraph_WBP_sw_itemTooltip_Spells");

	Params::UWBP_sw_itemTooltip_Spells_C_ExecuteUbergraph_WBP_sw_itemTooltip_Spells_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


