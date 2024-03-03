#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x284 - 0x260)
// WidgetBlueprintGeneratedClass w_01_notification_parent.w_01_notification_parent_C
class UW_01_notification_parent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubp_notification_component_C*          Notify_component;                                  // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Queue_index;                                       // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Active_index;                                      // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Notify_end_time;                                   // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Notify_padding;                                    // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Notify_order;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_01_notification_parent_C* GetDefaultObj();

	void Finish_notify();
	void Add_notification(class Ubp_notification_component_C* Notify_component, int32 Queue_index);
	void Start_notification(int32 Active_index);
	void Custom_notify_info(class FText Text_1, class FText Text_2);
	void Custom_notify_start();
	void Custom_notify_end();
	void Custom_notify_settings(float Notify_end_time, float Notify_padding, int32 Notify_order);
	void ExecuteUbergraph_w_01_notification_parent(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class Ubp_notification_component_C* K2Node_CustomEvent_notify_component, int32 K2Node_CustomEvent_queue_index, int32 K2Node_CustomEvent_active_index, class FText K2Node_CustomEvent_text_1, class FText K2Node_CustomEvent_text_2, float K2Node_CustomEvent_notify_end_time, float K2Node_CustomEvent_notify_padding, int32 K2Node_CustomEvent_notify_order, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


