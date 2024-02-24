#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_PeacefulGetEscapePoint.BTTask_PeacefulGetEscapePoint_C
// (None)

class UClass* UBTTask_PeacefulGetEscapePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PeacefulGetEscapePoint_C");

	return Clss;
}


// BTTask_PeacefulGetEscapePoint_C BTTask_PeacefulGetEscapePoint.Default__BTTask_PeacefulGetEscapePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_PeacefulGetEscapePoint_C* UBTTask_PeacefulGetEscapePoint_C::GetDefaultObj()
{
	static class UBTTask_PeacefulGetEscapePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PeacefulGetEscapePoint_C*>(UBTTask_PeacefulGetEscapePoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_PeacefulGetEscapePoint.BTTask_PeacefulGetEscapePoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PeacefulGetEscapePoint_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PeacefulGetEscapePoint_C", "ReceiveExecute");

	Params::UBTTask_PeacefulGetEscapePoint_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_PeacefulGetEscapePoint.BTTask_PeacefulGetEscapePoint_C.ExecuteUbergraph_BTTask_PeacefulGetEscapePoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABasePeacefulAICharacter_C*  K2Node_DynamicCast_AsBase_Peaceful_AICharacter                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_PeacefulGetEscapePoint_C::ExecuteUbergraph_BTTask_PeacefulGetEscapePoint(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABasePeacefulAICharacter_C* K2Node_DynamicCast_AsBase_Peaceful_AICharacter, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_PeacefulGetEscapePoint_C", "ExecuteUbergraph_BTTask_PeacefulGetEscapePoint");

	Params::UBTTask_PeacefulGetEscapePoint_C_ExecuteUbergraph_BTTask_PeacefulGetEscapePoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Peaceful_AICharacter = K2Node_DynamicCast_AsBase_Peaceful_AICharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


