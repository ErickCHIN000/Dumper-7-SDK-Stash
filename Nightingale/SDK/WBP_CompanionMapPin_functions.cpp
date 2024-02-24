#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CompanionMapPin.WBP_CompanionMapPin_C
// (None)

class UClass* UWBP_CompanionMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CompanionMapPin_C");

	return Clss;
}


// WBP_CompanionMapPin_C WBP_CompanionMapPin.Default__WBP_CompanionMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CompanionMapPin_C* UWBP_CompanionMapPin_C::GetDefaultObj()
{
	static class UWBP_CompanionMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CompanionMapPin_C*>(UWBP_CompanionMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CompanionMapPin.WBP_CompanionMapPin_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CompanionMapPin_C::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CompanionMapPin_C", "GetTooltipWidget");

	Params::UWBP_CompanionMapPin_C_GetTooltipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


