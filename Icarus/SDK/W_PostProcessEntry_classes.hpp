#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_PostProcessEntry.W_PostProcessEntry_C
class UW_PostProcessEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            EntryChanged;                                      // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EntryFunction;                                     // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFeatureLevelsEnum                    RequiredFeatureLevel;                              // 0x288(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_C* GetDefaultObj();

	bool IsEntryEnabled(const struct FFeatureLevelsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue);
	void InitFromDefaultValue();
	void InitFromSaveGameValue(const struct FFPostProcessSaveData& Value);
	void GetSaveGameValue(struct FFPostProcessSaveData* Value);
	void UpdatePostProcess(struct FPostProcessSettings& Settings);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_PostProcessEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FFeatureLevelsRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void EntryFunction__DelegateSignature(const class FString& Param);
	void EntryChanged__DelegateSignature();
};

}


