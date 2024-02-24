#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x150 - 0x148)
// BlueprintGeneratedClass BaseCampNotifyHUD.BaseCampNotifyHUD_C
class UBaseCampNotifyHUD_C : public UTTLBaseCampNotifyHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBaseCampNotifyHUD_C* GetDefaultObj();

	bool CheckSlideAnimation(class UUserWidget* Widget, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_02, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void PlaySlideAnimation(class UUserWidget* Widget, int32 State);
	void PlayInAnimation(class UUserWidget* Widget);
	void PlayOutAnimation(class UUserWidget* Widget);
	void StopAnimation(class UUserWidget* Widget);
	void ExecuteUbergraph_BaseCampNotifyHUD(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, int32 Temp_int_Variable, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_02, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_widget3, int32 K2Node_Event_state, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_021, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* K2Node_Event_widget2, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_022, bool K2Node_DynamicCast_bSuccess2, class UWidgetAnimation* K2Node_Select_Default, class UUserWidget* K2Node_Event_widget1, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_023, bool K2Node_DynamicCast_bSuccess3);
};

}


