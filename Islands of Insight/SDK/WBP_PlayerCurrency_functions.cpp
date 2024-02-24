#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerCurrency.WBP_PlayerCurrency_C
// (None)

class UClass* UWBP_PlayerCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerCurrency_C");

	return Clss;
}


// WBP_PlayerCurrency_C WBP_PlayerCurrency.Default__WBP_PlayerCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerCurrency_C* UWBP_PlayerCurrency_C::GetDefaultObj()
{
	static class UWBP_PlayerCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerCurrency_C*>(UWBP_PlayerCurrency_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerCurrency.WBP_PlayerCurrency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerCurrency_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerCurrency_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerCurrency.WBP_PlayerCurrency_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerCurrency_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerCurrency_C", "PreConstruct");

	Params::UWBP_PlayerCurrency_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerCurrency.WBP_PlayerCurrency_C.ExecuteUbergraph_WBP_PlayerCurrency
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerCurrency_C::ExecuteUbergraph_WBP_PlayerCurrency(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerCurrency_C", "ExecuteUbergraph_WBP_PlayerCurrency");

	Params::UWBP_PlayerCurrency_C_ExecuteUbergraph_WBP_PlayerCurrency_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


