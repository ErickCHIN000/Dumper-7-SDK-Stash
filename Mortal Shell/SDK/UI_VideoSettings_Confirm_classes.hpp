#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x540 (0x770 - 0x230)
// WidgetBlueprintGeneratedClass UI_VideoSettings_Confirm.UI_VideoSettings_Confirm_C
class UUI_VideoSettings_Confirm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Timer;                                        // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Cancel;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Confirm;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Timer;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x270(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x4E8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_OptionsMenu_C*                     UI_OptionsMenu;                                    // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_VideoSettings_Confirm_C* GetDefaultObj();

	void Discard(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void Apply(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void ResetButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavSetButton(int32 Index_Current, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void GetButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array);
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Nav_Left();
	void Nav_Right();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void OnOpen();
	void Confirm();
	void Construct();
	void OnAnimEnd();
	void UnbindAnim();
	void ExecuteUbergraph_UI_VideoSettings_Confirm(int32 EntryPoint, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnClick__DelegateSignature(int32 Index);
};

}


