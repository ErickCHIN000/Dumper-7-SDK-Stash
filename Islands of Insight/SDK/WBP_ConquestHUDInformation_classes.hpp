#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x308 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_ConquestHUDInformation.WBP_ConquestHUDInformation_C
class UWBP_ConquestHUDInformation_C : public UConquestHUDInformationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               BlueProgressBar;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            LocalZoneProgress;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RedProgressBar;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            Zone0Progress;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            Zone1Progress;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            Zone2Progress;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            Zone3Progress;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ZoneProgressHexagon_C*            Zone4Progress;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConquestHUDInformation_C* GetDefaultObj();

	void SetZoneParameters(bool Visible, class FText& ZoneName, const struct FLinearColor& TeamColor, float RedProgress, float blueProgress, class UWBP_ZoneProgressHexagon_C* ZoneWidget);
	void BP_VisualizeLocalZone(bool Show, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully);
	void BP_VisualizeZoneWithIndex(int32 Index, bool bShow, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully);
	void BP_VisualizeGlobalScore(float RedPercentage, float BluePercentage);
	void ExecuteUbergraph_WBP_ConquestHUDInformation(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_show, float K2Node_Event_redProgress_1, float K2Node_Event_blueProgress_1, const struct FLinearColor& K2Node_Event_captureColor_1, class FText K2Node_Event_zoneShortName_1, bool K2Node_Event_completedFully_1, int32 K2Node_Event_Index, bool K2Node_Event_bShow, float K2Node_Event_redProgress, float K2Node_Event_blueProgress, const struct FLinearColor& K2Node_Event_captureColor, class FText K2Node_Event_zoneShortName, bool K2Node_Event_completedFully, float K2Node_Event_RedPercentage, float K2Node_Event_BluePercentage, class UWBP_ZoneProgressHexagon_C* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}


