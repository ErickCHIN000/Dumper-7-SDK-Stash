#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C
// (None)

class UClass* UBTT_FindNearbyWaterSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_FindNearbyWaterSource_C");

	return Clss;
}


// BTT_FindNearbyWaterSource_C BTT_FindNearbyWaterSource.Default__BTT_FindNearbyWaterSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_FindNearbyWaterSource_C* UBTT_FindNearbyWaterSource_C::GetDefaultObj()
{
	static class UBTT_FindNearbyWaterSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_FindNearbyWaterSource_C*>(UBTT_FindNearbyWaterSource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C.FindValidItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AroundLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OwnerPawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                Item                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  InventoryObject                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                ContainerRef                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AIcarusActor*>        CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors           (ReferenceParm)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// TArray<class AActor*>              CallFunc_SortActorsByPathCostFromOrigin_ReturnValue              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_FindNearbyWaterSource_C::FindValidItem(const struct FVector& AroundLocation, float MaxDistance, class APawn* OwnerPawn, class AIcarusActor** Item, bool* Success, class UInventory* InventoryObject, class AIcarusActor* ContainerRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByPathCostFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_FindNearbyWaterSource_C", "FindValidItem");

	Params::UBTT_FindNearbyWaterSource_C_FindValidItem_Params Parms{};

	Parms.AroundLocation = AroundLocation;
	Parms.MaxDistance = MaxDistance;
	Parms.OwnerPawn = OwnerPawn;
	Parms.InventoryObject = InventoryObject;
	Parms.ContainerRef = ContainerRef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors = CallFunc_GetAllActorsOfClassMatchingTagQuery_OutActors;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_SortActorsByPathCostFromOrigin_ReturnValue = CallFunc_SortActorsByPathCostFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindNearbyWaterSource_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_FindNearbyWaterSource_C", "ReceiveExecuteAI");

	Params::UBTT_FindNearbyWaterSource_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C.ExecuteUbergraph_BTT_FindNearbyWaterSource
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                CallFunc_FindValidItem_Item                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindValidItem_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindNearbyWaterSource_C::ExecuteUbergraph_BTT_FindNearbyWaterSource(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusActor* CallFunc_FindValidItem_Item, bool CallFunc_FindValidItem_Success, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_FindNearbyWaterSource_C", "ExecuteUbergraph_BTT_FindNearbyWaterSource");

	Params::UBTT_FindNearbyWaterSource_C_ExecuteUbergraph_BTT_FindNearbyWaterSource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindValidItem_Item = CallFunc_FindValidItem_Item;
	Parms.CallFunc_FindValidItem_Success = CallFunc_FindValidItem_Success;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


