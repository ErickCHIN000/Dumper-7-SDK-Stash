#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2F9 - 0x280)
// WidgetBlueprintGeneratedClass UMG_RadarIcon.UMG_RadarIcon_C
class UUMG_RadarIcon_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                HitBox;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             IconScaleBox;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LabelCanvas;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LabelLineImage;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             LabelScaleBox_0;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LabelText;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_1;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         DrawLabel;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DirectionalOffset;                                 // 0x2D4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RadarIcon_C*                      MasterIcon;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                LabelString;                                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsPlayer;                                          // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_RadarIcon_C* GetDefaultObj();

	bool ShouldDrawPathToLinkedActor(class AActor** LinkedActor);
	bool ShouldOverrideWidgetLocation(struct FVector* Location);
	bool ShouldOverrideVisibility(enum class ESlateVisibility* ForcedVisibility);
	void SetShouldDrawLabel(bool DrawLabel);
	void ApplyLabelPosition(enum class ERotationalDirections RelativePosition, bool K2Node_SwitchEnum_CmpSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_3, bool K2Node_DynamicCast_bSuccess_3, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_4, bool K2Node_DynamicCast_bSuccess_4, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_5, bool K2Node_DynamicCast_bSuccess_5, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_6, bool K2Node_DynamicCast_bSuccess_6, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_7, bool K2Node_DynamicCast_bSuccess_7, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_8, bool K2Node_DynamicCast_bSuccess_8, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_9, bool K2Node_DynamicCast_bSuccess_9, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_10, bool K2Node_DynamicCast_bSuccess_10, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_11, bool K2Node_DynamicCast_bSuccess_11);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitialiseIconWidget(const struct FMapIconsRowHandle& MapIconData, class AActor* OwningActor);
	void ExecuteUbergraph_UMG_RadarIcon(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Variable, const struct FMapIconsRowHandle& K2Node_Event_MapIconData, class AActor* K2Node_Event_OwningActor, class AIcarusWaypointActor* K2Node_DynamicCast_AsIcarus_Waypoint_Actor, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPlayerVisualIdentity_ReturnValue, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_Select_Default);
};

}


