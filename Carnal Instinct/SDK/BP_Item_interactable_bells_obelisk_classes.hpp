#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass BP_Item_interactable_bells_obelisk.BP_Item_interactable_bells_obelisk_C
class ABP_Item_interactable_bells_obelisk_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Changed_Obelisk;                                   // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_interactable_bells_obelisk_C* GetDefaultObj();

	void Interaction();
	void MeshSwap();
	void Game_Load();
	void ExecuteUbergraph_BP_Item_interactable_bells_obelisk(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue_1, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget);
};

}


