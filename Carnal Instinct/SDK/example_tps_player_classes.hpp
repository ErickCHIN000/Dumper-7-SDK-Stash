#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x670 - 0x548)
// BlueprintGeneratedClass example_tps_player.example_tps_player_C
class AExample_tps_player_C : public AExample_tps_character_parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  Text_strength;                                     // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Example_strength_stat;                             // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_start_dynamic_info             Dlg_dynamic;                                       // 0x560(0x110)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AExample_tps_player_C* GetDefaultObj();

	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_q_face_u_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_P_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_J_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisEvt_move_x_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_move_y_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_turn_y_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_turn_x_K2Node_InputAxisEvent_0(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_1_ed_begingame__DelegateSignature(bool Loaded_save_file);
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_2_ed_loadgame__DelegateSignature();
	void BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature();
	void BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor);
	void ExecuteUbergraph_example_tps_player(int32 EntryPoint, bool CallFunc_dlg_get_notification_component_is_valid, class Ubp_notification_component_C* CallFunc_dlg_get_notification_component_notification_reference, bool CallFunc_IsValid_ReturnValue, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, const struct FKey& K2Node_InputKeyEvent_Key_4, float CallFunc_get_control_direction_stick_value, const struct FRotator& CallFunc_get_control_direction_stick_direction, float K2Node_InputAxisEvent_AxisValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputKeyEvent_Key_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_3, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FKey& K2Node_InputKeyEvent_Key_6, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, TArray<class AActor*>& K2Node_MakeArray_Array_3, const struct FKey& K2Node_InputKeyEvent_Key, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_dlg_get_dlg_component_is_valid_1, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference_1, int32 Temp_int_Loop_Counter_Variable, const struct FKey& Temp_struct_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_2, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_1, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_add_quest_is_valid, bool CallFunc_add_quest_is_spawned, class Abp_quest_actor_C* CallFunc_add_quest_quest_actor, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool K2Node_ComponentBoundEvent_loaded_save_file, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_get_id_is_valid, class FName CallFunc_get_id_actor_unique_id, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, TArray<class FName>& K2Node_MakeArray_Array_5, const struct FKey& K2Node_InputKeyEvent_Key_9, TArray<class AActor*>& K2Node_MakeArray_Array_6, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_1, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots, bool CallFunc_get_save_list_sorted_by_date_is_save_exist, bool CallFunc_get_save_list_sorted_by_date_is_max, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_2, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_sorted_saves_1, TArray<class FString>& CallFunc_get_save_list_sorted_by_date_empty_slots_1, bool CallFunc_get_save_list_sorted_by_date_is_save_exist_1, bool CallFunc_get_save_list_sorted_by_date_is_max_1, const class FString& CallFunc_Array_Get_Item_3, bool CallFunc_save_slot_success, const class FString& CallFunc_Array_Get_Item_4, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_5, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_3, class Abp_msl_savegame_actor_C* CallFunc_msl_get_savegame_reference_save_actor_4, bool CallFunc_save_slot_success_1, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool CallFunc_dlg_get_notification_component_is_valid_1, class Ubp_notification_component_C* CallFunc_dlg_get_notification_component_notification_reference_1, class UW_01_notification_parent_C* CallFunc_spawn_notification_notify_widget_1, bool CallFunc_IsValid_ReturnValue_3);
};

}

