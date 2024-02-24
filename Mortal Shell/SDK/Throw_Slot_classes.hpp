#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x5F0 - 0x230)
// WidgetBlueprintGeneratedClass Throw_Slot.Throw_Slot_C
class UThrow_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_NoInstance;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CantUse;                                      // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG_NoUse;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BossGlimpse;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Item_Art;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Index;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Quantity;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ThrowSlot;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Amount;                                       // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Index;                                        // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Item_Name;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IconImage;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemInformation                      ItemInformation;                                   // 0x298(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FItemInformation                      PrevItemInfo;                                      // 0x2C8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FItemInformation                      NextItemInfo;                                      // 0x2F8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         WasUpdated;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UITimeOnScreen;                                    // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade;                                              // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  QuickSlotVisibility;                               // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x338(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2B66[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CurrentPixelPosition;                              // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBaseRef;                                       // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItem                        Item_Ballistazooka_Ammo;                           // 0x488(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2B79[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                QuickAccessSlots_Filtered;                         // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HasBallistazookaAmmo;                              // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Ballistazoooka_Ammo;                               // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x5D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UThrow_Slot_C* GetDefaultObj();

	void SetItemAsUnavailable(int32 Amount, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, float K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	void ItemUnavailable_PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void IsItemAvailable(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount);
	struct FLinearColor Get_Image_BossGlimpse_Color(const struct FLinearColor& Local_Color, bool K2Node_SwitchName_CmpSuccess);
	enum class ESlateVisibility Get_Image_BossGlimpse_Visibility(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool K2Node_SwitchName_CmpSuccess);
	void UpdateFilteredSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetQuickAccessItem_QuickAccessItem, bool CallFunc_GetQuickAccessItem_bValidItem, int32 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	bool IsBallistazookaUnequipped(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class ESlateVisibility Get_Overlay_Index_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void CantUse_PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateMainIcon(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void SetFade(struct FGeometry& Geometry, float DeltaSeconds, float Local_DeltaSeconds, const struct FGeometry& Local_MyGeometry, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2);
	class FText Get_SlotIndex(int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	enum class ESlateVisibility Get_RedBG_Visibility(enum class ESlateVisibility Local_Visibility, enum class Enum_InventoryItem_CanUse Local_InventoryCantUse, enum class Enum_InventoryItem_CanUse Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility K2Node_Select_Default, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue);
	enum class ESlateVisibility Get_TextAmount_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class FText Get_TextAmount(bool CallFunc_IsBallistazookaUnequipped_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	class FText Get_DamageText(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	enum class ESlateVisibility Get_WidgetVisibility();
	struct FSlateBrush Get_PrevItemIcon_Brush(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateBrush Get_NextItemIcon_Brush(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	class FText Get_ItemName(bool Temp_bool_Variable, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, class FText K2Node_Select_Default);
	struct FSlateBrush Get_ItemIcon(bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsBallistazookaUnequipped_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CantUseQuickItem_Set();
	void CantUseQuickitem_Bind();
	void OnInitialized();
	void Update_Set();
	void Update_Reset();
	void QuickItemUnavailable_Bind();
	void QuickItemUnavailable_Set();
	void ItemUpdated();
	void ExecuteUbergraph_Throw_Slot(int32 EntryPoint, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_CheckItemName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable);
};

}


