#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_ResetAccolades.CF_ResetAccolades_C
// (None)

class UClass* UCF_ResetAccolades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_ResetAccolades_C");

	return Clss;
}


// CF_ResetAccolades_C CF_ResetAccolades.Default__CF_ResetAccolades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_ResetAccolades_C* UCF_ResetAccolades_C::GetDefaultObj()
{
	static class UCF_ResetAccolades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_ResetAccolades_C*>(UCF_ResetAccolades_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_ResetAccolades.CF_ResetAccolades_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_ResetAccolades_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ResetAccolades_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_ResetAccolades.CF_ResetAccolades_C.ExecuteUbergraph_CF_ResetAccolades
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerTrackerSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_ResetAccolades_C::ExecuteUbergraph_CF_ResetAccolades(int32 EntryPoint, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UPlayerTrackerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ResetAccolades_C", "ExecuteUbergraph_CF_ResetAccolades");

	Params::UCF_ResetAccolades_C_ExecuteUbergraph_CF_ResetAccolades_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


