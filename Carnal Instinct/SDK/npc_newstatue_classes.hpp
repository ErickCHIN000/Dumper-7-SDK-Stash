#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x5B0 - 0x59A)
// BlueprintGeneratedClass npc_newstatue.npc_newstatue_C
class ANpc_newstatue_C : public AExample_npc_base_C
{
public:
	uint8                                        Pad_15FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Dead_Body_Location;                                // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANpc_newstatue_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void START_DLG();
	void Spawn_Dead_Mered(bool Suicide);
	void Game_Load();
	void ExecuteUbergraph_npc_newstatue(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, bool CallFunc_msl_get_actor_by_id_is_valid_1, class AActor* CallFunc_msl_get_actor_by_id_actor_reference_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_Suicide, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess);
};

}


