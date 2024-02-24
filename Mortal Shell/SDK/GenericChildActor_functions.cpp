#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericChildActor.GenericChildActor_C
// (None)

class UClass* IGenericChildActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericChildActor_C");

	return Clss;
}


// GenericChildActor_C GenericChildActor.Default__GenericChildActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGenericChildActor_C* IGenericChildActor_C::GetDefaultObj()
{
	static class IGenericChildActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGenericChildActor_C*>(IGenericChildActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericChildActor.GenericChildActor_C.GenericChildActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGenericChildActor_C::GenericChildActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericChildActor_C", "GenericChildActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericChildActor.GenericChildActor_C.PassFloat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatToPass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGenericChildActor_C::PassFloat(float FloatToPass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericChildActor_C", "PassFloat");

	Params::IGenericChildActor_C_PassFloat_Params Parms{};

	Parms.FloatToPass = FloatToPass;

	UObject::ProcessEvent(Func, &Parms);

}

}


