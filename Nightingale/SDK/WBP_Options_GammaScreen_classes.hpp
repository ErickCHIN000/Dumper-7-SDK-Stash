#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Options_GammaScreen.WBP_Options_GammaScreen_C
class UWBP_Options_GammaScreen_C : public UNWXCommonWindowWidget
{
public:
	class UWBP_button_base_C*                    BU_Cancel;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GammaCalibration_C*               GammaCalibration;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Options_GammaScreen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
};

}


