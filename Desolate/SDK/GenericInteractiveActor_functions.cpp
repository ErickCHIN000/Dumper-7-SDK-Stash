#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericInteractiveActor.GenericInteractiveActor_C
// (Actor)

class UClass* AGenericInteractiveActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericInteractiveActor_C");

	return Clss;
}


// GenericInteractiveActor_C GenericInteractiveActor.Default__GenericInteractiveActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericInteractiveActor_C* AGenericInteractiveActor_C::GetDefaultObj()
{
	static class AGenericInteractiveActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericInteractiveActor_C*>(AGenericInteractiveActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericInteractiveActor.GenericInteractiveActor_C.OnChangeState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenericInteractiveActor_C::OnChangeState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericInteractiveActor_C", "OnChangeState__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


