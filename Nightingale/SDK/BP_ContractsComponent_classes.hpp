#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_ContractsComponent.BP_ContractsComponent_C
class UBP_ContractsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        ContractedActors;                                  // 0xA8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_ContractsComponent_C* GetDefaultObj();

	void AddContractor(class AActor* NpcActor, bool* Success, class AActor* ContractedActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RemoveContractor(class AActor* NpcActor, bool* Success, bool CallFunc_Array_RemoveItem_ReturnValue);
	void IssueOrder(enum class E_PingVerbs Verb, class AActor* OrderTarget, bool* Success, class AActor* Contractor, enum class E_PingVerbs RequestedActionStationType, class AActor* TargetedActor, class UBP_PingComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_Ping_C> K2Node_DynamicCast_AsBPI_Ping, bool K2Node_DynamicCast_bSuccess, enum class E_PingObjectType CallFunc_GetPingObjectType_PingObjectType, class FName CallFunc_GetPingObjectType_DataTableRowName, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBPI_NPCInterfaces_C> K2Node_DynamicCast_AsBPI_NPCInterfaces, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_NPCContract_C> CallFunc_GetNPCContractInterface_Interface, bool CallFunc_SetOrderTarget_Success, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void RecruitNPC(class AActor* BedActor, class UClass* SpawnerClass);
	void ContractedActorDestroyed(class AActor* ContractedActor);
	void ContractedCreatureDeath(class ANWXAICharacter* ContractedCreature);
	void ExecuteUbergraph_BP_ContractsComponent(int32 EntryPoint, class AActor* K2Node_CustomEvent_ContractedActor, class ANWXAICharacter* K2Node_CustomEvent_ContractedCreature, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* K2Node_CustomEvent_BedActor, class UClass* K2Node_CustomEvent_SpawnerClass, bool CallFunc_Array_RemoveItem_ReturnValue_1);
};

}


