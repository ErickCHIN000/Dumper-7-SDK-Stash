#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_AddHealthXBonus.Rune_AddHealthXBonus_C
// (None)

class UClass* URune_AddHealthXBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_AddHealthXBonus_C");

	return Clss;
}


// Rune_AddHealthXBonus_C Rune_AddHealthXBonus.Default__Rune_AddHealthXBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_AddHealthXBonus_C* URune_AddHealthXBonus_C::GetDefaultObj()
{
	static class URune_AddHealthXBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_AddHealthXBonus_C*>(URune_AddHealthXBonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_AddHealthXBonus.Rune_AddHealthXBonus_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddHealthXBonus_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddHealthXBonus_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddHealthXBonus.Rune_AddHealthXBonus_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddHealthXBonus_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddHealthXBonus_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddHealthXBonus.Rune_AddHealthXBonus_C.ExecuteUbergraph_Rune_AddHealthXBonus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_AddHealthXBonus_C::ExecuteUbergraph_Rune_AddHealthXBonus(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddHealthXBonus_C", "ExecuteUbergraph_Rune_AddHealthXBonus");

	Params::URune_AddHealthXBonus_C_ExecuteUbergraph_Rune_AddHealthXBonus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


