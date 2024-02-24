#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C
// (None)

class UClass* UBTT_CalculateBestWanderEQSSize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_CalculateBestWanderEQSSize_C");

	return Clss;
}


// BTT_CalculateBestWanderEQSSize_C BTT_CalculateBestWanderEQSSize.Default__BTT_CalculateBestWanderEQSSize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_CalculateBestWanderEQSSize_C* UBTT_CalculateBestWanderEQSSize_C::GetDefaultObj()
{
	static class UBTT_CalculateBestWanderEQSSize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_CalculateBestWanderEQSSize_C*>(UBTT_CalculateBestWanderEQSSize_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CalculateBestWanderEQSSize_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CalculateBestWanderEQSSize_C", "ReceiveExecuteAI");

	Params::UBTT_CalculateBestWanderEQSSize_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C.ExecuteUbergraph_BTT_CalculateBestWanderEQSSize
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CalculateBestWanderEQSSize_C::ExecuteUbergraph_BTT_CalculateBestWanderEQSSize(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CalculateBestWanderEQSSize_C", "ExecuteUbergraph_BTT_CalculateBestWanderEQSSize");

	Params::UBTT_CalculateBestWanderEQSSize_C_ExecuteUbergraph_BTT_CalculateBestWanderEQSSize_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue = CallFunc_GetNPCStatWithDefaultValue_ReturnValue;
	Parms.CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1 = CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


