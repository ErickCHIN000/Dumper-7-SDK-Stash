#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Demo_Menu_entry_01.wid_Demo_Menu_entry_01_C
// (None)

class UClass* UWid_Demo_Menu_entry_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Demo_Menu_entry_01_C");

	return Clss;
}


// wid_Demo_Menu_entry_01_C wid_Demo_Menu_entry_01.Default__wid_Demo_Menu_entry_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Demo_Menu_entry_01_C* UWid_Demo_Menu_entry_01_C::GetDefaultObj()
{
	static class UWid_Demo_Menu_entry_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Demo_Menu_entry_01_C*>(UWid_Demo_Menu_entry_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Demo_Menu_entry_01.wid_Demo_Menu_entry_01_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_Demo_Menu_entry_01_C::GetText_0(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Demo_Menu_entry_01_C", "GetText_0");

	Params::UWid_Demo_Menu_entry_01_C_GetText_0_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


