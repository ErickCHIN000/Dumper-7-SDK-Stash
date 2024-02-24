#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BloodyIgorCocktail.BloodyIgorCocktail_C
// (Actor)

class UClass* ABloodyIgorCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BloodyIgorCocktail_C");

	return Clss;
}


// BloodyIgorCocktail_C BloodyIgorCocktail.Default__BloodyIgorCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABloodyIgorCocktail_C* ABloodyIgorCocktail_C::GetDefaultObj()
{
	static class ABloodyIgorCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABloodyIgorCocktail_C*>(ABloodyIgorCocktail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BloodyIgorCocktail.BloodyIgorCocktail_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABloodyIgorCocktail_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BloodyIgorCocktail_C", "OnUse");

	Params::ABloodyIgorCocktail_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BloodyIgorCocktail.BloodyIgorCocktail_C.ExecuteUbergraph_BloodyIgorCocktail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABloodyIgorCocktail_C::ExecuteUbergraph_BloodyIgorCocktail(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BloodyIgorCocktail_C", "ExecuteUbergraph_BloodyIgorCocktail");

	Params::ABloodyIgorCocktail_C_ExecuteUbergraph_BloodyIgorCocktail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


