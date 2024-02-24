#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AI_FindRandomLocation.AI_FindRandomLocation_C
// (None)

class UClass* UAI_FindRandomLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_FindRandomLocation_C");

	return Clss;
}


// AI_FindRandomLocation_C AI_FindRandomLocation.Default__AI_FindRandomLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_FindRandomLocation_C* UAI_FindRandomLocation_C::GetDefaultObj()
{
	static class UAI_FindRandomLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_FindRandomLocation_C*>(UAI_FindRandomLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AI_FindRandomLocation.AI_FindRandomLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAI_FindRandomLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_FindRandomLocation_C", "ReceiveExecuteAI");

	Params::UAI_FindRandomLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AI_FindRandomLocation.AI_FindRandomLocation_C.ExecuteUbergraph_AI_FindRandomLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAI_FindRandomLocation_C::ExecuteUbergraph_AI_FindRandomLocation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_FindRandomLocation_C", "ExecuteUbergraph_AI_FindRandomLocation");

	Params::UAI_FindRandomLocation_C_ExecuteUbergraph_AI_FindRandomLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


