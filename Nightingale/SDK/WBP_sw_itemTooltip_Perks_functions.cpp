#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_itemTooltip_Perks.WBP_sw_itemTooltip_Perks_C
// (None)

class UClass* UWBP_sw_itemTooltip_Perks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_itemTooltip_Perks_C");

	return Clss;
}


// WBP_sw_itemTooltip_Perks_C WBP_sw_itemTooltip_Perks.Default__WBP_sw_itemTooltip_Perks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_itemTooltip_Perks_C* UWBP_sw_itemTooltip_Perks_C::GetDefaultObj()
{
	static class UWBP_sw_itemTooltip_Perks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_itemTooltip_Perks_C*>(UWBP_sw_itemTooltip_Perks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_itemTooltip_Perks.WBP_sw_itemTooltip_Perks_C.SetupIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Perks_C::SetupIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Perks_C", "SetupIcon");

	Params::UWBP_sw_itemTooltip_Perks_C_SetupIcon_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_itemTooltip_Perks.WBP_sw_itemTooltip_Perks_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Perks_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Perks_C", "PreConstruct");

	Params::UWBP_sw_itemTooltip_Perks_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_itemTooltip_Perks.WBP_sw_itemTooltip_Perks_C.ExecuteUbergraph_WBP_sw_itemTooltip_Perks
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_itemTooltip_Perks_C::ExecuteUbergraph_WBP_sw_itemTooltip_Perks(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_itemTooltip_Perks_C", "ExecuteUbergraph_WBP_sw_itemTooltip_Perks");

	Params::UWBP_sw_itemTooltip_Perks_C_ExecuteUbergraph_WBP_sw_itemTooltip_Perks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


