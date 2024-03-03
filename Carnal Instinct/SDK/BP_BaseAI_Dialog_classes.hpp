#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x741 - 0x6F0)
// BlueprintGeneratedClass BP_BaseAI_Dialog.BP_BaseAI_Dialog_C
class ABP_BaseAI_Dialog_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetComponent*                      InteractionWidget;                                 // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InteractableArea;                                  // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Lookat_head;                                       // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Voice_slot;                                        // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_component_C*                   bp_dlg_component;                                  // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAC_Interactable_C*                    AC_Interactable;                                   // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTargetable_;                                     // 0x740(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_BaseAI_Dialog_C* GetDefaultObj();

	void TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType);
	void SetHostile(TArray<class UClass*>& K2Node_MakeArray_Array);
	void SetFriendly();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature();
	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status);
	void ReceiveBeginPlay();
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature();
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file);
	void Ed_parent_begingame(bool Loaded_save_file);
	void Ed_parent_savegame();
	void Game_Load();
	void ExecuteUbergraph_BP_BaseAI_Dialog(int32 EntryPoint, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_2, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_ComponentBoundEvent_loaded_save_file, bool K2Node_CustomEvent_loaded_save_file, bool K2Node_SwitchInteger_CmpSuccess);
};

}


