#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x5A8 - 0x59A)
// BlueprintGeneratedClass npc_dragon.npc_dragon_C
class ANpc_dragon_C : public AExample_npc_base_C
{
public:
	uint8                                        Pad_364[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANpc_dragon_C* GetDefaultObj();

	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void BndEvt__npc_dragon_InteractableArea_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__npc_dragon_InteractableArea_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_npc_dragon(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool Temp_bool_IsClosed_Variable, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


