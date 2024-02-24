#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCrowdAiController.BaseCrowdAiController_C
// (Actor)

class UClass* ABaseCrowdAiController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCrowdAiController_C");

	return Clss;
}


// BaseCrowdAiController_C BaseCrowdAiController.Default__BaseCrowdAiController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseCrowdAiController_C* ABaseCrowdAiController_C::GetDefaultObj()
{
	static class ABaseCrowdAiController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseCrowdAiController_C*>(ABaseCrowdAiController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseCrowdAiController.BaseCrowdAiController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCrowdAiController_C::UserConstructionScript(bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCrowdAiController_C", "UserConstructionScript");

	Params::ABaseCrowdAiController_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


