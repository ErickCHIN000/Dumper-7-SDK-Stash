#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x161 - 0xB0)
// BlueprintGeneratedClass BP_SurvivalMetaController.BP_SurvivalMetaController_C
class UBP_SurvivalMetaController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FMissionReport                        MissionReport;                                     // 0xB8(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasReceivedMissionReport;                          // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_SurvivalMetaController_C* GetDefaultObj();

	void GetOwningController(class ABP_IcarusPlayerControllerSurvival_C** Controller, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess);
	void GetMetaItemsAndResources(TArray<struct FItemData>* MetaItems, TArray<struct FMetaResource>* MetaResources, const struct FGameplayTagQuery& ReturnableMetaItemsQuery, int32 CurrencyCount, const TArray<class UInventory*>& Inventories, const TArray<struct FMetaResource>& Resources, const TArray<struct FItemData>& Items, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller, TArray<class UInventory*>& CallFunc_GetAllInventories_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller_1, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UInventory* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInventorySlot& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void LeaveByDropship_ShowMissionReport();
	void ServerRequestMissionReport();
	void ClientReceiveMissionReport(const struct FMissionReport& Report);
	void ExecuteUbergraph_BP_SurvivalMetaController(int32 EntryPoint, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller, class UUMG_MissionReport_C* CallFunc_Create_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsActiveProspectBackendCompatible_ReturnValue, const struct FMissionReport& K2Node_CustomEvent_Report, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetOwningController_Controller_1, const struct FMissionReport& CallFunc_GenerateMissionReportForPlayer_ReturnValue);
};

}


