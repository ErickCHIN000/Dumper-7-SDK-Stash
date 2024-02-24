#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x320 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_DebugEnvAudio.CF_DebugEnvAudio_C
class UCF_DebugEnvAudio_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UUserWidget>             EnvAudioDebugWidgetClass;                          // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_DebugEnvAudio_C* GetDefaultObj();

	void OnLoaded_43E5AE7649FE7C4CA097089BA18583CB(TSubclassOf<class UObject> Loaded);
	void Execute();
	void ExecuteUbergraph_CF_DebugEnvAudio(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_Create_ReturnValue);
};

}


