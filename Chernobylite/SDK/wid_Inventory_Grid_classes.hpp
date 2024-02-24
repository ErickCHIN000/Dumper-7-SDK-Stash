#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x340 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_Grid.wid_Inventory_Grid_C
class UWid_Inventory_Grid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          MainCanvas;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Tiles;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             TileSize;                                          // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset;                                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CustomPadding;                                     // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CurrentSelection;                                  // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GrabItem;                                          // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryEntry>               Inventory;                                         // 0x2C0(0x10)(Edit, BlueprintVisible)
	class UWid_Inventory_Grid_Main_C*            Parent;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SelectPressedTime;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SelectedIndex;                                     // 0x2DC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedItemId;                                    // 0x2E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3449[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_InventoryMenu_C*                  RMBMenu;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuickMenuOpen;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AssigningToQuickUse;                               // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ItemGrabActive;                                    // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_344C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AbsoluteIdx;                                       // 0x2FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstColumnOffset;                                 // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_StackSplitter_C*        SplitterWidget;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SplitterWidgetOpen;                                // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GrabSplitItem;                                     // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        FaceUpDuration;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FaceUpDown;                                        // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SplitterDuration;                                  // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           LastItemSelection;                                 // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Inventory_Grid_C* GetDefaultObj();

	void UpdateContextMenuPosition(class UCanvasPanelSlot* CanvasPanelSlot, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_GetViewportScale_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1);
	void RemoveLastItemIfNull(bool UpdateBtn, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetCheckItem(class UWid_Inventory_Grid_Entry_C** Item, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UWid_Inventory_Grid_Entry_C* K2Node_Select_Default);
	void CanSplitItem(class UWid_Inventory_Grid_Entry_C* CurrentEntry, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_2);
	void OpenSplitMenu(class UWid_Inventory_Grid_Entry_C* CurrentEntry, class UCanvasPanelSlot* SplitterSlot, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class UWid_Inventory_StackSplitter_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_CanSplitItem_Result, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1);
	void FilterItems(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_Inventory_Grid_Entry_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetTileSize(struct FVector2D* TileSize);
	void GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection);
	void Clear(int32 X, int32 Y, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FInventoryEntry& K2Node_MakeStruct_InventoryEntry, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Internal_InsertItems(const struct FVector2D& ExcludeIndex, bool IsInStorageInventory, bool IsInStorage, const struct FInventoryEntry& LocalEntry, int32 LocalX, int32 LocalY, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, int32 Temp_int_Variable_1, bool CallFunc_RemoveChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void GetAt(const struct FVector2D& Index, class UWid_Inventory_Grid_Entry_C** OutputPin, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_Inventory_Grid_Entry_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void SelectAt(const struct FVector2D& Index, bool FromKeyboard, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void GetTypeByIndex(const struct FVector2D& Index, enum class Enum_Inventory_Grid_Entry* NewParam, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void CreateEntry(const struct FVector2D& Size, const struct FInventoryEntry& Entry, bool IsInStorageInventory, bool IsInStorage, class UTexture2D* Temp_object_Variable, enum class Enum_Inventory_Grid_Entry CallFunc_GetTypeByIndex_NewParam, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, class UTexture2D* Temp_object_Variable_2, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable_2, class UWid_Inventory_Grid_Entry_C* CallFunc_Create_ReturnValue, class UTexture2D* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Update(const struct FVector2D& GridSize, const struct FVector2D& ExcludedIndex, bool IsInStorage, bool IsInStorageInventory, bool IgnoreSelection, const struct FVector2D& NewLocalVar_0, int32 X, int32 Y, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue);
	void Up();
	void Right();
	void Down();
	void Left();
	void FaceRight();
	void FaceUp();
	void FaceDown();
	void Construct();
	void FilterChanged(enum class EItemCategory NewCategory);
	void L2();
	void R2();
	void End();
	void Start();
	void RightStick();
	void SelectItem(const struct FVector2D& Idx);
	void ReleaseButton();
	void RemoveMenu();
	void FaceLeft();
	void OnStckSplitted(float NewAmount, class FName ItemId, const struct FVector2D& Index, float OldAmount);
	void RemoveSplitterWidget();
	void FaceUpReleased();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GrabItemFromButton();
	void SplitItemFromButton();
	void ExecuteUbergraph_wid_Inventory_Grid(int32 EntryPoint, float Temp_float_Variable, enum class EDirections Temp_byte_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EDirections Temp_byte_Variable_1, enum class EDirections Temp_byte_Variable_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, enum class EDirections Temp_byte_Variable_3, enum class EDirections Temp_byte_Variable_4, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class EDirections Temp_byte_Variable_5, float Temp_float_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, enum class EDirections Temp_byte_Variable_6, float Temp_float_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class EDirections Temp_byte_Variable_7, const struct FVector2D& CallFunc_GetSize_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, float CallFunc_Subtract_FloatFloat_ReturnValue_1, enum class EDirections Temp_byte_Variable_8, float CallFunc_Add_FloatFloat_ReturnValue_1, enum class EDirections Temp_byte_Variable_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, const struct FVector2D& CallFunc_GetSize_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_GetSize_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, bool Temp_bool_Variable_8, const struct FVector2D& CallFunc_GetSize_ReturnValue_4, float Temp_float_Variable_4, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_Subtract_FloatFloat_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FVector2D& CallFunc_GetSize_ReturnValue_5, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, enum class EDirections Temp_byte_Variable_10, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_9, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float Temp_float_Variable_5, bool CallFunc_BooleanAND_ReturnValue_4, enum class EDirections Temp_byte_Variable_11, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, float Temp_float_Variable_6, bool CallFunc_BooleanAND_ReturnValue_7, float Temp_float_Variable_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X_10, float CallFunc_BreakVector2D_Y_10, float K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_10, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_11, float K2Node_Select_Default_3, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Percent_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, float CallFunc_BreakVector2D_X_11, float CallFunc_BreakVector2D_Y_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_7, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_1, float CallFunc_BreakVector2D_X_12, float CallFunc_BreakVector2D_Y_12, float CallFunc_Percent_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Select_Default_4, float CallFunc_Percent_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, float K2Node_Select_Default_5, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_6, float CallFunc_BreakVector2D_X_13, float CallFunc_BreakVector2D_Y_13, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_14, float CallFunc_BreakVector2D_Y_14, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_BreakVector2D_X_15, float CallFunc_BreakVector2D_Y_15, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, float CallFunc_Percent_FloatFloat_ReturnValue_4, float CallFunc_Percent_FloatFloat_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_7, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_2, float CallFunc_BreakVector2D_X_16, float CallFunc_BreakVector2D_Y_16, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4, float K2Node_Select_Default_7, bool CallFunc_BooleanAND_ReturnValue_16, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5, float K2Node_Select_Default_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_Percent_FloatFloat_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_17, float CallFunc_Add_FloatFloat_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_9, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_3, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_3, float CallFunc_BreakVector2D_X_17, float CallFunc_BreakVector2D_Y_17, bool CallFunc_Not_PreBool_ReturnValue_3, float CallFunc_Percent_FloatFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_7, float K2Node_Select_Default_9, bool CallFunc_BooleanAND_ReturnValue_18, float CallFunc_Percent_FloatFloat_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_8, float K2Node_Select_Default_10, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_10, enum class EItemCategory K2Node_CustomEvent_NewCategory, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, enum class EDirections Temp_byte_Variable_12, const struct FVector2D& CallFunc_GetSize_ReturnValue_6, float K2Node_Select_Default_11, float CallFunc_BreakVector2D_X_18, float CallFunc_BreakVector2D_Y_18, bool CallFunc_Less_FloatFloat_ReturnValue_3, float CallFunc_Percent_FloatFloat_ReturnValue_9, float K2Node_Select_Default_12, float K2Node_Select_Default_13, float CallFunc_Percent_FloatFloat_ReturnValue_10, float CallFunc_Percent_FloatFloat_ReturnValue_11, float K2Node_Select_Default_14, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_11, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_12, const struct FVector2D& K2Node_Select_Default_15, const struct FVector2D& K2Node_Event_Idx, enum class EDirections Temp_byte_Variable_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_InventoryMenu_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, float K2Node_Select_Default_16, float K2Node_Select_Default_17, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_19, bool CallFunc_BooleanAND_ReturnValue_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_21, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EDirections Temp_byte_Variable_14, float K2Node_Select_Default_18, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, enum class EDirections Temp_byte_Variable_15, bool CallFunc_BooleanOR_ReturnValue_12, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float K2Node_Select_Default_19, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_13, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_Conv_Vector2dToString_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, const struct FVector2D& CallFunc_GetSize_ReturnValue_7, float CallFunc_BreakVector2D_X_19, float CallFunc_BreakVector2D_Y_19, float CallFunc_Subtract_FloatFloat_ReturnValue_6, float CallFunc_Subtract_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_11, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_6, float K2Node_Select_Default_20, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_Less_FloatFloat_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_23, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_7, float K2Node_Select_Default_21, bool CallFunc_BooleanAND_ReturnValue_24, float CallFunc_Percent_FloatFloat_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_16, float K2Node_Select_Default_22, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_Less_FloatFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_18, float K2Node_Select_Default_23, float CallFunc_Percent_FloatFloat_ReturnValue_13, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_14, float K2Node_CustomEvent_NewAmount, class FName K2Node_CustomEvent_ItemID, const struct FVector2D& K2Node_CustomEvent_Index, float K2Node_CustomEvent_OldAmount, const struct FVector2D& K2Node_Select_Default_24, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_4, bool Temp_bool_Variable_10, bool CallFunc_IsValid_ReturnValue_9, float K2Node_Select_Default_25, float CallFunc_Percent_FloatFloat_ReturnValue_14, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_8, bool Temp_bool_Variable_11, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_25, float K2Node_Select_Default_26, float CallFunc_Percent_FloatFloat_ReturnValue_15, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_15, const struct FVector2D& K2Node_Select_Default_27, bool CallFunc_CanSplitItem_Result, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_26, float CallFunc_Add_FloatFloat_ReturnValue_12, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_9, float CallFunc_Divide_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin_5, bool CallFunc_EqualEqual_NameName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item_1, bool CallFunc_CanSplitItem_Result_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item_2, bool CallFunc_CanBeGrabbed_Result, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item_4, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item_5, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_27);
	void GrabSplitItem__DelegateSignature(const struct FVector2D& Index, class FName ItemId, float Amount);
	void NewSelection__DelegateSignature(const struct FVector2D& Index, bool FromKeyboard);
	void GrabItem__DelegateSignature(const struct FVector2D& Index, class FName ItemId);
	void GoBack__DelegateSignature();
};

}

