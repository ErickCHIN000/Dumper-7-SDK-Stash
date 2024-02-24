#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A (0x2EA - 0x260)
// WidgetBlueprintGeneratedClass UMG_EncumbranceBarLight.UMG_EncumbranceBarLight_C
class UUMG_EncumbranceBarLight_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Divider;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider_1;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          EncumbranceBar;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WeightIcon;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeightText;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           Green;                                             // 0x298(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Red;                                               // 0x2C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Initialised;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NeedsUpdate;                                       // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_EncumbranceBarLight_C* GetDefaultObj();

	void SetWeightBar(bool Temp_bool_Variable, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetCurrentInventoryWeight_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void SetWeightText(bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetCurrentInventoryWeight_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void OnPlayerWeightUpdated(int32 CurrentWeight);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnStatContainerUpdated();
	void ExecuteUbergraph_UMG_EncumbranceBarLight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_CurrentWeight, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
};

}


