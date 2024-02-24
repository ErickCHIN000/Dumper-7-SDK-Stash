#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A0 (0x5D0 - 0x230)
// WidgetBlueprintGeneratedClass UI_Rune_Slot.UI_Rune_Slot_C
class UUI_Rune_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Rune;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Black;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_CenterIcon;                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Background;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_BackgroundTile;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Border;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Border_Fill;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Icon;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Tier;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_TierGlow;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selection;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Ability;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Tier;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ToolTip;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Rune_Slot;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Slot_Type               Slot_Type;                                         // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Slot_SubType            Slot_SubType;                                      // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Category_Randomizer     Slot_Category;                                     // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1712[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rune_Angle;                                        // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Border_Angle;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ToolTip_X;                                         // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RuneSlots_IDs                Slot_ID;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_171D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URuneInventoryComponent_C*             RuneInventory;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          Rune;                                              // 0x2D8(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HasRune;                                           // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CurrentShell;                                      // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1725[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Opacity_Target;                                    // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ToolTipIndex;                                      // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             Border_Loc;                                        // 0x3B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x3BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Rune_Texture;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DesignTime;                                        // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Design_Rune_Texture;                               // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Design_Rune_Tier;                                  // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1755[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Design_Icon_Scale;                                 // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Design_CenterIcon_BG_Scale;                        // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Design_CenterIcon_BGBlack_Scale;                   // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Design_Tile_Scale;                                 // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Design_Tile_Visibility;                            // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Design_FillBorder_Visibility;                      // 0x3ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1769[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Design_FillBorder_Scale;                           // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Design_HasNoTier;                                  // 0x3F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1775[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds;                                  // 0x3F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_Rune                          Misc_Default;                                      // 0x448(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         UnavailableSlot;                                   // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_177D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FStruct_Rune>       SlotStatus;                                        // 0x520(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                      ToolTip_Transform;                                 // 0x570(0x1C)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1782[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugButtonVis;                                    // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                DebugToolTip;                                      // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ToolTipAdded;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Rune_Skilltree_ToolTip_C*          UI_ToolTip_Rune;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DebugWidgetVis;                                    // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Rune_Slot_C* GetDefaultObj();

	void HandleDarkFormSlot(bool CallFunc_HasSpecialEffectRune__ReturnValue, bool CallFunc_HasImprovementRune__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleUnavailableSlot(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleMiscRune(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void HandleTierColorAndVisibility(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void HandleFillBorder(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HandleBackgroundTile(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HandleTier();
	void Rune_SetBallistazookaTexture(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Rune_SetTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Rune_SetWeaponTexture(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EComboTypes Temp_byte_Variable_2, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UTexture* K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Rune_SetCharacterTexture(class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EArmorTypes Temp_byte_Variable, class UTexture* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Rune_SetDetails(bool IsMiscRune, const struct FStruct_Rune& Rune, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ToolTip_Rune(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue);
	void ToolTip_Simple(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetSimpleToolTipText_ReturnValue);
	void ToolTip_SelectedShell(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue);
	void Rune_SetCategoryTexture(class UTexture2D* CallFunc_GetCategoryRuneTexture_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	class FText GetSimpleToolTipText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class Enum_Rune_Slot_Type Temp_byte_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText CallFunc_GetWeaponNames_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void UpdateRuneSlot(class URuneInventoryComponent_C* RuneInventory);
	void BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetRuneSlot_InDesign();
	void UpdateMiscRune(const struct FStruct_Rune& Rune);
	void OnSlotSetUp();
	void HandleSlotForDarkForm();
	void UpdateRuneSlot_Manual(TMap<class FName, struct FStruct_Rune> SlotStatus);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Rune_Slot(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class URuneInventoryComponent_C* K2Node_CustomEvent_RuneInventory, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, const struct FStruct_Rune& K2Node_CustomEvent_Rune, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TMap<class FName, struct FStruct_Rune> K2Node_CustomEvent_SlotStatus, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1);
};

}


