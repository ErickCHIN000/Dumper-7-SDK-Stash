#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_AddGlimpse.Rune_AddGlimpse_C
// (None)

class UClass* URune_AddGlimpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_AddGlimpse_C");

	return Clss;
}


// Rune_AddGlimpse_C Rune_AddGlimpse.Default__Rune_AddGlimpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_AddGlimpse_C* URune_AddGlimpse_C::GetDefaultObj()
{
	static class URune_AddGlimpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_AddGlimpse_C*>(URune_AddGlimpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_AddGlimpse.Rune_AddGlimpse_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddGlimpse_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddGlimpse_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddGlimpse.Rune_AddGlimpse_C.ExecuteUbergraph_Rune_AddGlimpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_AddGlimpse_C::ExecuteUbergraph_Rune_AddGlimpse(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddGlimpse_C", "ExecuteUbergraph_Rune_AddGlimpse");

	Params::URune_AddGlimpse_C_ExecuteUbergraph_Rune_AddGlimpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


