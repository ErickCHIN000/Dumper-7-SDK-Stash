#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x380 - 0x348)
// WidgetBlueprintGeneratedClass WBP_TEMP_Structure_EncounterWaveTimer.WBP_TEMP_Structure_EncounterWaveTimer_C
class UWBP_TEMP_Structure_EncounterWaveTimer_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_NWX_ProgressBar_C*                Progress_EncounterWaveTimer;                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_Defense_C* OwningEncounterTrigger;                            // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TotalTimeRequired;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TotalTimeElapsed;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeactivatedTime;                                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               StructureObj;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TEMP_Structure_EncounterWaveTimer_C* GetDefaultObj();

	void ShouldWidgetBeShowing(bool* bShouldShow, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RefreshWidget(const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, bool CallFunc_ShouldWidgetBeShowing_bShouldShow, double CallFunc_SafeDivide_ReturnValue);
	void TimerUpdate(class URealmTimerComponent* RealmTimerComponent, class AGameStateBase* GameState, double CurrentServerTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue);
	void Initialize(const struct FS_Crafting_CraftInProgress& CraftInProgress, double CallFunc_GetDeactivatedTime_DeactivatedTime, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWaveLullTimer_WaveLullTime);
	void UpdateStructure(class UObject* NewStructure, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_EncounterTrigger_Defense_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Defense, bool K2Node_DynamicCast_bSuccess);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_TEMP_Structure_EncounterWaveTimer(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_ShouldWidgetBeShowing_bShouldShow);
};

}


