#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x480 - 0x420)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C
class UWBP_CC_DynamicSubPanel__Base_C : public UNWXCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            PanelClosed;                                       // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_CharacterAppearanceComponent_C*    AppearanceComponent;                               // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             PanelSize;                                         // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProxyCharacter_Child_CharacterCreation_C* ProxyCharacterReference;                           // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGuid                                 SessionId;                                         // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int64                                        StartTime;                                         // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                AccountId;                                         // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel__Base_C* GetDefaultObj();

	void Utility_GetMorphValue(class FName MorphName, float* Value, bool CallFunc_IsValid_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName);
	void SendTelemetryEvents(int32 TimeSpent, const class FString& PanelName, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values, const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue_1, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> CallFunc_CollectPanelValues_OutValues, const class FString& CallFunc_CollectPanelValues_OutPanelName);
	void CacheStartingPanelValues(const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue);
	void RefreshPanel();
	void ResetPanelContent();
	void RandomizePanelContent();
	void Destruct();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel__Base(int32 EntryPoint);
	void PanelClosed__DelegateSignature();
};

}


