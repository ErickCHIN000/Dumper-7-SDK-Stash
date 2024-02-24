#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Spinner.WBP_Spinner_C
// (None)

class UClass* UWBP_Spinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Spinner_C");

	return Clss;
}


// WBP_Spinner_C WBP_Spinner.Default__WBP_Spinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Spinner_C* UWBP_Spinner_C::GetDefaultObj()
{
	static class UWBP_Spinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Spinner_C*>(UWBP_Spinner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Spinner.WBP_Spinner_C.StopSpin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Spinner_C::StopSpin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Spinner_C", "StopSpin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Spinner.WBP_Spinner_C.StartSpin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Spinner_C::StartSpin(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Spinner_C", "StartSpin");

	Params::UWBP_Spinner_C_StartSpin_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


