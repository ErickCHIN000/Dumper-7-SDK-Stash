#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2F8 - 0x2C0)
// WidgetBlueprintGeneratedClass BuildableObjectHealth.BuildableObjectHealth_C
class UBuildableObjectHealth_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBarLinear_C*                  HealthBar;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HealthText;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Visible;                                           // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Hidden;                                            // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBuildableObjectHealth_C* GetDefaultObj();

	void UpdateHealth(int32 Health, int32 MaxHealth);
	void ExecuteUbergraph_BuildableObjectHealth(int32 EntryPoint, int32 K2Node_CustomEvent_Health, int32 K2Node_CustomEvent_MaxHealth, const class FString& CallFunc_Conv_IntToString_ReturnValue, TScriptInterface<class IBPi_ProgressBars_C> CallFunc_GetProgressBarManager_Manager, double CallFunc_Conv_IntToDouble_ReturnValue, class UWB_Base_C* K2Node_DynamicCast_AsWB_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Clamp_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Hidden__DelegateSignature();
	void Visible__DelegateSignature();
};

}


