#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A4 - 0x27C)
// BlueprintGeneratedClass bp_dlg_proxy_widget.bp_dlg_proxy_widget_C
class Abp_dlg_proxy_widget_C : public Abp_dlg_proxy_base_C
{
public:
	uint8                                        Pad_AEF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetComponent*                      W_front;                                           // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      W_back;                                            // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       W_scale;                                           // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Widget_scale;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_dlg_proxy_widget_C* GetDefaultObj();

	void Update_widget_scale(float CallFunc_MapRangeUnclamped_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
	void UserConstructionScript();
	void Custom_proxy_tick(float Delta_seconds);
	void Custom_proxy_init();
	void ExecuteUbergraph_bp_dlg_proxy_widget(int32 EntryPoint, float K2Node_Event_delta_seconds);
};

}


