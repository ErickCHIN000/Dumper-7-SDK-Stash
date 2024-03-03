#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x290 - 0x258)
// BlueprintGeneratedClass BP_DLG_NonNPC.BP_DLG_NonNPC_C
class ABP_DLG_NonNPC_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMap_Return_BP_C*                      Map_Return_BP;                                     // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TargetIndicatorComponent_C*        BP_TargetIndicatorComponent;                       // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_quest_component_C*                 bp_quest_comp;                                     // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_map_component_C*               bp_dlg_map_component;                              // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_component_C*                   bp_dlg_component;                                  // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DLG_NonNPC_C* GetDefaultObj();

	void Ed_parent_savegame();
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature();
	void Ed_parent_begingame(bool Loaded_save_file);
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file);
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature();
	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void Game_Load();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status);
	void ExecuteUbergraph_BP_DLG_NonNPC(int32 EntryPoint, bool K2Node_CustomEvent_loaded_save_file, bool K2Node_ComponentBoundEvent_loaded_save_file, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess);
};

}


