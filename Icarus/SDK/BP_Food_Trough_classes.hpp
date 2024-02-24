#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x7C8 - 0x78A)
// BlueprintGeneratedClass BP_Food_Trough.BP_Food_Trough_C
class ABP_Food_Trough_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_68E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_DEP_Trough_Seeds_Proxy;                         // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   InventoryComponent;                                // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TroughContainsFood;                                // 0x7B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_68EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Filled_Mesh;                                       // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Empty_Mesh;                                        // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Food_Trough_C* GetDefaultObj();

	void UpdateFoodVisibility(bool Visible, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnRep_TroughContainsFood();
	void UpdateProxyMeshVisibility(bool CallFunc_IsValid_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnInventoryItemsUpdated(class UInventory* Inventory, int32 Location);
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Food_Trough(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location);
};

}


