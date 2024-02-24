#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_Wait.CF_Wait_C
// (None)

class UClass* UCF_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_Wait_C");

	return Clss;
}


// CF_Wait_C CF_Wait.Default__CF_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_Wait_C* UCF_Wait_C::GetDefaultObj()
{
	static class UCF_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_Wait_C*>(UCF_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_Wait.CF_Wait_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_Wait_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Wait_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_Wait.CF_Wait_C.ExecuteUbergraph_CF_Wait
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetIntegerValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_Wait_C::ExecuteUbergraph_CF_Wait(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, float CallFunc_GetIntegerValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_Wait_C", "ExecuteUbergraph_CF_Wait");

	Params::UCF_Wait_C_ExecuteUbergraph_CF_Wait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.CallFunc_GetIntegerValue_ReturnValue = CallFunc_GetIntegerValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


