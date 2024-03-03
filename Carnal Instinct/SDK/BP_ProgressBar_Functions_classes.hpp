#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_ProgressBar_Functions.BP_ProgressBar_Functions_C
class UBP_ProgressBar_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_ProgressBar_Functions_C* GetDefaultObj();

	void GetProgressBarManager(class UWB_Base_C* ProgressBar, class UObject* __WorldContext, TScriptInterface<class IBPi_ProgressBars_C>* Manager, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}


