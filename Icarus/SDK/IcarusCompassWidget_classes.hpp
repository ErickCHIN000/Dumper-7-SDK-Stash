#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x330 - 0x2D8)
// WidgetBlueprintGeneratedClass IcarusCompassWidget.IcarusCompassWidget_C
class UIcarusCompassWidget_C : public UIcarusCompassWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              CompassContainer;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CompassFrame;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CompassOverlay;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DialImageWidget;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_EdgeTransparency;                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SearchAreaHighlight;                               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Dynamic_Mat;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusCompassWaypoint_C*              CompassWaypointWidgets;                            // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_IcarusCompassIcon_C*>      AddedIconWidgets;                                  // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UIcarusCompassWidget_C* GetDefaultObj();

	void ShouldDisplayIcon(class UIcarusMapIconComponent* IconComponent, bool* ShouldDisplay, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void RemoveWaypoint(class UIcarusCompassIcon* CompassWidget, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RemoveWaypointComponentOld(class UIcarusMapIconComponent* MapIconComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UIcarusCompassIcon* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void AddWaypoint(class UIcarusMapIconComponent* MapIcon, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_ClassDynamicCast_AsUMG_Icarus_Compass_Icon, bool K2Node_ClassDynamicCast_bSuccess, class UUMG_IcarusCompassIcon_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void StatsUpdated();
	void AddWaypointComponent(class UIcarusMapIconComponent* MapIconComponent);
	void RemoveWaypointWidget(class UIcarusCompassIcon* CompassIcon);
	void RemoveWaypointComponent(class UIcarusMapIconComponent* MapIconComponent);
	void ExecuteUbergraph_IcarusCompassWidget(int32 EntryPoint, class UIcarusMapIconComponent* K2Node_Event_MapIconComponent, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, class UIcarusMapIconComponent* K2Node_Event_MapIconComponent_1, class UIcarusCompassIcon* K2Node_Event_CompassIcon);
};

}


