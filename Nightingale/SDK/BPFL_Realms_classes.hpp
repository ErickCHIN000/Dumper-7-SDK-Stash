#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Realms.BPFL_Realms_C
class UBPFL_Realms_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Realms_C* GetDefaultObj();

	void Get_Accessibility_Zone_(class UObject* __WorldContext, int32* Realm_Power, int32 AccessibilityMaxPL);
	void GetCurrentRealmDifficulty(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, enum class ERealmDifficulty* Realm_Difficulty, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetNextRealmPower(enum class ERealmDifficulty DifficultySetting, int32 BaseRealmPower, class UObject* __WorldContext, int32* NextRealmPower, const struct FCurveTableRowHandle& DifficultyCurveTable_Extreme, const struct FCurveTableRowHandle& DifficultyCurveTable_Hard, const struct FCurveTableRowHandle& DifficultyCurveTable_Medium, const struct FCurveTableRowHandle& DifficultyCurveTable_Easy, const struct FCurveTableRowHandle& DifficultyCurveTable, enum class ERealmDifficulty Temp_byte_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCurveTableRowHandle& K2Node_Select_Default, float CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast);
	void DoesRealmAndRequirementMeetMinorCard(TArray<struct FRealmPlacementRequirement>& RealmRequirements, class UObject* WorldContext, class UObject* __WorldContext, bool* MeetMinorCard, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RealmSettingsAndRequirementsSatisfyMinorCardTag_ReturnValue);
	void GetCurrentRealmBiomeID(class UObject* WorldContextObject, class UObject* __WorldContext, enum class EBiomeID* BiomeId, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentRealmPower(class UObject* WorldContextObject, class UObject* __WorldContext, int32* RealmPower, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentRealmTags(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FGameplayTagContainer* RealmTags, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentRealmSettings(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FRealmSettings* RealmSettings, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void DoesRealmMeetRequirement(const struct FRealmPlacementRequirement& RealmRequirements, class UObject*& WorldContextObject, class UObject* __WorldContext, bool* RequirementMet, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RealmSettingsSatisfyRequirement_ReturnValue);
	void DoesRealmMeetOneRequirement(TArray<struct FRealmPlacementRequirement>& RealmRequirements, class UObject* WorldContextObject, class UObject* __WorldContext, bool* AtLeastOneMet, const struct FRealmSettings& RealmSettings, enum class EBiomeID Biome, const struct FGameplayTagContainer& RealmTags, const struct FRealmInfluenceValues& Influence, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RealmSettingsSatisfyOneOfRequirements_ReturnValue);
	void GetCurrentInfluenceLevels(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Success, struct FRealmInfluenceValues* Influence_Levels, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void InfluenceValueInRange(int32 ActualValue, int32 MinValue, int32 MaxValue, class UObject* __WorldContext, bool* InRange, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InfluenceLevelInRange(const struct FRealmInfluenceValues& ActualInfluence, const struct FRealmInfluenceValues& MinimumInfluence, const struct FRealmInfluenceValues& MaximumInfluence, class UObject* __WorldContext, bool* IsInRange, bool CallFunc_InfluenceValueInRange_InRange, bool CallFunc_InfluenceValueInRange_InRange_1, bool CallFunc_InfluenceValueInRange_InRange_2, bool CallFunc_InfluenceValueInRange_InRange_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void GetRecipeName(struct FRealmRecipe& Recipe, class UObject* __WorldContext, class FString* RecipeName);
	void GetCardsRequired(struct FRealmRecipe& RealmRecipe, class UObject* __WorldContext, TArray<struct FItemDataReference>* CardsRequired);
	void GetMapName(struct FRealmRecipe& Recipe, class UObject* __WorldContext, class FString* MapName);
};

}


