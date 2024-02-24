#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x320 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C
class UCF_WeatherSummonWeaterman_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UUserWidget>             WeathermanWidgetClass;                             // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_WeatherSummonWeaterman_C* GetDefaultObj();

	void OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E(TSubclassOf<class UObject> Loaded);
	void Execute();
	void ExecuteUbergraph_CF_WeatherSummonWeaterman(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class UUserWidget* CallFunc_Create_ReturnValue);
};

}


