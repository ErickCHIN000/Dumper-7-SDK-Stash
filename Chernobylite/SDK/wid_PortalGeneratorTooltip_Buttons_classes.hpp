#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_PortalGeneratorTooltip_Buttons.wid_PortalGeneratorTooltip_Buttons_C
class UWid_PortalGeneratorTooltip_Buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Buttons_Entry_C*        Edit;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_PortalGeneratorTooltip_Buttons_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetEditMode_Visibility(enum class ESlateVisibility InVisibility);
	void ExecuteUbergraph_wid_PortalGeneratorTooltip_Buttons(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, bool CallFunc_GetItemDisabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


