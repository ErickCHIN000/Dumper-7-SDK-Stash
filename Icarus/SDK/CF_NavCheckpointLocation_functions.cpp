#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_NavCheckpointLocation.CF_NavCheckpointLocation_C
// (None)

class UClass* UCF_NavCheckpointLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_NavCheckpointLocation_C");

	return Clss;
}


// CF_NavCheckpointLocation_C CF_NavCheckpointLocation.Default__CF_NavCheckpointLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_NavCheckpointLocation_C* UCF_NavCheckpointLocation_C::GetDefaultObj()
{
	static class UCF_NavCheckpointLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_NavCheckpointLocation_C*>(UCF_NavCheckpointLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_NavCheckpointLocation.CF_NavCheckpointLocation_C.HandleExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_NavCheckpointLocation_C::HandleExecute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_NavCheckpointLocation_C", "HandleExecute");

	Params::UCF_NavCheckpointLocation_C_HandleExecute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_NavCheckpointLocation.CF_NavCheckpointLocation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_NavCheckpointLocation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_NavCheckpointLocation_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_NavCheckpointLocation.CF_NavCheckpointLocation_C.ExecuteUbergraph_CF_NavCheckpointLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorRow_C*                 K2Node_DynamicCast_AsActor_Row                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_NavigationCheckpoint_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_NavigationCheckpoint_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorRow_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UCF_NavCheckpointLocation_C::ExecuteUbergraph_CF_NavCheckpointLocation(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UActorRow_C* K2Node_DynamicCast_AsActor_Row, bool K2Node_DynamicCast_bSuccess_1, TArray<class ABP_NavigationCheckpoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_NavigationCheckpoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UActorRow_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_NavCheckpointLocation_C", "ExecuteUbergraph_CF_NavCheckpointLocation");

	Params::UCF_NavCheckpointLocation_C_ExecuteUbergraph_CF_NavCheckpointLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_DynamicCast_AsActor_Row = K2Node_DynamicCast_AsActor_Row;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


