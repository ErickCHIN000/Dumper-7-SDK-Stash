#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x340 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Input_Entry.wid_MainMenu_Input_Entry_C
class UWid_MainMenu_Input_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_ButtonIndicator_C*                Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  AxisMapping;                                       // 0x290(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInputActionKeyMapping                ActionMapping;                                     // 0x2B8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsAxisMapping;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_DD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  AxisMappingOld;                                    // 0x2E8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInputActionKeyMapping                ActionMappingOld;                                  // 0x310(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWid_MainMenu_Controls_v2_C*           ParentControlsV2;                                  // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Input_Entry_C* GetDefaultObj();

	void SetSelected(bool NewSelected, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, float K2Node_Select_Default);
	void BndEvt__Button_446_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_446_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Key_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_MainMenu_Input_Entry(int32 EntryPoint, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UWid_MainMenu_Controls_Popup_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPanelWidget* K2Node_Select_Default, int32 CallFunc_GetChildIndex_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_MainMenu_Input_Entry_C* K2Node_DynamicCast_AsWid_Main_Menu_Input_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue);
};

}


