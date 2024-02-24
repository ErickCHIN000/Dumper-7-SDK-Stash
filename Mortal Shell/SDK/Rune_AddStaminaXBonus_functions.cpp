#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_AddStaminaXBonus.Rune_AddStaminaXBonus_C
// (None)

class UClass* URune_AddStaminaXBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_AddStaminaXBonus_C");

	return Clss;
}


// Rune_AddStaminaXBonus_C Rune_AddStaminaXBonus.Default__Rune_AddStaminaXBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_AddStaminaXBonus_C* URune_AddStaminaXBonus_C::GetDefaultObj()
{
	static class URune_AddStaminaXBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_AddStaminaXBonus_C*>(URune_AddStaminaXBonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_AddStaminaXBonus.Rune_AddStaminaXBonus_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddStaminaXBonus_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddStaminaXBonus_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddStaminaXBonus.Rune_AddStaminaXBonus_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_AddStaminaXBonus_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddStaminaXBonus_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_AddStaminaXBonus.Rune_AddStaminaXBonus_C.ExecuteUbergraph_Rune_AddStaminaXBonus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_AddStaminaXBonus_C::ExecuteUbergraph_Rune_AddStaminaXBonus(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_AddStaminaXBonus_C", "ExecuteUbergraph_Rune_AddStaminaXBonus");

	Params::URune_AddStaminaXBonus_C_ExecuteUbergraph_Rune_AddStaminaXBonus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


