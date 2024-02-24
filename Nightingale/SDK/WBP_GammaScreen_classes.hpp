#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4D8 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_GammaScreen.WBP_GammaScreen_C
class UWBP_GammaScreen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GammaCalibration_C*               WBP_GammaCalibration;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GammaAccepted;                                     // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_GammaScreen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void BndEvt__WBP_GammaScreen_WBP_GammaCalibration_K2Node_ComponentBoundEvent_2_OnGammaAccepted__DelegateSignature();
	void ExecuteUbergraph_WBP_GammaScreen(int32 EntryPoint);
	void GammaAccepted__DelegateSignature();
};

}


