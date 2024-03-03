#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_IsTargetable.I_IsTargetable_C
// (None)

class UClass* II_IsTargetable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_IsTargetable_C");

	return Clss;
}


// I_IsTargetable_C I_IsTargetable.Default__I_IsTargetable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_IsTargetable_C* II_IsTargetable_C::GetDefaultObj()
{
	static class II_IsTargetable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_IsTargetable_C*>(II_IsTargetable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_IsTargetable.I_IsTargetable_C.IsTargetable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_IsTargetable_C::IsTargetable(bool* Return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsTargetable_C", "IsTargetable");

	Params::II_IsTargetable_C_IsTargetable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = Parms.Return_value;

}


// Function I_IsTargetable.I_IsTargetable_C.OnDeselected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DummyValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_IsTargetable_C::OnDeselected(bool* DummyValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsTargetable_C", "OnDeselected");

	Params::II_IsTargetable_C_OnDeselected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DummyValue != nullptr)
		*DummyValue = Parms.DummyValue;

}


// Function I_IsTargetable.I_IsTargetable_C.OnSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DummyValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_IsTargetable_C::OnSelected(bool* DummyValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_IsTargetable_C", "OnSelected");

	Params::II_IsTargetable_C_OnSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DummyValue != nullptr)
		*DummyValue = Parms.DummyValue;

}

}


