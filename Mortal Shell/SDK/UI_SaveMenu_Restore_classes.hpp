#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x578 (0x7A8 - 0x230)
// WidgetBlueprintGeneratedClass UI_SaveMenu_Restore.UI_SaveMenu_Restore_C
class UUI_SaveMenu_Restore_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Restoring;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Restore_Cancel;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Restore_Confirm;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_RestoreMessage;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Backup_Date_Value;                            // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_RestoreMessage;                               // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Selection;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x288(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x500(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                SlotName_Backup;                                   // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UUI_SaveMenu_C*                        UI_SaveMenu;                                       // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveSlot;                                          // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RestoreInProgress;                                 // 0x794(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_SaveRestoreWindow_C*               UI_SaveRestoreWindow;                              // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             BackupDate;                                        // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SaveMenu_Restore_C* GetDefaultObj();

	void Reset();
	void SetRestoreInProgress();
	class FText GetText_RestoreMessage(class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetBackupDate(class FText CallFunc_GetDateTimeText_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess);
	void ResetButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavSetButton(int32 Index_Current, bool SkipSound, bool Local_SkipSound, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
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
	void Construct();
	void ExecuteUbergraph_UI_SaveMenu_Restore(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget);
};

}


