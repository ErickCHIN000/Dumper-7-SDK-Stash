#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5B8 - 0x560)
// BlueprintGeneratedClass NPC_DynamicSex_Loiterer.NPC_DynamicSex_Loiterer_C
class ANPC_DynamicSex_Loiterer_C : public ANPC_DynamicSex_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMesh*                         NewMesh;                                           // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Clothing_Material;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           Position_0;                                        // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           Position1;                                         // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMesh*                         CockMesh;                                          // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Possible_npc_ids;                                  // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  Npc_interlocular_id;                               // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPC_DynamicSex_Loiterer_C* GetDefaultObj();

	void UserConstructionScript(const struct FDataTableRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Add_ReturnValue);
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void ExecuteUbergraph_NPC_DynamicSex_Loiterer(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_SwitchName_CmpSuccess, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor);
};

}


