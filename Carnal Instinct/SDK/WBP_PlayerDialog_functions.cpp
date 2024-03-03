#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerDialog.WBP_PlayerDialog_C
// (None)

class UClass* UWBP_PlayerDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerDialog_C");

	return Clss;
}


// WBP_PlayerDialog_C WBP_PlayerDialog.Default__WBP_PlayerDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerDialog_C* UWBP_PlayerDialog_C::GetDefaultObj()
{
	static class UWBP_PlayerDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerDialog_C*>(UWBP_PlayerDialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerDialog.WBP_PlayerDialog_C.ExecuteUbergraph_WBP_PlayerDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerDialog_C::ExecuteUbergraph_WBP_PlayerDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDialog_C", "ExecuteUbergraph_WBP_PlayerDialog");

	Params::UWBP_PlayerDialog_C_ExecuteUbergraph_WBP_PlayerDialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


