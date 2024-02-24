#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IPowerController.IPowerController_C
// (None)

class UClass* IIPowerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IPowerController_C");

	return Clss;
}


// IPowerController_C IPowerController.Default__IPowerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIPowerController_C* IIPowerController_C::GetDefaultObj()
{
	static class IIPowerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIPowerController_C*>(IIPowerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IPowerController.IPowerController_C.OnConsumerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IIPowerConsumer_C>Consumer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPowerController_C::OnConsumerStateChanged(TScriptInterface<class IIPowerConsumer_C> Consumer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerController_C", "OnConsumerStateChanged");

	Params::IIPowerController_C_OnConsumerStateChanged_Params Parms{};

	Parms.Consumer = Consumer;

	UObject::ProcessEvent(Func, &Parms);

}

}


