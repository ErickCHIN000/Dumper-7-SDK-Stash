#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericWater.GenericWater_C
// (Actor)

class UClass* AGenericWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericWater_C");

	return Clss;
}


// GenericWater_C GenericWater.Default__GenericWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericWater_C* AGenericWater_C::GetDefaultObj()
{
	static class AGenericWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericWater_C*>(AGenericWater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericWater.GenericWater_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericWater_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericWater_C", "OnUse");

	Params::AGenericWater_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericWater.GenericWater_C.ExecuteUbergraph_GenericWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericWater_C::ExecuteUbergraph_GenericWater(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericWater_C", "ExecuteUbergraph_GenericWater");

	Params::AGenericWater_C_ExecuteUbergraph_GenericWater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetMaxValue_ReturnValue = CallFunc_GetMaxValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


