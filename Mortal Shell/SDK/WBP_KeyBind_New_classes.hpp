#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x388 (0x5B8 - 0x230)
// WidgetBlueprintGeneratedClass WBP_KeyBind_New.WBP_KeyBind_New_C
class UWBP_KeyBind_New_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Controller;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_KBM;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Super;                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Controller;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Controller_Super_Left;                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Controller_Super_Right;                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_KBM;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Controller;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_KBM;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Controller;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_KBM;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_KeyBindTitle;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                InputType;                                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  InputActionTitle;                                  // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  InputActionName;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputAction                          InputActionController;                             // 0x2C8(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInputAction                          InputActionKBM;                                    // 0x308(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           ButtonStyleHover;                                  // 0x348(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ButtonStyleUnhover;                                // 0x3D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorHover;                                    // 0x458(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorUnhover;                                  // 0x480(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_Options_Controls_C*                UI_Controls;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConsole;                                         // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1273[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InputAxisTitle;                                    // 0x4B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  InputAxisName;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputAxis                            InputAxisKBM;                                      // 0x4D8(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class FString, struct FInputAction>     ActionsController;                                 // 0x518(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class FString, struct FInputAction>     ActionsKBM;                                        // 0x568(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_KeyBind_New_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void UpdateKBMAction(const struct FInputAction& InputActionKBM);
	void WaitingKey_KBM(class FText CallFunc_MakeLiteralText_ReturnValue);
	void WaitingKey_Controller(class FText CallFunc_MakeLiteralText_ReturnValue);
	void UpdateControllerAction(const struct FInputAction& InputActionController);
	void Unhover_Controller();
	void Hover_Controller();
	void SetKBMKey(const class FString& Temp_string_Variable, const struct FInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GetKeyAsTexture_KeyFound, class UTexture2D* CallFunc_GetKeyAsTexture_Texture, const class FString& CallFunc_GetKeyAsTexture_KeyString, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetKeyAsTexture_KeyFound_1, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_1, const class FString& CallFunc_GetKeyAsTexture_KeyString_1, class FText CallFunc_Conv_StringToText_ReturnValue_3);
	void SetControllerKey(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, const class FString& Temp_string_Variable_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetKeyAsTexture_KeyFound, class UTexture2D* CallFunc_GetKeyAsTexture_Texture, const class FString& CallFunc_GetKeyAsTexture_KeyString, const struct FInputAction& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_GetKeyAsTexture_KeyFound_1, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_1, const class FString& CallFunc_GetKeyAsTexture_KeyString_1, const struct FInputAction& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_GetKeyAsTexture_KeyFound_2, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_2, const class FString& CallFunc_GetKeyAsTexture_KeyString_2, const struct FInputAction& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const class FString& Temp_string_Variable_4, bool CallFunc_GetKeyAsTexture_KeyFound_3, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_3, const class FString& CallFunc_GetKeyAsTexture_KeyString_3, const struct FInputAction& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_GetKeyAsTexture_KeyFound_4, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_4, const class FString& CallFunc_GetKeyAsTexture_KeyString_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_Select_Default, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetKeyAsTexture_KeyFound_5, class UTexture2D* CallFunc_GetKeyAsTexture_Texture_5, const class FString& CallFunc_GetKeyAsTexture_KeyString_5, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void UI_Sound_Navigate();
	void SetKeyBind();
	void BndEvt__Button_KBM_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Controller_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Controller_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Controller_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_KeyBind_New(int32 EntryPoint, bool K2Node_SwitchString_CmpSuccess);
};

}


