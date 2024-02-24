#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13C (0x36C - 0x230)
// WidgetBlueprintGeneratedClass UI_FoundlingMenu.UI_FoundlingMenu_C
class UUI_FoundlingMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAbstractShellStats_C*                 AbstractShellStats_Durability;                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbstractShellStats_C*                 AbstractShellStats_Resolve;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbstractShellStats_C*                 AbstractShellStats_Stamina;                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SecondaryTabs;                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SortingLine;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_FoundlingTagline;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Shades;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Shades;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Shades;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsContainer;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_FoundlingName;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Description;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Shades;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate_Shades;               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Select;                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Left;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Right;                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShellDetail_Entry_C*               UI_ShellShade_Entry_NoShade;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShellDetail_Entry_C*               UI_ShellShade_Entry_Shade_1;                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShellDetail_Entry_C*               UI_ShellShade_Entry_Shade_2;                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Description;                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SecondaryTabs;                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Shades;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_FoundlingMenu;                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsClosing;                                         // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A9E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexTab_Current;                                  // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShellDyes                     Dyes;                                              // 0x330(0x6)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexDye_Current;                                  // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquipmentMenuPawn_Foundling_C*     Pawn;                                              // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IndexDye_Temp;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ShellsDyes_LockState          DyesLockState;                                     // 0x34C(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NormalizedMousePos;                                // 0x364(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_FoundlingMenu_C* GetDefaultObj();

	void BindInputs();
	void OpenDyesTab(int32 Index);
	void OpenDescriptionTab(int32 Index);
	void HandleParallax(const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1);
	void SetDyesButtonsRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavTabUnhover(class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavSoundHover();
	void NavTabHover(int32 Index, class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void NavConfirm(bool K2Node_SwitchInteger_CmpSuccess);
	void UpdateCharacterDye(class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ConfirmNewDye(bool CustomWidget, class UUI_ShellDetail_Entry_C* Widget, class UUI_ShellDetail_Entry_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, const struct FStruct_ShellDyes& K2Node_SetFieldsInStruct_StructOut, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1);
	void NavConfirmListen(FDelegateProperty_ Event);
	enum class ESlateVisibility Get_UI_Prompt_Visibility_Dyes(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnClose();
	void UpdateDyesLockState(const TArray<bool>& Local_LockState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, TArray<bool>& K2Node_MakeArray_Array, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState);
	void NavDown(bool K2Node_SwitchInteger_CmpSuccess);
	void NavUp(bool K2Node_SwitchInteger_CmpSuccess);
	void NavDownListen(FDelegateProperty_ Event);
	void NavUpListen(FDelegateProperty_ Event);
	int32 GetDyeIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void SetPawnRef(class ABP_EquipmentMenuPawn_C* Pawn, class ABP_EquipmentMenuPawn_Foundling_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling, bool K2Node_DynamicCast_bSuccess);
	void GetDyesButtons(TArray<class UUI_ShellDetail_Entry_C*>* Array, TArray<class UUI_ShellDetail_Entry_C*>& K2Node_MakeArray_Array);
	void NavSelectDye(bool CustomIndex, bool AutoSelectCurrentDye, bool IsHovering, bool SkipSound, bool UseWidget, class UUI_ShellDetail_Entry_C* Widget, int32 Delta, int32 Index, int32 Local_IndexSelected, int32 Local_Delta, class UUI_ShellDetail_Entry_C* Local_Widget, bool Local_UseWidget, bool Local_SkipSound, bool Local_IsHovering, bool Local_AutoSelect, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetDyeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_2, int32 CallFunc_Array_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_3, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes);
	void UI_SoundTabSwitch(bool SkipSound);
	void GetTabButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void UpdateTab(int32 Index, bool SkipSound, bool Local_SkipSound, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectTab(bool K2Node_SwitchInteger_CmpSuccess);
	void CloseMenu();
	void SetGameplayPCRef(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void NavBackListen(FDelegateProperty_ Event);
	void NavTabNextListen(FDelegateProperty_ Event);
	void NavTabPreviousListen(FDelegateProperty_ Event);
	void SetFoundlingStats();
	void PlayFadeInAnim(FDelegateProperty_ AnimFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void NavTabNext_ListenEvent();
	void NavTabNext_Set();
	void OnAnimFinished();
	void NavBack_Bind();
	void NavBack_Set();
	void NavTabPrevious_Set();
	void NavTabPrevious_ListenEvent();
	void NavConfirm_Set();
	void Destruct();
	void NavConfirm_Bind();
	void NavDown_Set();
	void NavDown_Bind();
	void NavUp_Set();
	void BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void OnDyeEntryHovered(class UUI_ShellDetail_Entry_C* Widget);
	void OnDyeEntryClicked(class UUI_ShellDetail_Entry_C* Widget);
	void NavUp_Bind();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnOpenEvent(class ABP_EquipmentMenuPawn_C* Pawn);
	void Construct();
	void BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void ExecuteUbergraph_UI_FoundlingMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, class UUI_ShellDetail_Entry_C* K2Node_CustomEvent_Widget_1, class UUI_ShellDetail_Entry_C* K2Node_CustomEvent_Widget, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABP_EquipmentMenuPawn_C* K2Node_CustomEvent_Pawn, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton);
};

}


