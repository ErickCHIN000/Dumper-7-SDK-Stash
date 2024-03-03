#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xE1 - 0xB0)
// BlueprintGeneratedClass bp_notification_component.bp_notification_component_C
class Ubp_notification_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Wait_until_empty;                                  // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_notifications;                                 // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       Notifications_queue;                               // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                       Active_notifications;                              // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_hit_last;                                       // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubp_notification_component_C* GetDefaultObj();

	void Check_notification(class UObject* Local_target, int32 Local_index, bool Local_exist, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UW_01_notification_parent_C* K2Node_DynamicCast_AsW_01_Notification_Parent, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Array_Get_Item, class UObject* Temp_object_Variable, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable, class UObject* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Return_notification(int32 Active_index, class UObject* Temp_object_Variable);
	void Spawn_notification(class UClass* Notification_class, class FText Text1, class FText Text2, class UW_01_notification_parent_C** Notify_widget, class UClass* Local_class, bool CallFunc_IsValidClass_ReturnValue, class UW_01_notification_parent_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_notification_component(int32 EntryPoint);
};

}


