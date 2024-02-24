#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2F0 - 0x2E0)
// WidgetBlueprintGeneratedClass UMG_RadarMapGrid.UMG_RadarMapGrid_C
class UUMG_RadarMapGrid_C : public URadarMapGridBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Gridimage;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RadarMapGrid_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnRenderGridImage(bool bInRenderImage);
	void ExecuteUbergraph_UMG_RadarMapGrid(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bInRenderImage, enum class ESlateVisibility K2Node_Select_Default);
};

}


