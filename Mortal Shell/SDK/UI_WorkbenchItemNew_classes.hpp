#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x458 - 0x230)
// WidgetBlueprintGeneratedClass UI_WorkbenchItemNew.UI_WorkbenchItemNew_C
class UUI_WorkbenchItemNew_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Upgrade_5;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Upgrade_4;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Upgrade_3;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Upgrade_2;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Upgrade_1;                                    // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Buy;                                          // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CantBuy;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MouseLeaveAnim;                                    // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MousePressedAnim;                                  // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Item;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BackgroundBlack;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Red;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Effect;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow_UpgradeUnlocked;                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStupidHoverDetectorWidget_C*          Image_HoverDetector;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt_ItemRequiredToUpgrade;               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt_ItemToUpgrade;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Upgrade_Unlocked_1;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Upgrade_Unlocked_2;                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Upgrade_Unlocked_3;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Upgrade_Unlocked_4;                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Upgrade_Unlocked_5;                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Upgrade_1;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Upgrade_2;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Upgrade_3;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Upgrade_4;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Upgrade_5;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_UpgradeFor;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Index_Debug;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EWorkbenchItemType                EUpgrade;                                          // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaterialForIcon;                                // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialIcon;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Image_ItemRequired;                                // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      ItemRequired_Transform;                            // 0x340(0x1C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_2296[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image_ItemToUpgrade;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      ItemToUpgrade_Transform;                           // 0x368(0x1C)(Edit, BlueprintVisible, NoDestructor)
	int32                                        MaxUpgradeLevel;                                   // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       WeaponToUpgrade;                                   // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWorkbenchUpgradeNames            UpgradeName;                                       // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWorkbenchUpgradeDescriptions     UpgradeDescription;                                // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCustomText;                                     // 0x38B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UpgradeName_Custom;                                // 0x390(0x18)(Edit, BlueprintVisible)
	enum class ESlateVisibility                  UpgradeForBox_Visibility;                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDHDataTableID                        RequiredItemID;                                    // 0x3AC(0x8)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_22BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_WorkbenchPanelNew_C*               UI_WorkbenchPanel;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDHDataTableID                        ItemToUpgradeID;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, NoDestructor)
	enum class Enum_Skins                        SkinType;                                          // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UpgradeID;                                         // 0x3CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUpgrade_;                                       // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UpgradeUnlockedOrMaxed;                            // 0x3D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCustomHeaderName;                               // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HeaderName_Custom;                                 // 0x3E8(0x18)(Edit, BlueprintVisible)
	class FText                                  HeaderName;                                        // 0x400(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  RequiredItemName;                                  // 0x418(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        UpgradeLevel;                                      // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      AnimPlayed;                                        // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  UpgradeDesc_Custom;                                // 0x440(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUI_WorkbenchItemNew_C* GetDefaultObj();

	void SetItemRequiredIcon(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void StopUpgradeCircleAnim(bool CallFunc_IsValid_ReturnValue);
	void PlayUpgradeCircleAnim(int32 Local_UpgradeNGLevel, int32 Local_UpgradeLevel, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_GetNamedPCInt_Value_1, bool K2Node_SwitchEnum_CmpSuccess, class UWidgetAnimation* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select_Default_1);
	void StopBuyAnim();
	void SetUpgradeImageDensity(float Density, float Radius, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void PlayBuyAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CantBuyAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UnHover(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void RemoveItemFromInventory(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_RemoveInventoryItem_Success);
	void UpgradeItem(int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupRequiredItemName(const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetupHeaderName(bool Temp_bool_Variable, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText K2Node_Select_Default);
	void ResetUpgrade();
	void SelectUpgrade(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateTarnishedSealSquares(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UImage*>& CallFunc_GetSquares_Array, int32 Temp_int_Loop_Counter_Variable, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UImage*>& CallFunc_GetSquares_Array_1, int32 CallFunc_GetNamedPCInt_Value, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CheckIfCanObtainUpgrade(bool CallFunc_HasRequiredItem_HasIt_);
	int32 GetQuenchingAcidMaxUpgrade(int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateQuenchingAcidSquares(int32 Local_UpgradeNGLevel, int32 Local_UpgradeLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UImage*>& CallFunc_GetSquares_Array, class UImage* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UImage*>& CallFunc_GetSquares_Array_1, int32 CallFunc_GetNamedPCInt_Value, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateState(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetQuenchingAcidMaxUpgrade_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool K2Node_SwitchEnum_CmpSuccess);
	void GetSquares(TArray<class UImage*>* Array, TArray<class UImage*>& K2Node_MakeArray_Array);
	void HasRequiredItem(bool* HasIt_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount);
	void GetUpgradeSquares(TArray<class UOverlay*>* Array, TArray<class UOverlay*>& K2Node_MakeArray_Array);
	void SetUpgradeLevels(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UOverlay*>& CallFunc_GetUpgradeSquares_Array, TArray<class UOverlay*>& CallFunc_GetUpgradeSquares_Array_1, class UOverlay* CallFunc_Array_Get_Item, class UOverlay* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Construct();
	void OnInitialized();
	void ItemUnlock();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Image_HoverDetector_K2Node_ComponentBoundEvent_0_Event_OnMouseEnter__DelegateSignature();
	void BndEvt__Image_HoverDetector_K2Node_ComponentBoundEvent_1_Event_OnMouseLeave__DelegateSignature();
	void ExecuteUbergraph_UI_WorkbenchItemNew(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime);
};

}


