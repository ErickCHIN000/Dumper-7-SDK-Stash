#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x259 - 0x220)
// BlueprintGeneratedClass bp_quest_marker.bp_quest_marker_C
class Abp_quest_marker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMap_Return_BP_C*                      Map_Return_BP;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TargetIndicatorComponent_C*        BP_TargetIndicatorComponent;                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_map_component_C*               bp_dlg_map_component;                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Root_arrow;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Objective_id;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sub_objective;                                     // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Abp_quest_marker_C* GetDefaultObj();

	void Init_quest_icon(class Abp_quest_actor_C* Quest_actor, class FName Objective_id, bool Sub_objective, enum class Enum_quest_icon Icon_type);
	void ReceiveDestroyed();
	void ExecuteUbergraph_bp_quest_marker(int32 EntryPoint, bool CallFunc_get_quest_active_is_valid, int32 CallFunc_get_quest_active_found_index, bool K2Node_SwitchInteger_CmpSuccess, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, class FName K2Node_CustomEvent_objective_id, bool K2Node_CustomEvent_sub_objective, enum class Enum_quest_icon K2Node_CustomEvent_icon_type, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IMap_BPI_C> K2Node_DynamicCast_AsMap_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


