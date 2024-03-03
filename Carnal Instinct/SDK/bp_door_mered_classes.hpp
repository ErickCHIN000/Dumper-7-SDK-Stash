#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x270 - 0x220)
// BlueprintGeneratedClass bp_door_mered.bp_door_mered_C
class Abp_door_mered_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Interactable_C*                    AC_Interactable;                                   // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      InteractionWidget;                                 // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InteractableArea;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpenDoor_Rotation_361410A84BF05929186F39AC87399A83; // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenDoor__Direction_361410A84BF05929186F39AC87399A83; // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_104E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpenDoor;                                          // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_door_mered_C* GetDefaultObj();

	void Check_for_specific_Item_in_Inventory(class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_ID_item, bool CallFunc_Get_Inventory_Item_by_ID_Found);
	void OpenDoor__FinishedFunc();
	void OpenDoor__UpdateFunc();
	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void Game_Load();
	void Event_Unlock();
	void ExecuteUbergraph_bp_door_mered(int32 EntryPoint, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Variable, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable_1, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, const struct FRotator& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


