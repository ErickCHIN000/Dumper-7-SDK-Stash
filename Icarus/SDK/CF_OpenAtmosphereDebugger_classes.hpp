#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x320 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C
class UCF_OpenAtmosphereDebugger_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UUserWidget>             AtmosphereDebuggerWidgetClass;                     // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_OpenAtmosphereDebugger_C* GetDefaultObj();

	void OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1(TSubclassOf<class UObject> Loaded);
	void Execute();
	void ExecuteUbergraph_CF_OpenAtmosphereDebugger(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


