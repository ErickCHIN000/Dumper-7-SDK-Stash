#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x5A8 - 0x59A)
// BlueprintGeneratedClass npc_assistant.npc_assistant_C
class ANpc_assistant_C : public AExample_npc_base_C
{
public:
	uint8                                        Pad_14EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANpc_assistant_C* GetDefaultObj();

	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void ExecuteUbergraph_npc_assistant(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor);
};

}


