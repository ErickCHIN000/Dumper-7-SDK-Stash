#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SurvivalMetaController.BP_SurvivalMetaController_C
// (None)

class UClass* UBP_SurvivalMetaController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SurvivalMetaController_C");

	return Clss;
}


// BP_SurvivalMetaController_C BP_SurvivalMetaController.Default__BP_SurvivalMetaController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SurvivalMetaController_C* UBP_SurvivalMetaController_C::GetDefaultObj()
{
	static class UBP_SurvivalMetaController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SurvivalMetaController_C*>(UBP_SurvivalMetaController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.GetOwningController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_IcarusPlayerControllerSurvival_C*Controller                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SurvivalMetaController_C::GetOwningController(class ABP_IcarusPlayerControllerSurvival_C** Controller, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "GetOwningController");

	Params::UBP_SurvivalMetaController_C_GetOwningController_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.GetMetaItemsAndResources
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FItemData>           MetaItems                                                        (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FMetaResource>       MetaResources                                                    (Parm, OutParm)
// struct FGameplayTagQuery           ReturnableMetaItemsQuery                                         (Edit, BlueprintVisible)
// int32                              CurrencyCount                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          Inventories                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FMetaResource>       Resources                                                        (Edit, BlueprintVisible)
// TArray<struct FItemData>           Items                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetOwningController_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          CallFunc_GetAllInventories_ReturnValue                           (ReferenceParm, ContainsInstancedReference)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetOwningController_Controller_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlot              CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SurvivalMetaController_C::GetMetaItemsAndResources(TArray<struct FItemData>* MetaItems, TArray<struct FMetaResource>* MetaResources, const struct FGameplayTagQuery& ReturnableMetaItemsQuery, int32 CurrencyCount, const TArray<class UInventory*>& Inventories, const TArray<struct FMetaResource>& Resources, const TArray<struct FItemData>& Items, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller, TArray<class UInventory*>& CallFunc_GetAllInventories_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller_1, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UInventory* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInventorySlot& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "GetMetaItemsAndResources");

	Params::UBP_SurvivalMetaController_C_GetMetaItemsAndResources_Params Parms{};

	Parms.ReturnableMetaItemsQuery = ReturnableMetaItemsQuery;
	Parms.CurrencyCount = CurrencyCount;
	Parms.Inventories = Inventories;
	Parms.Resources = Resources;
	Parms.Items = Items;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningController_Controller = CallFunc_GetOwningController_Controller;
	Parms.CallFunc_GetAllInventories_ReturnValue = CallFunc_GetAllInventories_ReturnValue;
	Parms.CallFunc_GetOwningController_Controller_1 = CallFunc_GetOwningController_Controller_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MetaItems != nullptr)
		*MetaItems = std::move(Parms.MetaItems);

	if (MetaResources != nullptr)
		*MetaResources = std::move(Parms.MetaResources);

}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.LeaveByDropship_ShowMissionReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SurvivalMetaController_C::LeaveByDropship_ShowMissionReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "LeaveByDropship_ShowMissionReport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.ServerRequestMissionReport
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SurvivalMetaController_C::ServerRequestMissionReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "ServerRequestMissionReport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.ClientReceiveMissionReport
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionReport              Report                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SurvivalMetaController_C::ClientReceiveMissionReport(const struct FMissionReport& Report)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "ClientReceiveMissionReport");

	Params::UBP_SurvivalMetaController_C_ClientReceiveMissionReport_Params Parms{};

	Parms.Report = Report;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SurvivalMetaController.BP_SurvivalMetaController_C.ExecuteUbergraph_BP_SurvivalMetaController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetOwningController_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_MissionReport_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveProspectBackendCompatible_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMissionReport              K2Node_CustomEvent_Report                                        (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameModeSurvival*     K2Node_DynamicCast_AsIcarus_Game_Mode_Survival                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetOwningController_Controller_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReport              CallFunc_GenerateMissionReportForPlayer_ReturnValue              (None)

void UBP_SurvivalMetaController_C::ExecuteUbergraph_BP_SurvivalMetaController(int32 EntryPoint, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller, class UUMG_MissionReport_C* CallFunc_Create_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsActiveProspectBackendCompatible_ReturnValue, const struct FMissionReport& K2Node_CustomEvent_Report, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller_1, const struct FMissionReport& CallFunc_GenerateMissionReportForPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SurvivalMetaController_C", "ExecuteUbergraph_BP_SurvivalMetaController");

	Params::UBP_SurvivalMetaController_C_ExecuteUbergraph_BP_SurvivalMetaController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningController_Controller = CallFunc_GetOwningController_Controller;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsActiveProspectBackendCompatible_ReturnValue = CallFunc_IsActiveProspectBackendCompatible_ReturnValue;
	Parms.K2Node_CustomEvent_Report = K2Node_CustomEvent_Report;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Survival = K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningController_Controller_1 = CallFunc_GetOwningController_Controller_1;
	Parms.CallFunc_GenerateMissionReportForPlayer_ReturnValue = CallFunc_GenerateMissionReportForPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


