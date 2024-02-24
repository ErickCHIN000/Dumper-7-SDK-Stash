#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x2D8 - 0x2AD)
// WidgetBlueprintGeneratedClass W_ProjectionPopup_Building.W_ProjectionPopup_Building_C
class UW_ProjectionPopup_Building_C : public UW_ProjectionWidget_C
{
public:
	uint8                                        Pad_578A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          DurabilityBar;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pointer;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ProjectionPopup_Building_C* GetDefaultObj();

	enum class EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult& Result, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue);
	void UpdateVisuals(class UBP_UIProjectionComponent_Building_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Building, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText CallFunc_Format_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void UpdateBuildingVisuals();
	void ExecuteUbergraph_W_ProjectionPopup_Building(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


