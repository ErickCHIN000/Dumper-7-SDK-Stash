#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x310 - 0x2D0)
// WidgetBlueprintGeneratedClass UMG_CharacterSetting_TextBase.UMG_CharacterSetting_TextBase_C
class UUMG_CharacterSetting_TextBase_C : public UUMG_CharacterSetting_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Divider_3;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  LeftButton;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  RightButton;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_SettingName;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectionUpdated_0;                                // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_CharacterSetting_TextBase_C* GetDefaultObj();

	void UpdateVisuals(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_GetSelectionDisplayName_DisplayName, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default_1);
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_CharacterSetting_TextBase(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SelectionUpdated_0__DelegateSignature(int32 Index, const struct FPreviewCameraSettingsEnum& NewFocus);
};

}


