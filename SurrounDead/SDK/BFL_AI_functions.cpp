#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BFL_AI.BFL_AI_C
// (None)

class UClass* UBFL_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BFL_AI_C");

	return Clss;
}


// BFL_AI_C BFL_AI.Default__BFL_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBFL_AI_C* UBFL_AI_C::GetDefaultObj()
{
	static class UBFL_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBFL_AI_C*>(UBFL_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BFL_AI.BFL_AI_C.SpawnFloatingDamageText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatText_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_AI_C::SpawnFloatingDamageText(double Damage, const struct FLinearColor& Colour, class UObject* __WorldContext, bool CallFunc_GetBoolCVar_ReturnValue, class UCombatText_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_AI_C", "SpawnFloatingDamageText");

	Params::UBFL_AI_C_SpawnFloatingDamageText_Params Parms{};

	Parms.Damage = Damage;
	Parms.Colour = Colour;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


