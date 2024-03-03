#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x5B8 - 0x59A)
// BlueprintGeneratedClass npc_statue.npc_statue_C
class ANpc_statue_C : public AExample_npc_base_C
{
public:
	uint8                                        Pad_C13[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANpc_statue_C* GetDefaultObj();

	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void Give_Left_Eye();
	void Give_Right_Eye();
	void Game_Load();
	void ExecuteUbergraph_npc_statue(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


