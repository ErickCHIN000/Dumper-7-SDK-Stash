#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DirtyWater.DirtyWater_C
// (Actor)

class UClass* ADirtyWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirtyWater_C");

	return Clss;
}


// DirtyWater_C DirtyWater.Default__DirtyWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADirtyWater_C* ADirtyWater_C::GetDefaultObj()
{
	static class ADirtyWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADirtyWater_C*>(ADirtyWater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DirtyWater.DirtyWater_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADirtyWater_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DirtyWater_C", "OnUse");

	Params::ADirtyWater_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DirtyWater.DirtyWater_C.ExecuteUbergraph_DirtyWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADirtyWater_C::ExecuteUbergraph_DirtyWater(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DirtyWater_C", "ExecuteUbergraph_DirtyWater");

	Params::ADirtyWater_C_ExecuteUbergraph_DirtyWater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetMaxValue_ReturnValue = CallFunc_GetMaxValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


