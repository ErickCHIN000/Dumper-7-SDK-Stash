#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x27C - 0x220)
// BlueprintGeneratedClass bp_dlg_proxy_base.bp_dlg_proxy_base_C
class Abp_dlg_proxy_base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Arrow_root;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        Mesh_list;                                         // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                          Var_id;                                            // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                Var_float;                                         // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Proxy_id;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Track_ground;                                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Capsule_height;                                    // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Capsule_radius;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_dlg_proxy_base_C* GetDefaultObj();

	void Snapshot_mesh(class USkeletalMeshComponent* Mesh_component, class FName Snapshot_name, struct FPoseSnapshot* Snapshot_data, const TArray<struct FTransform>& Local_transform, const TArray<class FName>& Local_name, class USkeletalMeshComponent* Local_mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FPoseSnapshot& K2Node_MakeStruct_PoseSnapshot, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue);
	void Set_mesh_list(TArray<class USkeletalMeshComponent*>& Mesh_list);
	void Get_float_var(class FName Var_id, float* Return_value, bool CallFunc_find_var_id_is_valid, int32 CallFunc_find_var_id_found_index, float CallFunc_Array_Get_Item);
	void Find_var_id(class FName Var_id, bool* Is_valid, int32* Found_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Set_float_var(class FName Var_id, float Var_value, float* Return_value, float Local_value, class FName Local_id, bool CallFunc_find_var_id_is_valid, int32 CallFunc_find_var_id_found_index, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void ReceiveTick(float DeltaSeconds);
	void Custom_proxy_init();
	void Custom_proxy_tick(float Delta_seconds);
	void Proxy_init(class Abp_dlg_actor_C* Dlg_actor, class FName Proxy_id);
	void ExecuteUbergraph_bp_dlg_proxy_base(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, class FName K2Node_CustomEvent_proxy_id, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_delta_seconds);
};

}


