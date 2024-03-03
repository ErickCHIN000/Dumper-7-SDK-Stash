#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x270 - 0x220)
// BlueprintGeneratedClass bp_dlg_subtitles_widget_3d.bp_dlg_subtitles_widget_3d_C
class Abp_dlg_subtitles_widget_3d_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetComponent*                      W_back;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                      W_front;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       W_scale;                                           // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                       Root_arrow;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       Latest_dlg_actor;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  Player_camera;                                     // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Ubp_dlg_component_C*                   bp_owning_dlg_component;                           // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_03_dlg_3d_subtitles_C*>      Subtitle_widgets;                                  // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class Abp_dlg_subtitles_widget_3d_C* GetDefaultObj();

	void Show_name(class FName Name_id, int32 Temp_int_Array_Index_Variable, class UW_03_dlg_3d_subtitles_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Clear_widget(bool Clear_quick, int32 Temp_int_Array_Index_Variable, class UW_03_dlg_3d_subtitles_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Update_reply(const struct FS_dlg_reply_info& Reply_info, class Abp_dlg_actor_C* Dlg_actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UW_03_dlg_3d_subtitles_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Tick_rotation(float Interp_speed, float Local_speed, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_MapRangeClamped_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void Init_dlg_parent(class Ubp_dlg_component_C* bp_owner_dlg_component, int32 Temp_int_Array_Index_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TArray<class UWidgetComponent*>& K2Node_MakeArray_Array, class UWidgetComponent* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_03_dlg_3d_subtitles_C* K2Node_DynamicCast_AsW_03_Dlg_3d_Subtitles, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void Destroy_widget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_dlg_subtitles_widget_3d(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


