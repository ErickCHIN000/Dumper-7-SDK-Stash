#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGGameInstance.BP_GGGameInstance_C
// (None)

class UClass* UBP_GGGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGGameInstance_C");

	return Clss;
}


// BP_GGGameInstance_C BP_GGGameInstance.Default__BP_GGGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGGameInstance_C* UBP_GGGameInstance_C::GetDefaultObj()
{
	static class UBP_GGGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGGameInstance_C*>(UBP_GGGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGGameInstance.BP_GGGameInstance_C.OnWorldCleanupEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWorld*                      World                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSessionEnded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCleanupResources                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GGGameInstance_C::OnWorldCleanupEvent(class UWorld* World, bool bSessionEnded, bool bCleanupResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGGameInstance_C", "OnWorldCleanupEvent");

	Params::UBP_GGGameInstance_C_OnWorldCleanupEvent_Params Parms{};

	Parms.World = World;
	Parms.bSessionEnded = bSessionEnded;
	Parms.bCleanupResources = bCleanupResources;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGGameInstance.BP_GGGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GGGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGGameInstance.BP_GGGameInstance_C.ExecuteUbergraph_BP_GGGameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      K2Node_Event_World                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSessionEnded                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCleanupResources                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundSubmix*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasObjectValidWorld_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GGGameInstance_C::ExecuteUbergraph_BP_GGGameInstance(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWorld* K2Node_Event_World, bool K2Node_Event_bSessionEnded, bool K2Node_Event_bCleanupResources, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class USoundSubmix* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasObjectValidWorld_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGGameInstance_C", "ExecuteUbergraph_BP_GGGameInstance");

	Params::UBP_GGGameInstance_C_ExecuteUbergraph_BP_GGGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_World = K2Node_Event_World;
	Parms.K2Node_Event_bSessionEnded = K2Node_Event_bSessionEnded;
	Parms.K2Node_Event_bCleanupResources = K2Node_Event_bCleanupResources;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasObjectValidWorld_ReturnValue = CallFunc_HasObjectValidWorld_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


