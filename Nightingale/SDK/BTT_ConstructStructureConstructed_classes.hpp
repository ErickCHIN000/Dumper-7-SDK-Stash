#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTT_ConstructStructureConstructed.BTT_ConstructStructureConstructed_C
class UBTT_ConstructStructureConstructed_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Target;                                            // 0xB0(0x28)(Edit, BlueprintVisible)
	class ACharacter*                            LCharacter;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0xE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AAIC_Creature_NPC_Villager_C*          LAICVillager;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       LAIContainer;                                      // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_ConstructStructureConstructed_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_ConstructStructureConstructed(int32 EntryPoint, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, int32 Temp_int_Loop_Counter_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ANWXActor* K2Node_DynamicCast_AsNWXActor, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureResourceHandlingInterface> K2Node_DynamicCast_AsStructure_Resource_Handling_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_AddConstructionResources_bSuccess, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutUnusedResources, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutAddedResources, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, int32 CallFunc_RemoveItemsWithReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


