#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_dialog_bg00.Cmn_dialog_bg00_C
// (None)

class UClass* UCmn_dialog_bg00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_dialog_bg00_C");

	return Clss;
}


// Cmn_dialog_bg00_C Cmn_dialog_bg00.Default__Cmn_dialog_bg00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_dialog_bg00_C* UCmn_dialog_bg00_C::GetDefaultObj()
{
	static class UCmn_dialog_bg00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_dialog_bg00_C*>(UCmn_dialog_bg00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cmn_dialog_bg00.Cmn_dialog_bg00_C.Get_menu_t03_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UCmn_dialog_bg00_C::Get_menu_t03_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cmn_dialog_bg00_C", "Get_menu_t03_ColorAndOpacity_0");

	Params::UCmn_dialog_bg00_C_Get_menu_t03_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


