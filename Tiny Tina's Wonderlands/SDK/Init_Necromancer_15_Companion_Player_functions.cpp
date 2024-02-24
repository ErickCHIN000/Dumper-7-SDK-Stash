#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Necromancer_15_Companion_Player.Init_Necromancer_15_Companion_Player_C
// (None)

class UClass* UInit_Necromancer_15_Companion_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Necromancer_15_Companion_Player_C");

	return Clss;
}


// Init_Necromancer_15_Companion_Player_C Init_Necromancer_15_Companion_Player.Default__Init_Necromancer_15_Companion_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Necromancer_15_Companion_Player_C* UInit_Necromancer_15_Companion_Player_C::GetDefaultObj()
{
	static class UInit_Necromancer_15_Companion_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Necromancer_15_Companion_Player_C*>(UInit_Necromancer_15_Companion_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Necromancer_15_Companion_Player.Init_Necromancer_15_Companion_Player_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Necromancer_15_Companion_Player_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Necromancer_15_Companion_Player_C", "CalculateAttributeInitialValue");

	Params::UInit_Necromancer_15_Companion_Player_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


