#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseAIController.BaseAIController_C
// (Actor)

class UClass* ABaseAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseAIController_C");

	return Clss;
}


// BaseAIController_C BaseAIController.Default__BaseAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseAIController_C* ABaseAIController_C::GetDefaultObj()
{
	static class ABaseAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseAIController_C*>(ABaseAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseAIController.BaseAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseAIController_C::UserConstructionScript(bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseAIController_C", "UserConstructionScript");

	Params::ABaseAIController_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


