#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_FindWanderLocation.BTT_FindWanderLocation_C
// (None)

class UClass* UBTT_FindWanderLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_FindWanderLocation_C");

	return Clss;
}


// BTT_FindWanderLocation_C BTT_FindWanderLocation.Default__BTT_FindWanderLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_FindWanderLocation_C* UBTT_FindWanderLocation_C::GetDefaultObj()
{
	static class UBTT_FindWanderLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_FindWanderLocation_C*>(UBTT_FindWanderLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_FindWanderLocation.BTT_FindWanderLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindWanderLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_FindWanderLocation_C", "ReceiveExecuteAI");

	Params::UBTT_FindWanderLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_FindWanderLocation.BTT_FindWanderLocation_C.ExecuteUbergraph_BTT_FindWanderLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_FindWanderLocation_C::ExecuteUbergraph_BTT_FindWanderLocation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_FindWanderLocation_C", "ExecuteUbergraph_BTT_FindWanderLocation");

	Params::UBTT_FindWanderLocation_C_ExecuteUbergraph_BTT_FindWanderLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


