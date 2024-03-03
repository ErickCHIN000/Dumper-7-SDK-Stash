#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass WB_PlayerCamp.WB_PlayerCamp_C
class UWB_PlayerCamp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Alchemy;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Bed;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Breeding;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Cooking;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Craftsman;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Defences;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Exit;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_FollowerCamp;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Obelisk;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Stash;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Tent;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Walkway;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            CampItemsScroll;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_487;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SidePanel;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_ExitCamp;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASEQ_Master_PlayerCamp_C*              SEQ_Master_PlayerCamp;                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 Player;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PlayerCamp_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void SwitchFade();
	void Construct();
	void BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Tent_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Stash_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Bed_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Walkway_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Obelisk_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Alchemy_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_FollowerCamp_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Craftsman_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Cooking_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Defences_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_PlayerCamp_Button_Breeding_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature();
	void ExitCamp();
	void Display_Items(enum class E_CampItems Camp_Item);
	void Select_Item(const struct FS_CampUnlocks& Camp_Item);
	void ExecuteUbergraph_WB_PlayerCamp(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ASEQ_Master_PlayerCamp_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<struct FS_CampUnlocks>& CallFunc_Map_Values_Values, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FS_CampUnlocks& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_CampOption_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class E_CampItems K2Node_CustomEvent_Camp_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_CampUnlocks& K2Node_CustomEvent_Camp_Item, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


