#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x772 - 0x741)
// BlueprintGeneratedClass npc_merednew.npc_merednew_C
class ANpc_merednew_C : public ABP_BaseAI_Dialog_C
{
public:
	uint8                                        Pad_2DE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USphereComponent*                      WalkingRadius;                                     // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponMesh;                                        // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_TargetIndicatorComponent_C*        BP_TargetIndicatorComponent;                       // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bottom;                                            // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         EnterCombat_;                                      // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShoudMove_;                                        // 0x771(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ANpc_merednew_C* GetDefaultObj();

	void TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool Temp_bool_IsClosed_Variable);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void Death(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_SetIsInCombat_Dummy);
	void CanBeAttacked(bool* Result);
	void OnFail_15F9DD204A52EE1FB1CBB9898B939632(enum class EPathFollowingResult MovementResult);
	void OnSuccess_15F9DD204A52EE1FB1CBB9898B939632(enum class EPathFollowingResult MovementResult);
	void OnFail_7747EEDE4E7ACB5A8EBEAC996FC02953(enum class EPathFollowingResult MovementResult);
	void OnSuccess_7747EEDE4E7ACB5A8EBEAC996FC02953(enum class EPathFollowingResult MovementResult);
	void ReceiveBeginPlay();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void Call_DLG();
	void Walking_innit();
	void Enter_Combat();
	void Deadededed();
	void Mered_Leave_House();
	void End_Quest(float Delay, bool No_Destroy_Mered);
	void Update_Items();
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void MoveSplineNPC();
	void BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Push_along();
	void MeredFinishedWalking();
	void Game_Load();
	void GoToShrine();
	void CustomEvent_0();
	void ExecuteUbergraph_npc_merednew(int32 EntryPoint, class ANPC_DynamicSex_Loiterer_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWB_Fade_C* CallFunc_Create_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue_1, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class UWB_Fade_C* CallFunc_Create_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, class Abp_door_mered_C* CallFunc_GetActorOfClass_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class ANpc_guard3_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, bool CallFunc_get_dlg_is_valid_1, int32 CallFunc_get_dlg_found_index_1, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_1, bool CallFunc_get_dlg_is_valid_2, int32 CallFunc_get_dlg_found_index_2, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_2, class Abp_door_mered_C* CallFunc_GetActorOfClass_ReturnValue_3, float K2Node_CustomEvent_Delay, bool K2Node_CustomEvent_No_Destroy_Mered, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1, class ANpc_guard3_C* CallFunc_GetActorOfClass_ReturnValue_4, bool CallFunc_dlg_get_dlg_component_is_valid_1, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference_1, bool CallFunc_get_dlg_is_valid_3, int32 CallFunc_get_dlg_found_index_3, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_3, class ABP_BloodScribe_Corpse_C* CallFunc_GetActorOfClass_ReturnValue_5, TArray<class ANpc_citizenrn_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ANpc_watchmanrn_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ANpc_watchmanrn_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, enum class EPathFollowingResult Temp_byte_Variable_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class ANpc_citizenrn_C* CallFunc_Array_Get_Item_1, int32 CallFunc_GetLastSplineIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FVector& CallFunc_GetSplinePointLocation_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ANpc_newstatue_C* CallFunc_GetActorOfClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found);
};

}


