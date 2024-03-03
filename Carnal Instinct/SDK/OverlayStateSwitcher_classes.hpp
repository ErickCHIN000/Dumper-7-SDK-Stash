#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x289 - 0x260)
// WidgetBlueprintGeneratedClass OverlayStateSwitcher.OverlayStateSwitcher_C
class UOverlayStateSwitcher_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          MovablePanel;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FOverlayStateButtonParams>     OverlayStateButtons;                               // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class EALS_OverlayState                 NewOverlayState;                                   // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOverlayStateSwitcher_C* GetDefaultObj();

	void CycleState(bool Up, const TArray<enum class EALS_OverlayState>& TempEnum, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, enum class EALS_OverlayState CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, enum class EALS_OverlayState CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void UpdateButtonFocus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FOverlayStateButtonParams& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CreateButtons(class UOverlayStateButton_C* Button, enum class EALS_OverlayState EnumValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FOverlayStateButtonParams& K2Node_MakeStruct_OverlayStateButtonParams, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UOverlayStateButton_C* CallFunc_Create_ReturnValue);
	void Construct();
	void SelectOverlayState();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_OverlayStateSwitcher(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_BPI_Get_3P_PivotTarget_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue);
};

}


