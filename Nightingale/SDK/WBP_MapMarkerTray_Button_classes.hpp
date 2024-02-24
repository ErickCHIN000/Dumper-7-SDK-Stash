#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x391 - 0x340)
// WidgetBlueprintGeneratedClass WBP_MapMarkerTray_Button.WBP_MapMarkerTray_Button_C
class UWBP_MapMarkerTray_Button_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_91;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_293;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MapMarker_Selected;                                // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   MarkerHandle;                                      // 0x380(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsUnique;                                          // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MapMarkerTray_Button_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Refresh(const struct FMapWaypointInfo& Row, enum class EMapMarkerType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, enum class EMapMarkerType Temp_byte_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, enum class EMapMarkerType Temp_byte_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, const struct FLinearColor& K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float K2Node_Select_Default_2, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetMarkerHandle(struct FDataTableRowHandle* MarkerHandle);
	void CheckVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, bool CallFunc_Is_Waypoint_Type_in_Use_IsInUse, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_MapMarkerTray_Button_Button_293_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_MapMarkerTray_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValidRowHandle_IsValid, bool CallFunc_BooleanAND_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue);
	void MapMarker_Selected__DelegateSignature(const struct FDataTableRowHandle& MarkerHandle);
};

}


