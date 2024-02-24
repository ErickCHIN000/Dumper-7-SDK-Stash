#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C
// (None)

class UClass* UBTT_IcarusGOAP_FindSafeMoveLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_IcarusGOAP_FindSafeMoveLocation_C");

	return Clss;
}


// BTT_IcarusGOAP_FindSafeMoveLocation_C BTT_IcarusGOAP_FindSafeMoveLocation.Default__BTT_IcarusGOAP_FindSafeMoveLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_IcarusGOAP_FindSafeMoveLocation_C* UBTT_IcarusGOAP_FindSafeMoveLocation_C::GetDefaultObj()
{
	static class UBTT_IcarusGOAP_FindSafeMoveLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_IcarusGOAP_FindSafeMoveLocation_C*>(UBTT_IcarusGOAP_FindSafeMoveLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_FindSafeMoveLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_FindSafeMoveLocation_C", "ReceiveExecute");

	Params::UBTT_IcarusGOAP_FindSafeMoveLocation_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.OnQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_FindSafeMoveLocation_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_FindSafeMoveLocation_C", "OnQueryFinished");

	Params::UBTT_IcarusGOAP_FindSafeMoveLocation_C_OnQueryFinished_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_IcarusGOAP_FindSafeMoveLocation_C::ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_OwnerActor, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_FindSafeMoveLocation_C", "ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation");

	Params::UBTT_IcarusGOAP_FindSafeMoveLocation_C_ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


