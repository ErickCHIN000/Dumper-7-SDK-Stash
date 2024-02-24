#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x3A1 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Structure_FuelTimer.WBP_Structure_FuelTimer_C
class UWBP_Structure_FuelTimer_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IMG_BurningBackground;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_BurningItem;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_fuel_empty;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_BurningItem;                               // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_BurningQuantity;                               // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_TimerChangeLabel;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_TimerLabel;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_FuelIcon;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                StructureActor;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFuelBeingConsumed;                               // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Structure_FuelTimer_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& ActiveItem);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& ActiveItem);
	void OnActiveItemUpdated(const struct FInventoryEntry& ActiveItem, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, class UWidget* K2Node_Select_Default);
	void UpdateTimeChange(bool EnableDisplay, bool IsIncreasingTime, const struct FInventoryEntry& InventoryEntry, int32 LTransferQuantity, const class FString& LBurnTime, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, int32 CallFunc_GetQuantityRemaining_ReturnValue, int32 CallFunc_Min_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 K2Node_Select_Default_1, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_CombustionFuel& CallFunc_TryGetItemDataCombustionFuel_OutData, enum class EGetResult CallFunc_TryGetItemDataCombustionFuel_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const class FString& CallFunc_GetHMSFormattedTime_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GetHMSFormattedTime_TotalSeconds_ImplicitCast);
	void OnFuelUpdated(TArray<struct FInventoryEntry>& AppliedFuelItems, bool CallFunc_Not_PreBool_ReturnValue);
	void OnFuelConsumptionUpdated(bool ActivelyConsumed, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateTimer(float LTotalSeconds, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_GetRemainingTimeLeft_self_CastInput, double CallFunc_GetRemainingTimeLeft_ReturnValue, const class FString& CallFunc_GetHMSFormattedTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_GetHMSFormattedTime_TotalSeconds_ImplicitCast);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue);
	void Initialize(class ANWXPlayerController* PlayerController, int32 LOne, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_GetActiveFuelItem_self_CastInput, const struct FInventoryEntry& CallFunc_GetActiveFuelItem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsDrainingFuel_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent);
	void Destruct();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_Structure_FuelTimer(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


