#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x768 - 0x741)
// BlueprintGeneratedClass NPC_Slaver2New.NPC_Slaver2New_C
class ANPC_Slaver2New_C : public ABP_BaseAI_Dialog_C
{
public:
	uint8                                        Pad_4D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPC_Slaver2New_C* GetDefaultObj();

	void TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool Temp_bool_IsClosed_Variable);
	void Death();
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Update_Items();
	void ReceiveBeginPlay();
	void HandleMeshOnDeath();
	void ExecuteUbergraph_NPC_Slaver2New(int32 EntryPoint, class ANpc_eleia_C* CallFunc_GetActorOfClass_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_SwitchName_CmpSuccess, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_add_sub_objective_Successful, bool CallFunc_remove_sub_objective_Successful);
};

}


