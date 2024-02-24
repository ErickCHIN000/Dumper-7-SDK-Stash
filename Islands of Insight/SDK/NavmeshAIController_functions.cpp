#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavmeshAIController.NavmeshAIController_C
// (Actor)

class UClass* ANavmeshAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavmeshAIController_C");

	return Clss;
}


// NavmeshAIController_C NavmeshAIController.Default__NavmeshAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANavmeshAIController_C* ANavmeshAIController_C::GetDefaultObj()
{
	static class ANavmeshAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavmeshAIController_C*>(ANavmeshAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NavmeshAIController.NavmeshAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANavmeshAIController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavmeshAIController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NavmeshAIController.NavmeshAIController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANavmeshAIController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavmeshAIController_C", "ReceivePossess");

	Params::ANavmeshAIController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NavmeshAIController.NavmeshAIController_C.ExecuteUbergraph_NavmeshAIController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANavmeshAIController_C::ExecuteUbergraph_NavmeshAIController(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavmeshAIController_C", "ExecuteUbergraph_NavmeshAIController");

	Params::ANavmeshAIController_C_ExecuteUbergraph_NavmeshAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


