#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZombieBoss_Chase.ZombieBoss_Chase_C
// (None)

class UClass* UZombieBoss_Chase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZombieBoss_Chase_C");

	return Clss;
}


// ZombieBoss_Chase_C ZombieBoss_Chase.Default__ZombieBoss_Chase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZombieBoss_Chase_C* UZombieBoss_Chase_C::GetDefaultObj()
{
	static class UZombieBoss_Chase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZombieBoss_Chase_C*>(UZombieBoss_Chase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ZombieBoss_Chase.ZombieBoss_Chase_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_Chase_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_Chase_C", "ReceiveExecuteAI");

	Params::UZombieBoss_Chase_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZombieBoss_Chase.ZombieBoss_Chase_C.ExecuteUbergraph_ZombieBoss_Chase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingRequestResultCallFunc_MoveToActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_Chase_C::ExecuteUbergraph_ZombieBoss_Chase(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_Chase_C", "ExecuteUbergraph_ZombieBoss_Chase");

	Params::UZombieBoss_Chase_C_ExecuteUbergraph_ZombieBoss_Chase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_MoveToActor_ReturnValue = CallFunc_MoveToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


