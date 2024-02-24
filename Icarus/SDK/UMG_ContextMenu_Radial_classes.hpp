#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x330 - 0x2A8)
// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C
class UUMG_ContextMenu_Radial_C : public UUMG_ContextMenu_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackgroundFade;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ContentText;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ContextImage;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               InteractionFrame;                                  // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RadialMenu;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TitleText;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ContextMenu_Radial_Item_C*        HighlightedSegment;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SegmentHighlightedChanged;                         // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumItems;                                          // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DefaultSegmentWidgetClass;                         // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_ContextMenu_Radial_Item_C*> Items;                                             // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        ControllerDistanceMultiplier;                      // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ContextMenu_Radial_Item_C*        LastHighlightedSegment;                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ContextMenu_Radial_C* GetDefaultObj();

	void UpdateHighlight(class UUMG_ContextMenu_Radial_Item_C* NewHighlight, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTotalAngleAndDistance_Angle, float CallFunc_GetTotalAngleAndDistance_Distance, int32 Temp_int_Loop_Counter_Variable, class UUMG_ContextMenu_Radial_Item_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ShouldHighlight_ShouldHighlight, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetAngleAndDistance_Controller(float* Angle, float* Distance, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_DegAtan2_ReturnValue, float CallFunc_VSize2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue);
	void GetTotalAngleAndDistance(float* Angle, float* Distance, bool CallFunc_IsUsingControllerInput_ReturnValue, float CallFunc_GetDistanceFromCentre_Mouse_InteractionLength, float CallFunc_GetAngleAndDistance_Controller_Angle, float CallFunc_GetAngleAndDistance_Controller_Distance, float CallFunc_GetAngle_Mouse_Angle);
	void GetDistanceFromCentre_Mouse(float* InteractionLength, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FGeometry& CallFunc_GetViewportWidgetGeometry_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_GetSize_Size, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, float CallFunc_VSize2D_ReturnValue);
	void GetAngle_Mouse(float* Angle, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_GetSize_Size, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void CreateItem(int32 Index, const struct FContextMenuItemData& ContextMenuItem, class UUMG_ContextMenu_Radial_Item_C* NewSegment, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_ContextMenu_Radial_Item_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Radial_Menu_Select(bool CallFunc_IsValid_ReturnValue);
	void SegmentHighlightedHandler(class UUMG_ContextMenu_Radial_Item_C* NewHighlightedSegment, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ListenForActions();
	void StopListeningForActions();
	void OnClickedInput();
	void ShowMenu(const struct FVector2D& ScreenPosition, class FText& MenuName, TSoftObjectPtr<class UTexture2D>& MenuIcon);
	void AddItems(TArray<struct FContextMenuItemData>& ContextMenuItems);
	void CloseMenu();
	void OnMenuOpened();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_ContextMenu_Radial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& K2Node_Event_ScreenPosition, class FText K2Node_Event_MenuName, TSoftObjectPtr<class UTexture2D> K2Node_Event_MenuIcon, TArray<struct FContextMenuItemData>& K2Node_Event_ContextMenuItems, int32 CallFunc_Array_Length_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, bool CallFunc_IsVisible_ReturnValue);
	void SegmentHighlightedChanged__DelegateSignature(class UUMG_ContextMenu_Radial_Item_C* Segment);
};

}


