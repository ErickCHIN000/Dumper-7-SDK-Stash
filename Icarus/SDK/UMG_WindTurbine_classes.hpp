#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B (0x308 - 0x2AD)
// WidgetBlueprintGeneratedClass UMG_WindTurbine.UMG_WindTurbine_C
class UUMG_WindTurbine_C : public UW_ProjectionWidget_C
{
public:
	uint8                                        Pad_5215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            bLocked;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ModifierOverlay;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pointer;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Shelter;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Status;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AIcarusActor*                          Cached_Current_Item;                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_DeployableModifiersList_C*        ModifierList;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WindTurbine_C* GetDefaultObj();

	void UpdateVisuals();
	void TickWidget();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_WindTurbine(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_DeployableModifiersList_C* CallFunc_Create_ReturnValue, class UUMG_DeployableModifiersList_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, class UBP_UIProjectionComponent_Generic_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UBP_UIProjectionComponent_Generic_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Generic_1, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UBP_UIProjectionComponent_Generic_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Generic_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_WindTurbine_C* K2Node_DynamicCast_AsBP_Wind_Turbine, bool K2Node_DynamicCast_bSuccess_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
};

}


