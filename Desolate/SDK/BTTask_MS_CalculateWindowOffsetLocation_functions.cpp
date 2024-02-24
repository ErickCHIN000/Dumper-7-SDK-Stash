#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_MS_CalculateWindowOffsetLocation.BTTask_MS_CalculateWindowOffsetLocation_C
// (None)

class UClass* UBTTask_MS_CalculateWindowOffsetLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MS_CalculateWindowOffsetLocation_C");

	return Clss;
}


// BTTask_MS_CalculateWindowOffsetLocation_C BTTask_MS_CalculateWindowOffsetLocation.Default__BTTask_MS_CalculateWindowOffsetLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_MS_CalculateWindowOffsetLocation_C* UBTTask_MS_CalculateWindowOffsetLocation_C::GetDefaultObj()
{
	static class UBTTask_MS_CalculateWindowOffsetLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MS_CalculateWindowOffsetLocation_C*>(UBTTask_MS_CalculateWindowOffsetLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_MS_CalculateWindowOffsetLocation.BTTask_MS_CalculateWindowOffsetLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_MS_CalculateWindowOffsetLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_MS_CalculateWindowOffsetLocation_C", "ReceiveExecute");

	Params::UBTTask_MS_CalculateWindowOffsetLocation_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_MS_CalculateWindowOffsetLocation.BTTask_MS_CalculateWindowOffsetLocation_C.ExecuteUbergraph_BTTask_MS_CalculateWindowOffsetLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMS_Character_New_C*         K2Node_DynamicCast_AsMS_Character_New                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_MS_CalculateWindowOffsetLocation_C::ExecuteUbergraph_BTTask_MS_CalculateWindowOffsetLocation(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AMS_Character_New_C* K2Node_DynamicCast_AsMS_Character_New, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_MS_CalculateWindowOffsetLocation_C", "ExecuteUbergraph_BTTask_MS_CalculateWindowOffsetLocation");

	Params::UBTTask_MS_CalculateWindowOffsetLocation_C_ExecuteUbergraph_BTTask_MS_CalculateWindowOffsetLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsMS_Character_New = K2Node_DynamicCast_AsMS_Character_New;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


