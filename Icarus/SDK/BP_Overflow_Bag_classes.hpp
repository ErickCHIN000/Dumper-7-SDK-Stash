#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x398 - 0x311)
// BlueprintGeneratedClass BP_Overflow_Bag.BP_Overflow_Bag_C
class ABP_Overflow_Bag_C : public ABP_WorldObject_C
{
public:
	uint8                                        Pad_4406[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   Inventory;                                         // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AtmosphereController_C*            AtmosphereController;                              // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Widget_Class_to_Open;                              // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         GravestoneBag;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4423[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FStatsEnum, int32>               In_Stats;                                          // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Overflow_Bag_C* GetDefaultObj();

	void WorldObject_Interact(class AActor* Instigator, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnItemRemoved_Event(class UInventory* Inventory, int32 Location);
	void OnTerrainAchorStateChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Overflow_Bag(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_HasItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_AddStats_BP_ReturnValue, bool CallFunc_IsTerrainAnchorValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


