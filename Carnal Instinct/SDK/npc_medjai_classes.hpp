#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x5BC - 0x59A)
// BlueprintGeneratedClass npc_medjai.npc_medjai_C
class ANpc_medjai_C : public AExample_npc_base_C
{
public:
	uint8                                        Pad_4C9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bottom;                                            // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Stuff;                                             // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANpc_medjai_C* GetDefaultObj();

	void OnNotifyEnd_715CA49849764CFA6CFD41B4CBC5623F(class FName NotifyName);
	void OnNotifyBegin_715CA49849764CFA6CFD41B4CBC5623F(class FName NotifyName);
	void OnInterrupted_715CA49849764CFA6CFD41B4CBC5623F(class FName NotifyName);
	void OnBlendOut_715CA49849764CFA6CFD41B4CBC5623F(class FName NotifyName);
	void OnCompleted_715CA49849764CFA6CFD41B4CBC5623F(class FName NotifyName);
	void ReceiveBeginPlay();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void Start_Combat();
	void Trigger_Quest();
	void AnimSwitch();
	void Game_Load();
	void ExecuteUbergraph_npc_medjai(int32 EntryPoint, class ABP_BanditMinusMedjai_C* CallFunc_GetActorOfClass_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


