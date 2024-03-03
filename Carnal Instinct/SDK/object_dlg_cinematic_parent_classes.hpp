#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass object_dlg_cinematic_parent.object_dlg_cinematic_parent_C
class AObject_dlg_cinematic_parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_cinematic_C*                   Dlg_cinematic;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_cut_C*                         Dlg_cut;                                           // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Cinematic_id;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unbind;                                            // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_194D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_dlg_cinematic_list>         Cinematic_list;                                    // 0x258(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_dlg_cinematic_anim>         Cinematic_anims;                                   // 0x268(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AObject_dlg_cinematic_parent_C* GetDefaultObj();

	void Get_cinematic(const struct FS_dlg_cinematic_info& Cinematic_info, bool* Is_valid, struct FS_dlg_cinematic_list* Cinematic_data, const struct FS_dlg_cinematic_list& Local_data, bool Local_found, const struct FS_dlg_cinematic_info& Local_info, int32 Temp_int_Array_Index_Variable, const struct FS_dlg_cinematic_list& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_dlg_cinematic_list& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Get_widget(int32 Widget_index, class Abp_dlg_proxy_widget_C** Widget_proxy, bool CallFunc_get_widget_is_valid, int32 CallFunc_get_widget_found_index, class Abp_dlg_layout_widget_3d_C* CallFunc_get_widget_widget_actor, class Abp_dlg_proxy_widget_C* CallFunc_get_widget_widget_proxy);
	void Get_camera(class FName Camera_id, int32 Camera_index, class ACineCameraActor** Camera_proxy, bool CallFunc_get_camera_proxy_is_valid, int32 CallFunc_get_camera_proxy_found_index, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor, class FName CallFunc_Array_Get_Item, bool CallFunc_get_camera_proxy_is_valid_1, int32 CallFunc_get_camera_proxy_found_index_1, class ACineCameraActor* CallFunc_get_camera_proxy_camera_actor_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Get_actor(class FName Actor_id, int32 Actor_index, class AActor** Actor_proxy, bool CallFunc_get_proxy_is_valid, int32 CallFunc_get_proxy_found_index, class Abp_dlg_proxy_base_C* CallFunc_get_proxy_proxy_actor, class FName CallFunc_Array_Get_Item, bool CallFunc_get_proxy_is_valid_1, int32 CallFunc_get_proxy_found_index_1, class Abp_dlg_proxy_base_C* CallFunc_get_proxy_proxy_actor_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Pack_cameras(bool* Return_node);
	void Pack_widgets(bool* Return_node);
	void Pack_actors(bool* Return_node);
	void Call_bind(bool CallFunc_pack_widgets_return_node, bool CallFunc_pack_actors_return_node, bool CallFunc_pack_cameras_return_node);
	void bind_actor(const struct FMovieSceneObjectBindingID& bind_info, class AActor* bind_actor, class AActor* Local_actor, const struct FMovieSceneObjectBindingID& Local_binding, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Init_object(class Abp_dlg_actor_C* Dlg_actor, class Abp_dlg_cinematic_C* Dlg_cinematic, class FName Cinematic_id, bool Unbind);
	void ExecuteUbergraph_object_dlg_cinematic_parent(int32 EntryPoint);
};

}


