#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_RotatingComponent.I_RotatingComponent_C
// (None)

class UClass* II_RotatingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_RotatingComponent_C");

	return Clss;
}


// I_RotatingComponent_C I_RotatingComponent.Default__I_RotatingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_RotatingComponent_C* II_RotatingComponent_C::GetDefaultObj()
{
	static class II_RotatingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_RotatingComponent_C*>(II_RotatingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_RotatingComponent.I_RotatingComponent_C.GetDesiredRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_RotatingComponent_C::GetDesiredRotation(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_RotatingComponent_C", "GetDesiredRotation");

	Params::II_RotatingComponent_C_GetDesiredRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}

}


