#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionIndicator_Main.wid_CompanionIndicator_Main_C
class UWid_CompanionIndicator_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          Canvas;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWid_CompanionIndicator_Entry_C*> Indicators;                                        // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWid_CompanionIndicator_Main_C* GetDefaultObj();

	void GetFirstIndicatorForActor(class AActor* Actor, class UWid_CompanionIndicator_Entry_C** IndicatorHandle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWid_CompanionIndicator_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RemoveAllIndicatorsForActor(class AActor* Actor, const TArray<class UWid_CompanionIndicator_Entry_C*>& Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_CompanionIndicator_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RemoveAllIndicators(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_CompanionIndicator_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateIndicatorPosition(class UWid_CompanionIndicator_Entry_C* Indicator, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetIndicatorLocation_Location, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void RemoveIndicatorsOfType(enum class ECompanionIndicatorType Type, const TArray<class UWid_CompanionIndicator_Entry_C*>& Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_CompanionIndicator_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RemoveIndicator(class UWid_CompanionIndicator_Entry_C* Indicator, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddIndicator(class AActor* Actor, enum class ECompanionIndicatorType Type, class UWid_CompanionIndicator_Entry_C** IndicatorHandle, class UWid_CompanionIndicator_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Destroy();
	void ExecuteUbergraph_wid_CompanionIndicator_Main(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWid_CompanionIndicator_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1);
};

}


