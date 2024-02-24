#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PCInputDispatcherComponent.PCInputDispatcherComponent_C
// (None)

class UClass* UPCInputDispatcherComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCInputDispatcherComponent_C");

	return Clss;
}


// PCInputDispatcherComponent_C PCInputDispatcherComponent.Default__PCInputDispatcherComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPCInputDispatcherComponent_C* UPCInputDispatcherComponent_C::GetDefaultObj()
{
	static class UPCInputDispatcherComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCInputDispatcherComponent_C*>(UPCInputDispatcherComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PCInputDispatcherComponent.PCInputDispatcherComponent_C.OnEscapeMenuPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPCInputDispatcherComponent_C::OnEscapeMenuPressed__DelegateSignature(bool Close)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCInputDispatcherComponent_C", "OnEscapeMenuPressed__DelegateSignature");

	Params::UPCInputDispatcherComponent_C_OnEscapeMenuPressed__DelegateSignature_Params Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);

}

}


