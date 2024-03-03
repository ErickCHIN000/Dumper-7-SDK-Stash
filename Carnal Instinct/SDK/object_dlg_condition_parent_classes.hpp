#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x101 (0x321 - 0x220)
// BlueprintGeneratedClass object_dlg_condition_parent.object_dlg_condition_parent_C
class AObject_dlg_condition_parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Instigator_id;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Unique_id;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Data_id;                                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  branch_id;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Reply_id;                                          // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Choice_id;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Choice_data;                                       // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_condition                      Condition_info;                                    // 0x270(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Object_lifespan;                                   // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_TemplateUI, bool>          Content_Warnings;                                  // 0x2C0(0x50)(Edit, BlueprintVisible)
	class UAC_Inventory_C*                       AC_Inventory;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CLine_0;                                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Content_Warning_Triggered;                         // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AObject_dlg_condition_parent_C* GetDefaultObj();

	void CheckContentSettings(class FName* CLine, enum class Enum_dlg_choice_status* Status, bool* Content_Warning_Triggered, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TArray<enum class E_TemplateUI>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class E_TemplateUI CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, enum class Enum_dlg_choice_status CStatus, class FName CLine, class FName CallFunc_CheckContentSettings_CLine, enum class Enum_dlg_choice_status CallFunc_CheckContentSettings_Status, bool CallFunc_CheckContentSettings_Content_Warning_Triggered, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info);
	void Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value);
	void Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value);
	void branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value);
	void Init_condition_object(class Abp_dlg_actor_C* Dlg_actor, class FName Dlg_instigator, class FName Reply_id, class FName Choice_id, class FName Choice_data, const struct FS_dlg_condition& Condition_info, class AObject_dlg_condition_parent_C** Dlg_condition);
	void ExecuteUbergraph_object_dlg_condition_parent(int32 EntryPoint);
};

}


