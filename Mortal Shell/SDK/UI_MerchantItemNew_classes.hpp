#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x235 (0x465 - 0x230)
// WidgetBlueprintGeneratedClass UI_MerchantItemNew.UI_MerchantItemNew_C
class UUI_MerchantItemNew_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_CantBuy;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MouseLeaveAnim;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MousePressedAnim;                                  // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Arrow_Left;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Arrow_Right;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Item;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Cost;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BackgroundBlack;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Red;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CircularBar;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CostIcon;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Effect;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStupidHoverDetectorWidget_C*          Image_HoverDetector;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_BulkBuy;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BulkBuy_Amount;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Cost;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Cost_Value;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Held_Value;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Index_Debug;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_OutOfStock;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Stock_Value;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanBuy;                                            // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Item_Amount;                                       // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Index;                                        // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Cost;                                         // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Held;                                         // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2574[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x308(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2577[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_CircularBar;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_BulkBuySelectedAmount;                        // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BulkBuyEnabled;                                    // 0x44C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MerchantPanelNew_C*                UI_MerchantPanel;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AUsable_Branching_NPC_C*               Trader;                                            // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ItemIndexOnTrader;                                 // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GlimpseBased;                                      // 0x464(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_MerchantItemNew_C* GetDefaultObj();

	void PlayCantBuyAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CheckCanBuy(bool* Return, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetPlayerCurrency_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void DisableBulkBuyMode();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_2);
	void SetCostType();
	void SetAmountAndCostDetails(class FText CallFunc_DisplayTextFromAmount_ReturnValue, int32 CallFunc_DisplayTextFromAmount_Amount, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void NavSoundHover();
	class FText GetHeldAmount(int32 CallFunc_GetHeldCount_PlayerAmount, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	enum class ESlateVisibility Get_Image_BG_Red_Visibility(bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetPlayerCurrency_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetItemIndexOnTrader(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, int32 CallFunc_Array_Length_ReturnValue, const struct FMerchantItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	struct FSlateColor Get_TextTotalCostColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetPlayerCurrency_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class FText Get_TextTotalCost(int32 CallFunc_Multiply_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetTextBulkBuyAmount(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void RemoveBulkBuy(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void AddBulkBuy(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void EnableBulkBuyMode();
	void UnHover(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void GetHeldCount(class FName ID, int32* PlayerAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SelectItem(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ResetItem();
	void SetupItem(const struct FInventoryItem& InventoryItem, int32 Item_Index, int32 Item_Cost, int32 Item_Amount, bool CanBuy, class FText CallFunc_GetHeldAmount_ReturnValue);
	class FText DisplayTextFromAmount(int32 Value, int32* Amount, bool Temp_bool_Variable, int32 CallFunc_Clamp_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	bool DecreaseAmount(class FText CallFunc_DisplayTextFromAmount_ReturnValue, int32 CallFunc_DisplayTextFromAmount_Amount, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void BndEvt__Image_HoverDetector_K2Node_ComponentBoundEvent_0_Event_OnMouseEnter__DelegateSignature();
	void BndEvt__Image_HoverDetector_K2Node_ComponentBoundEvent_1_Event_OnMouseLeave__DelegateSignature();
	void BndEvt__Button_Arrow_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_Arrow_Right_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_Arrow_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_Arrow_Left_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_MerchantItemNew(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float Temp_float_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_MapRangeClamped_ReturnValue);
};

}


