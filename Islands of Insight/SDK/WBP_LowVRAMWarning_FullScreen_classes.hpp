#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3B8 - 0x370)
// WidgetBlueprintGeneratedClass WBP_LowVRAMWarning_FullScreen.WBP_LowVRAMWarning_FullScreen_C
class UWBP_LowVRAMWarning_FullScreen_C : public UNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_125;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LowVRAMWarning_C*                 WBP_LowVRAMWarning_38;                             // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NewVar_0;                                          // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NewVar_1;                                          // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_LowVRAMWarning_FullScreen_C* GetDefaultObj();

	void BndEvt__WBP_LowVRAMWarning_FullScreen_WBP_LowVRAMWarning_38_K2Node_ComponentBoundEvent_3_ClickedOkay__DelegateSignature();
	void ExecuteUbergraph_WBP_LowVRAMWarning_FullScreen(int32 EntryPoint);
};

}


