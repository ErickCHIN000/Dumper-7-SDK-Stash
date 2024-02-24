#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_ControlsSwitch.wid_MainMenu_ControlsSwitch_C
class UWid_MainMenu_ControlsSwitch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BtnM;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BtnP;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgLeft;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImgRight;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueTxt;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ValChangedPlus;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ValChangedMinus;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Title;                                             // 0x2C0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWid_MainMenu_ControlsSwitch_C* GetDefaultObj();

	void SetSelected(bool IsSelected, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
	void BndEvt__BtnP_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnM_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnM_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BtnP_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_MainMenu_ControlsSwitch(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, int32 CallFunc_PostEvent_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2);
	void ValChangedMinus__DelegateSignature();
	void ValChangedPlus__DelegateSignature();
};

}


