#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x3E8 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C
class UWid_Inventory_QuickMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ShowInifnite;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideInstant;                                       // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Showup;                                            // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                ConsoleDPad;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnDown;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnDownDown;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnLeft;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnLeftLeft;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnRight;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnRightRight;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnUp;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                PCBtnUpUp;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotDown;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotDownDown;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotLeft;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotLeftLeft;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotRight;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotRightRight;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotUp;                                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_Entry_C*      SlotUpUp;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CurrentFocusedItem;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Main_C*                 Parent;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemUID;                                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       InvEntry;                                          // 0x350(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Enabled;                                           // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LastInputWasFromGamepad;                           // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_QuickMenu_Entry_C*      SelectedSlot;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelectedSlotUpUp;                                  // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SelectedSlotDownDown;                              // 0x391(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SelectedSlotLeftLeft;                              // 0x392(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SelectedSlotRightRight;                            // 0x393(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstMove;                                         // 0x394(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInfinitelyVisible;                               // 0x395(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class ACGMovementState>> DisabledWhileInMovementState;                      // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsOnScreen;                                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShouldBeAlwaysVisible;                             // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldBeHidden;                                    // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_140B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InventoryAssignmentBegan;                          // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWid_Inventory_QuickMenu_Entry_C*> ScrollSelectionOrder;                              // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        ScrollCurrentIndex;                                // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EQuickMenuSlot>            ScrollSlotOrder;                                   // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_Inventory_QuickMenu_C* GetDefaultObj();

	void AnimatedShow(float StartTime, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	bool IsQuickUseScrollEnabled(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetQuickUseScrollEnabled_ReturnValue);
	void Global_Visibility_Changed(bool PreviousAlwaysVisible, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsDisabledDueToMovementState(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, TSoftClassPtr<class ACGMovementState> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void InstantForceHide(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter);
	void StopAllAnims();
	void HideInfinite(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ShowInfinite(float StartTime);
	void AnimatedHide(bool CallFunc_BooleanOR_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Update_buttons();
	void Fire_2(bool CallFunc_BooleanOR_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Fire_1(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void SelectEntry(bool New_Selected, class UWid_Inventory_QuickMenu_Entry_C* Target, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Fire_0(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void UpdateButtons(bool UpdateOnlyVisibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UWid_ButtonIndicator_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWid_ButtonIndicator_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Set(class FName ItemId, enum class EQuickMenuSlot Slot, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_Set_ReturnValue);
	void SetFocusedItem(class FName ItemId, class FName CurrentFocusedItemUID, const struct FInventoryEntry& InvEntry);
	void Select(bool Select, bool Gamepad);
	void Update(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName CallFunc_Get_ReturnValue, class FName CallFunc_Get_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FName CallFunc_Get_ReturnValue_2, class FName CallFunc_Get_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class FName CallFunc_Get_ReturnValue_4, class FName CallFunc_Get_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class FName CallFunc_Get_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class FName CallFunc_Get_ReturnValue_7);
	void Disable();
	void Enable();
	void Right();
	void Down();
	void Left();
	void Up();
	void DPadUp();
	void DPadDown();
	void DPadLeft();
	void DPadRight();
	void FaceUp();
	void FaceLeft();
	void L2();
	void R2();
	void RightStick();
	void SelectItem(const struct FVector2D& Idx);
	void ReleaseButton();
	void Assign();
	void Back();
	void FaceUpReleased();
	void Construct();
	void Start();
	void End();
	void FaceRight();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void ShowWidget();
	void HideWidget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void ResetAll(enum class EQuickMenuSlot Current);
	void QUse1();
	void QUse2();
	void QUse3();
	void QUse4();
	void QInputAssign();
	void CustomEvent_0(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState);
	void RemoveDPADSelectionIfNotVisible();
	void BindVisibilityContainerCallback();
	void UnbindVisibilityContainerCallback();
	void Destruct();
	void QInputEnd();
	void StartHideDelay();
	void StopHideDelay();
	void SetQuickMenuNotActive();
	void FaceDown();
	void QEnableScroll();
	void QuickUseScrollDelayFinish();
	void InitScrollOrder();
	void SetScrollToDisabled();
	void QScrollUp();
	void QScrollDown();
	void ScrollToNext(bool Forward);
	void QAcceptScroll();
	void QDeclineScroll();
	void ForceFinishScroll();
	void QDisableScroll();
	void ExecuteUbergraph_wid_Inventory_QuickMenu(int32 EntryPoint, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_3, int32 Temp_int_Variable_2, bool CallFunc_NotEqual_NameName_ReturnValue_4, bool CallFunc_NotEqual_NameName_ReturnValue_5, bool Temp_bool_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class FName K2Node_Select_Default, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_NameName_ReturnValue_6, const struct FVector2D& K2Node_Event_Idx, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class UWid_Inventory_QuickMenu_Entry_C*>& K2Node_MakeArray_Array, class UWid_Inventory_QuickMenu_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_3, class FName K2Node_Select_Default_3, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool K2Node_MultiGate_1_FirstRun, bool K2Node_MultiGate_2_FirstRun, enum class EQuickMenuSlot K2Node_CustomEvent_Current, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Use_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName K2Node_Select_Default_5, bool CallFunc_IsDisabledDueToMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, bool CallFunc_IsDisabledDueToMovementState_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsDisabledDueToMovementState_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_6, bool CallFunc_NotEqual_NameName_ReturnValue_7, bool Temp_bool_Variable_7, class FName K2Node_Select_Default_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue_8, bool Temp_bool_Variable_8, class FName K2Node_Select_Default_7, bool CallFunc_BooleanOR_ReturnValue_4, int32 Temp_int_Variable_3, class FName K2Node_Select_Default_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 Temp_int_Variable_4, bool Temp_bool_Variable_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 K2Node_Select_Default_9, bool K2Node_MultiGate_3_FirstRun, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, TArray<class UWid_Inventory_QuickMenu_Entry_C*>& K2Node_MakeArray_Array_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool K2Node_CustomEvent_Forward, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class UWid_Inventory_QuickMenu_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_5, enum class EQuickMenuSlot CallFunc_Array_Get_Item_2, bool CallFunc_Use_ReturnValue_1, TArray<enum class EQuickMenuSlot>& K2Node_MakeArray_Array_2, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_3, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_1, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_3, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_4, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_5, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_6, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_7, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_8, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_9);
	void InventoryAssignmentBegan__DelegateSignature();
	void GoBack__DelegateSignature();
};

}


