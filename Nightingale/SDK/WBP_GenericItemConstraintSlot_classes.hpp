#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x410 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GenericItemConstraintSlot.WBP_GenericItemConstraintSlot_C
class UWBP_GenericItemConstraintSlot_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_ico_SlotType;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StackCounter;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SlotName;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SlottedAmountCount;                            // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             WBP_Common_Button_Base_C_0;                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ConstraintSatisfied_C*            WBP_Crafting_ConstraintSatisfied;                  // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x380(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x398(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x3B0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        RequiredQuantity;                                  // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSlotEnabled;                                     // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConstraintSatisfied;                             // 0x3DD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_17EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               ItemsMatchingConstraint;                           // 0x3E0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnItemListClosed;                                  // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSlotSelected;                                    // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_GenericItemList_C*                ContextMenu;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GenericItemConstraintSlot_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void UpdateSlotNameFormatting(int32 LengthThreshold, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateItemsMatchingConstraint(bool IsSlotSatisfied, TArray<struct FInventoryEntry>& NewEntries);
	void IsSelected(bool* IsSelected);
	class UWidget* GetDefaultFocusWidget();
	void OnWindowClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Initialize(bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue_1, float K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void Construct();
	void Destruct();
	void BndEvt__WBP_GenericItemConstraintSlot_WBP_Common_Button_Base_C_0_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_GenericItemConstraintSlot(int32 EntryPoint, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_GenericItemList_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnItemListClosed__DelegateSignature();
};

}


