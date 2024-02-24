#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PlayCatch.BTTask_PlayCatch_C
// (None)

class UClass* UBTTask_PlayCatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PlayCatch_C");

	return Clss;
}


// BTTask_PlayCatch_C BTTask_PlayCatch.Default__BTTask_PlayCatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PlayCatch_C* UBTTask_PlayCatch_C::GetDefaultObj()
{
	static class UBTTask_PlayCatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PlayCatch_C*>(UBTTask_PlayCatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PlayCatch.BTTask_PlayCatch_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayCatch_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayCatch_C", "ReceiveExecuteAI");

	Params::UBTTask_PlayCatch_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PlayCatch.BTTask_PlayCatch_C.ExecuteUbergraph_BTTask_PlayCatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGNPC_Humanoid*             K2Node_DynamicCast_AsGGNPC_Humanoid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlayCatch_C::ExecuteUbergraph_BTTask_PlayCatch(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AGGNPC_Humanoid* K2Node_DynamicCast_AsGGNPC_Humanoid, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PlayCatch_C", "ExecuteUbergraph_BTTask_PlayCatch");

	Params::UBTTask_PlayCatch_C_ExecuteUbergraph_BTTask_PlayCatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsGGNPC_Humanoid = K2Node_DynamicCast_AsGGNPC_Humanoid;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


