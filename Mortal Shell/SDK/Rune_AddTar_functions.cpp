#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_AddTar.Rune_AddTar_C
// (None)

class UClass* URune_AddTar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_AddTar_C");

	return Clss;
}


// Rune_AddTar_C Rune_AddTar.Default__Rune_AddTar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_AddTar_C* URune_AddTar_C::GetDefaultObj()
{
	static class URune_AddTar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_AddTar_C*>(URune_AddTar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_AddTar.Rune_AddTar_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddTar_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddTar_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddTar.Rune_AddTar_C.ExecuteUbergraph_Rune_AddTar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_AddTar_C::ExecuteUbergraph_Rune_AddTar(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddTar_C", "ExecuteUbergraph_Rune_AddTar");

	Params::URune_AddTar_C_ExecuteUbergraph_Rune_AddTar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


