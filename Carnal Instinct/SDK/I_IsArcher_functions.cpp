#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_IsArcher.I_IsArcher_C
// (None)

class UClass* II_IsArcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_IsArcher_C");

	return Clss;
}


// I_IsArcher_C I_IsArcher.Default__I_IsArcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_IsArcher_C* II_IsArcher_C::GetDefaultObj()
{
	static class II_IsArcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_IsArcher_C*>(II_IsArcher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_IsArcher.I_IsArcher_C.GetBowStringSocketName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_IsArcher_C::GetBowStringSocketName(class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsArcher_C", "GetBowStringSocketName");

	Params::II_IsArcher_C_GetBowStringSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function I_IsArcher.I_IsArcher_C.DoesHoldBowString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_IsArcher_C::DoesHoldBowString(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsArcher_C", "DoesHoldBowString");

	Params::II_IsArcher_C_DoesHoldBowString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function I_IsArcher.I_IsArcher_C.GetAimAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_IsArcher_C::GetAimAlpha(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsArcher_C", "GetAimAlpha");

	Params::II_IsArcher_C_GetAimAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}

}


