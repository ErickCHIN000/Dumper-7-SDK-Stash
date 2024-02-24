#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RuneRandomizerComponent.RuneRandomizerComponent_C
// (None)

class UClass* URuneRandomizerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RuneRandomizerComponent_C");

	return Clss;
}


// RuneRandomizerComponent_C RuneRandomizerComponent.Default__RuneRandomizerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URuneRandomizerComponent_C* URuneRandomizerComponent_C::GetDefaultObj()
{
	static class URuneRandomizerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URuneRandomizerComponent_C*>(URuneRandomizerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomDarkFormUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_GetAllDarkFormUpgrades_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_RandomizeDarkFormRune_Rune                              (HasGetValueTypeHash)
// bool                               CallFunc_SelectDarkFormUpgrade_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune, bool CallFunc_GetAllDarkFormUpgrades_Success, const struct FStruct_Rune& CallFunc_RandomizeDarkFormRune_Rune, bool CallFunc_SelectDarkFormUpgrade_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "AskRandomDarkFormUpgrade");

	Params::URuneRandomizerComponent_C_AskRandomDarkFormUpgrade_Params Parms{};

	Parms.CallFunc_GetAllDarkFormUpgrades_Success = CallFunc_GetAllDarkFormUpgrades_Success;
	Parms.CallFunc_RandomizeDarkFormRune_Rune = CallFunc_RandomizeDarkFormRune_Rune;
	Parms.CallFunc_SelectDarkFormUpgrade_Success = CallFunc_SelectDarkFormUpgrade_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomWeaponUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Local_Weapon                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasImprovementRune__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCategoryUpgrades_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade, enum class Enum_Rune_Category_Randomizer Local_Category, enum class EComboTypes Local_Weapon, enum class Enum_Rune_Tier Local_Tier, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght, bool CallFunc_HasImprovementRune__ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GetCategoryUpgrades_Success, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result, int32 CallFunc_Clamp_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Runes_GetImprovementOnly_Lenght)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "AskRandomWeaponUpgrade");

	Params::URuneRandomizerComponent_C_AskRandomWeaponUpgrade_Params Parms{};

	Parms.Tier = Tier;
	Parms.Local_Category = Local_Category;
	Parms.Local_Weapon = Local_Weapon;
	Parms.Local_Tier = Local_Tier;
	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght = CallFunc_Runes_GetSpecialEffectOnly_Lenght;
	Parms.CallFunc_HasImprovementRune__ReturnValue = CallFunc_HasImprovementRune__ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCategoryUpgrades_Success = CallFunc_GetCategoryUpgrades_Success;
	Parms.CallFunc_BossStartingTierChances_ChancesOut = CallFunc_BossStartingTierChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght = CallFunc_Runes_GetImprovementOnly_Lenght;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.AskRandomUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCategoryUpgrades_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCategoryUpgrades_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCategoryPercentagesArray_IsDarkForm_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetCategoryPercentagesArray_Percentages                 (ReferenceParm, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerCallFunc_Category_Randomizer_SelectedCategory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::AskRandomUpgrade(struct FStruct_Rune* Upgrade, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetCategoryUpgrades_Success, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Runes_GetImprovementOnly_Lenght, bool CallFunc_GetCategoryUpgrades_Success_1, bool CallFunc_GetCategoryPercentagesArray_IsDarkForm_, TArray<float>& CallFunc_GetCategoryPercentagesArray_Percentages, enum class Enum_Rune_Category_Randomizer CallFunc_Category_Randomizer_SelectedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "AskRandomUpgrade");

	Params::URuneRandomizerComponent_C_AskRandomUpgrade_Params Parms{};

	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght = CallFunc_Runes_GetSpecialEffectOnly_Lenght;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCategoryUpgrades_Success = CallFunc_GetCategoryUpgrades_Success;
	Parms.CallFunc_BossStartingTierChances_ChancesOut = CallFunc_BossStartingTierChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght = CallFunc_Runes_GetImprovementOnly_Lenght;
	Parms.CallFunc_GetCategoryUpgrades_Success_1 = CallFunc_GetCategoryUpgrades_Success_1;
	Parms.CallFunc_GetCategoryPercentagesArray_IsDarkForm_ = CallFunc_GetCategoryPercentagesArray_IsDarkForm_;
	Parms.CallFunc_GetCategoryPercentagesArray_Percentages = CallFunc_GetCategoryPercentagesArray_Percentages;
	Parms.CallFunc_Category_Randomizer_SelectedCategory = CallFunc_Category_Randomizer_SelectedCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossLegendaryChances
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      BaseChances                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      ChancesOut                                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<float>                      Local_Chances                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FName                        Local_EnemyID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::BossLegendaryChances(TArray<float>& BaseChances, TArray<float>* ChancesOut, const TArray<float>& Local_Chances, class FName Local_EnemyID, float CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item_3, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, float CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Array_Get_Item_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_Array_Get_Item_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "BossLegendaryChances");

	Params::URuneRandomizerComponent_C_BossLegendaryChances_Params Parms{};

	Parms.BaseChances = BaseChances;
	Parms.Local_Chances = Local_Chances;
	Parms.Local_EnemyID = Local_EnemyID;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

	if (ChancesOut != nullptr)
		*ChancesOut = std::move(Parms.ChancesOut);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.PopulateTierUpRunes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomRuneToUpgrade_Output                           (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRuneToUpgrade_Output_1                         (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut                             (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_1                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_2                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_3                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_4                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAllUpgradableRunes_Output_Get                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::PopulateTierUpRunes(bool* Success_, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, const struct FStruct_Rune& CallFunc_GetRandomRuneToUpgrade_Output, const struct FStruct_Rune& CallFunc_GetRandomRuneToUpgrade_Output_1, const struct FStruct_Rune& CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType, const struct FStruct_Rune& CallFunc_Array_Get_Item_1, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_1, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_1, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_2, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_2, const struct FStruct_Rune& CallFunc_Array_Get_Item_2, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_3, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_3, bool K2Node_SwitchInteger_CmpSuccess, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_4, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_4, int32 CallFunc_GetAllUpgradableRunes_Output_Get, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "PopulateTierUpRunes");

	Params::URuneRandomizerComponent_C_PopulateTierUpRunes_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1 = CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1;
	Parms.CallFunc_GetRandomRuneToUpgrade_Output = CallFunc_GetRandomRuneToUpgrade_Output;
	Parms.CallFunc_GetRandomRuneToUpgrade_Output_1 = CallFunc_GetRandomRuneToUpgrade_Output_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Increase_Rune_Level_RuneOut = CallFunc_Increase_Rune_Level_RuneOut;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType = CallFunc_Increase_Rune_Level_UpgradeType;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_1 = CallFunc_Increase_Rune_Level_RuneOut_1;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_1 = CallFunc_Increase_Rune_Level_UpgradeType_1;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_2 = CallFunc_Increase_Rune_Level_RuneOut_2;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_2 = CallFunc_Increase_Rune_Level_UpgradeType_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_3 = CallFunc_Increase_Rune_Level_RuneOut_3;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_3 = CallFunc_Increase_Rune_Level_UpgradeType_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_4 = CallFunc_Increase_Rune_Level_RuneOut_4;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_4 = CallFunc_Increase_Rune_Level_UpgradeType_4;
	Parms.CallFunc_GetAllUpgradableRunes_Output_Get = CallFunc_GetAllUpgradableRunes_Output_Get;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2 = CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.PopulateLevelUpRunes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomRuneToUpgrade_Output                           (HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomRuneToUpgrade_Output_1                         (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut                             (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_1                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_2                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_3                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_4                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_5                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_6                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut_7                           (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAllUpgradableRunes_Output_Get                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::PopulateLevelUpRunes(bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomRuneToUpgrade_Output, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, const struct FStruct_Rune& CallFunc_GetRandomRuneToUpgrade_Output_1, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType, const struct FStruct_Rune& CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_1, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_1, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_2, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_2, const struct FStruct_Rune& CallFunc_Array_Get_Item_1, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_3, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_3, const struct FStruct_Rune& CallFunc_Array_Get_Item_2, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_4, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_4, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_5, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_5, bool K2Node_SwitchInteger_CmpSuccess, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_6, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_6, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut_7, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType_7, int32 CallFunc_GetAllUpgradableRunes_Output_Get, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "PopulateLevelUpRunes");

	Params::URuneRandomizerComponent_C_PopulateLevelUpRunes_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.CallFunc_GetRandomRuneToUpgrade_Output = CallFunc_GetRandomRuneToUpgrade_Output;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1 = CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1;
	Parms.CallFunc_GetRandomRuneToUpgrade_Output_1 = CallFunc_GetRandomRuneToUpgrade_Output_1;
	Parms.CallFunc_Increase_Rune_Level_RuneOut = CallFunc_Increase_Rune_Level_RuneOut;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType = CallFunc_Increase_Rune_Level_UpgradeType;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_1 = CallFunc_Increase_Rune_Level_RuneOut_1;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_1 = CallFunc_Increase_Rune_Level_UpgradeType_1;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_2 = CallFunc_Increase_Rune_Level_RuneOut_2;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_2 = CallFunc_Increase_Rune_Level_UpgradeType_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_3 = CallFunc_Increase_Rune_Level_RuneOut_3;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_3 = CallFunc_Increase_Rune_Level_UpgradeType_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_4 = CallFunc_Increase_Rune_Level_RuneOut_4;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_4 = CallFunc_Increase_Rune_Level_UpgradeType_4;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_5 = CallFunc_Increase_Rune_Level_RuneOut_5;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_5 = CallFunc_Increase_Rune_Level_UpgradeType_5;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_6 = CallFunc_Increase_Rune_Level_RuneOut_6;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_6 = CallFunc_Increase_Rune_Level_UpgradeType_6;
	Parms.CallFunc_Increase_Rune_Level_RuneOut_7 = CallFunc_Increase_Rune_Level_RuneOut_7;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType_7 = CallFunc_Increase_Rune_Level_UpgradeType_7;
	Parms.CallFunc_GetAllUpgradableRunes_Output_Get = CallFunc_GetAllUpgradableRunes_Output_Get;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2 = CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveRandomMiscRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune                                  (HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAllMiscRunes_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GiveRandomMiscRune(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetAllMiscRunes_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GiveRandomMiscRune");

	Params::URuneRandomizerComponent_C_GiveRandomMiscRune_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetRandomMiscRune_Rune = CallFunc_GetRandomMiscRune_Rune;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllMiscRunes_Success = CallFunc_GetAllMiscRunes_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsCorruptedTiel?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URuneRandomizerComponent_C::IsCorruptedTiel_(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IsCorruptedTiel?");

	Params::URuneRandomizerComponent_C_IsCorruptedTiel__Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsCorruptedEredrim?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URuneRandomizerComponent_C::IsCorruptedEredrim_(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IsCorruptedEredrim?");

	Params::URuneRandomizerComponent_C_IsCorruptedEredrim__Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllDarkFormUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetAllDarkFormUpgrades(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetAllDarkFormUpgrades");

	Params::URuneRandomizerComponent_C_GetAllDarkFormUpgrades_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RandomizeDarkFormRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FVector2D                   Local_Range                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut                      (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut_1                    (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::RandomizeDarkFormRune(struct FStruct_Rune* Rune, const struct FVector2D& Local_Range, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut_1, int32 CallFunc_Randomizer_FloatToInt_Result_1, bool K2Node_SwitchName_CmpSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RandomizeDarkFormRune");

	Params::URuneRandomizerComponent_C_RandomizeDarkFormRune_Params Parms{};

	Parms.Local_Range = Local_Range;
	Parms.CallFunc_BossStartingTierChances_ChancesOut = CallFunc_BossStartingTierChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BossStartingTierChances_ChancesOut_1 = CallFunc_BossStartingTierChances_ChancesOut_1;
	Parms.CallFunc_Randomizer_FloatToInt_Result_1 = CallFunc_Randomizer_FloatToInt_Result_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveDarkFormRandomMiscRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune                                  (HasGetValueTypeHash)

void URuneRandomizerComponent_C::GiveDarkFormRandomMiscRune(bool* Success, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GiveDarkFormRandomMiscRune");

	Params::URuneRandomizerComponent_C_GiveDarkFormRandomMiscRune_Params Parms{};

	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetRandomMiscRune_Rune = CallFunc_GetRandomMiscRune_Rune;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GiveDarkFormBonusRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GiveDarkFormBonusRune(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GiveDarkFormBonusRune");

	Params::URuneRandomizerComponent_C_GiveDarkFormBonusRune_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectDarkFormUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void URuneRandomizerComponent_C::SelectDarkFormUpgrade(bool* Success, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SelectDarkFormUpgrade");

	Params::URuneRandomizerComponent_C_SelectDarkFormUpgrade_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllMiscRunes_DarkForm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_RuneMiscID                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GetAllMiscRunes_DarkForm(bool* Success, class FName Local_RuneMiscID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetAllMiscRunes_DarkForm");

	Params::URuneRandomizerComponent_C_GetAllMiscRunes_DarkForm_Params Parms{};

	Parms.Local_RuneMiscID = Local_RuneMiscID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryPercentages
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNoMisc                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        NoMiscRow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Values                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Categories_PercentagesCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Categories_PercentagesCallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_Map_Values_Values_1                                     (ReferenceParm, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetCategoryPercentages(bool IsNoMisc, class FName NoMiscRow, class FName Row, TArray<float>* Values, const struct FStruct_Categories_Percentages& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<float>& CallFunc_Map_Values_Values, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FStruct_Categories_Percentages& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<float>& CallFunc_Map_Values_Values_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetCategoryPercentages");

	Params::URuneRandomizerComponent_C_GetCategoryPercentages_Params Parms{};

	Parms.IsNoMisc = IsNoMisc;
	Parms.NoMiscRow = NoMiscRow;
	Parms.Row = Row;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Values != nullptr)
		*Values = std::move(Parms.Values);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.CheckIfNonReplaceable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NonReplaceable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorruptedTiel__ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorruptedEredrim__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::CheckIfNonReplaceable(bool* NonReplaceable, bool CallFunc_IsCorruptedTiel__ReturnValue, bool CallFunc_IsCorruptedEredrim__ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected_1, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5, bool K2Node_DynamicCast_bSuccess_5, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2, bool CallFunc_StormMode_GetSelectedShell_HasSelected_2, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7, bool K2Node_DynamicCast_bSuccess_7, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_3, bool CallFunc_StormMode_GetSelectedShell_HasSelected_3, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "CheckIfNonReplaceable");

	Params::URuneRandomizerComponent_C_CheckIfNonReplaceable_Params Parms{};

	Parms.CallFunc_IsCorruptedTiel__ReturnValue = CallFunc_IsCorruptedTiel__ReturnValue;
	Parms.CallFunc_IsCorruptedEredrim__ReturnValue = CallFunc_IsCorruptedEredrim__ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected_1 = CallFunc_StormMode_GetSelectedShell_HasSelected_1;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell_1 = CallFunc_StormMode_GetSelectedShell_Shell_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected_2 = CallFunc_StormMode_GetSelectedShell_HasSelected_2;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell_2 = CallFunc_StormMode_GetSelectedShell_Shell_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_3 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_3;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected_3 = CallFunc_StormMode_GetSelectedShell_HasSelected_3;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell_3 = CallFunc_StormMode_GetSelectedShell_Shell_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NonReplaceable != nullptr)
		*NonReplaceable = Parms.NonReplaceable;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleRiposteRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossLegendaryChances_ChancesOut                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Randomizer_FloatToInt_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_BossUpgradeTierChances_ChancesOut                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Randomizer_FloatToInt_Result_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::HandleRiposteRune(bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Randomizer_FloatToInt_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<float>& CallFunc_BossLegendaryChances_ChancesOut, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Randomizer_FloatToInt_Result_1, bool K2Node_SwitchInteger_CmpSuccess_1, TArray<float>& K2Node_MakeArray_Array_1, TArray<float>& CallFunc_BossUpgradeTierChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result_2, bool K2Node_SwitchInteger_CmpSuccess_2, TArray<float>& K2Node_MakeArray_Array_2, int32 CallFunc_Randomizer_FloatToInt_Result_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_3, int32 CallFunc_Randomizer_FloatToInt_Result_4, bool K2Node_SwitchInteger_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleRiposteRune");

	Params::URuneRandomizerComponent_C_HandleRiposteRune_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1 = CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_BossLegendaryChances_ChancesOut = CallFunc_BossLegendaryChances_ChancesOut;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Randomizer_FloatToInt_Result_1 = CallFunc_Randomizer_FloatToInt_Result_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BossUpgradeTierChances_ChancesOut = CallFunc_BossUpgradeTierChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result_2 = CallFunc_Randomizer_FloatToInt_Result_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Randomizer_FloatToInt_Result_3 = CallFunc_Randomizer_FloatToInt_Result_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Randomizer_FloatToInt_Result_4 = CallFunc_Randomizer_FloatToInt_Result_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ResetBonusRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::ResetBonusRune()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "ResetBonusRune");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllMiscRunes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_RuneMiscID                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCorruptedTiel__ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCorruptedEredrim__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GetAllMiscRunes(bool* Success, class FName Local_RuneMiscID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsCorruptedTiel__ReturnValue, bool CallFunc_IsCorruptedEredrim__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetAllMiscRunes");

	Params::URuneRandomizerComponent_C_GetAllMiscRunes_Params Parms{};

	Parms.Local_RuneMiscID = Local_RuneMiscID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsCorruptedTiel__ReturnValue = CallFunc_IsCorruptedTiel__ReturnValue;
	Parms.CallFunc_IsCorruptedEredrim__ReturnValue = CallFunc_IsCorruptedEredrim__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleChaliceRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune                               (HasGetValueTypeHash)

void URuneRandomizerComponent_C::HandleChaliceRune(bool* Success, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, enum class Enum_StormModeArea Temp_byte_Variable, class FName K2Node_Select_Default, bool CallFunc_GetSpecialRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleChaliceRune");

	Params::URuneRandomizerComponent_C_HandleChaliceRune_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid_ = CallFunc_GetSpecialRuneFromID_IsValid_;
	Parms.CallFunc_GetSpecialRuneFromID_Rune = CallFunc_GetSpecialRuneFromID_Rune;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBonusMiscRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune                                  (HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::HandleBonusMiscRune(bool* Success, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleBonusMiscRune");

	Params::URuneRandomizerComponent_C_HandleBonusMiscRune_Params Parms{};

	Parms.CallFunc_GetRandomMiscRune_Rune = CallFunc_GetRandomMiscRune_Rune;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRuneToUpgrade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Output                                                           (Parm, OutParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetRandomRuneToUpgrade(struct FStruct_Rune* Output, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetRandomRuneToUpgrade");

	Params::URuneRandomizerComponent_C_GetRandomRuneToUpgrade_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetAllUpgradableRunes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GetAllUpgradableRunes(int32* Output_Get, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FStruct_Rune& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetAllUpgradableRunes");

	Params::URuneRandomizerComponent_C_GetAllUpgradableRunes_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRuneType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Type          RuneType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Type          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Type          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Type          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetRandomRuneType(enum class Enum_Rune_Type* RuneType, bool Temp_bool_Variable, enum class Enum_Rune_Type Temp_byte_Variable, enum class Enum_Rune_Type Temp_byte_Variable_1, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, enum class Enum_Rune_Type K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetRandomRuneType");

	Params::URuneRandomizerComponent_C_GetRandomRuneType_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (RuneType != nullptr)
		*RuneType = Parms.RuneType;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryPercentagesArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceNoMisc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsDarkForm_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      Percentages                                                      (Parm, OutParm, HasGetValueTypeHash)
// enum class EArmorTypes             Local_Shell                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_NoMisc_                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values                           (ReferenceParm, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_1                         (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_2                         (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_3                         (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_4                         (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_5                         (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_6                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_7                         (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetCategoryPercentages_Values_8                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetCategoryPercentagesArray(bool ForceNoMisc, bool* IsDarkForm_, TArray<float>* Percentages, enum class EArmorTypes Local_Shell, bool Local_NoMisc_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TArray<float>& CallFunc_GetCategoryPercentages_Values, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<float>& CallFunc_GetCategoryPercentages_Values_1, TArray<float>& CallFunc_GetCategoryPercentages_Values_2, TArray<float>& CallFunc_GetCategoryPercentages_Values_3, TArray<float>& CallFunc_GetCategoryPercentages_Values_4, TArray<float>& CallFunc_GetCategoryPercentages_Values_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1, TArray<float>& CallFunc_GetCategoryPercentages_Values_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<float>& CallFunc_GetCategoryPercentages_Values_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2, TArray<float>& CallFunc_GetCategoryPercentages_Values_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetCategoryPercentagesArray");

	Params::URuneRandomizerComponent_C_GetCategoryPercentagesArray_Params Parms{};

	Parms.ForceNoMisc = ForceNoMisc;
	Parms.Local_Shell = Local_Shell;
	Parms.Local_NoMisc_ = Local_NoMisc_;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCategoryPercentages_Values = CallFunc_GetCategoryPercentages_Values;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCategoryPercentages_Values_1 = CallFunc_GetCategoryPercentages_Values_1;
	Parms.CallFunc_GetCategoryPercentages_Values_2 = CallFunc_GetCategoryPercentages_Values_2;
	Parms.CallFunc_GetCategoryPercentages_Values_3 = CallFunc_GetCategoryPercentages_Values_3;
	Parms.CallFunc_GetCategoryPercentages_Values_4 = CallFunc_GetCategoryPercentages_Values_4;
	Parms.CallFunc_GetCategoryPercentages_Values_5 = CallFunc_GetCategoryPercentages_Values_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1;
	Parms.CallFunc_GetCategoryPercentages_Values_6 = CallFunc_GetCategoryPercentages_Values_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetCategoryPercentages_Values_7 = CallFunc_GetCategoryPercentages_Values_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_2;
	Parms.CallFunc_GetCategoryPercentages_Values_8 = CallFunc_GetCategoryPercentages_Values_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDarkForm_ != nullptr)
		*IsDarkForm_ = Parms.IsDarkForm_;

	if (Percentages != nullptr)
		*Percentages = std::move(Parms.Percentages);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossUpgradeTierChances
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      BaseChances                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      ChancesOut                                                       (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Local_EnemyID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Upgrade_Tier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Upgrade_LVL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::BossUpgradeTierChances(TArray<float>& BaseChances, TArray<float>* ChancesOut, class FName Local_EnemyID, float Local_Upgrade_Tier, float Local_Upgrade_LVL, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, bool K2Node_SwitchName_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, float CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, float CallFunc_Subtract_FloatFloat_ReturnValue_2, TArray<float>& K2Node_MakeArray_Array_1, float CallFunc_Subtract_FloatFloat_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_1, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "BossUpgradeTierChances");

	Params::URuneRandomizerComponent_C_BossUpgradeTierChances_Params Parms{};

	Parms.BaseChances = BaseChances;
	Parms.Local_EnemyID = Local_EnemyID;
	Parms.Local_Upgrade_Tier = Local_Upgrade_Tier;
	Parms.Local_Upgrade_LVL = Local_Upgrade_LVL;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_1 = CallFunc_GetPermanentUpgradeRankLevel_Level_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ChancesOut != nullptr)
		*ChancesOut = std::move(Parms.ChancesOut);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.BossStartingTierChances
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                      BaseChances                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      ChancesOut                                                       (Parm, OutParm, HasGetValueTypeHash)
// class FName                        Local_EnemyID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Epic                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Rare                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Uncommon                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Common                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_4                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_5                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_6                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_7                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::BossStartingTierChances(TArray<float>& BaseChances, TArray<float>* ChancesOut, class FName Local_EnemyID, float Local_Epic, float Local_Rare, float Local_Uncommon, float Local_Common, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_4, const class FString& CallFunc_Conv_FloatToString_ReturnValue_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue_6, const class FString& CallFunc_Conv_FloatToString_ReturnValue_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array, class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, class FName CallFunc_MakeLiteralName_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_FClamp_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<float>& K2Node_MakeArray_Array_1, class FName CallFunc_MakeLiteralName_ReturnValue_3, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, float CallFunc_Multiply_IntFloat_ReturnValue_3, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_4, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Multiply_IntFloat_ReturnValue_4, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_8, float CallFunc_FClamp_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, int32 CallFunc_GetPermanentUpgradeRankLevel_Level_5, float CallFunc_Multiply_IntFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_9, float CallFunc_FClamp_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "BossStartingTierChances");

	Params::URuneRandomizerComponent_C_BossStartingTierChances_Params Parms{};

	Parms.BaseChances = BaseChances;
	Parms.Local_EnemyID = Local_EnemyID;
	Parms.Local_Epic = Local_Epic;
	Parms.Local_Rare = Local_Rare;
	Parms.Local_Uncommon = Local_Uncommon;
	Parms.Local_Common = Local_Common;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_4 = CallFunc_Conv_FloatToString_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_5 = CallFunc_Conv_FloatToString_ReturnValue_5;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_6 = CallFunc_Conv_FloatToString_ReturnValue_6;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_7 = CallFunc_Conv_FloatToString_ReturnValue_7;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_1 = CallFunc_GetPermanentUpgradeRankLevel_Level_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_2 = CallFunc_GetPermanentUpgradeRankLevel_Level_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_3 = CallFunc_GetPermanentUpgradeRankLevel_Level_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_3 = CallFunc_Multiply_IntFloat_ReturnValue_3;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_4 = CallFunc_GetPermanentUpgradeRankLevel_Level_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_4 = CallFunc_Multiply_IntFloat_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue_5 = CallFunc_MakeLiteralName_ReturnValue_5;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level_5 = CallFunc_GetPermanentUpgradeRankLevel_Level_5;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_5 = CallFunc_Multiply_IntFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (ChancesOut != nullptr)
		*ChancesOut = std::move(Parms.ChancesOut);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleMiniBossRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune                             (HasGetValueTypeHash)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid__1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune_1                           (HasGetValueTypeHash)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid__2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune_2                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid__3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune_3                           (HasGetValueTypeHash)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid__4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune_4                           (HasGetValueTypeHash)

void URuneRandomizerComponent_C::HandleMiniBossRune(bool* Success, bool CallFunc_GetImmediateRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune, bool CallFunc_GetImmediateRuneFromID_IsValid__1, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune_1, bool CallFunc_GetImmediateRuneFromID_IsValid__2, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GetImmediateRuneFromID_IsValid__3, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune_3, bool CallFunc_GetImmediateRuneFromID_IsValid__4, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleMiniBossRune");

	Params::URuneRandomizerComponent_C_HandleMiniBossRune_Params Parms{};

	Parms.CallFunc_GetImmediateRuneFromID_IsValid_ = CallFunc_GetImmediateRuneFromID_IsValid_;
	Parms.CallFunc_GetImmediateRuneFromID_Rune = CallFunc_GetImmediateRuneFromID_Rune;
	Parms.CallFunc_GetImmediateRuneFromID_IsValid__1 = CallFunc_GetImmediateRuneFromID_IsValid__1;
	Parms.CallFunc_GetImmediateRuneFromID_Rune_1 = CallFunc_GetImmediateRuneFromID_Rune_1;
	Parms.CallFunc_GetImmediateRuneFromID_IsValid__2 = CallFunc_GetImmediateRuneFromID_IsValid__2;
	Parms.CallFunc_GetImmediateRuneFromID_Rune_2 = CallFunc_GetImmediateRuneFromID_Rune_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetImmediateRuneFromID_IsValid__3 = CallFunc_GetImmediateRuneFromID_IsValid__3;
	Parms.CallFunc_GetImmediateRuneFromID_Rune_3 = CallFunc_GetImmediateRuneFromID_Rune_3;
	Parms.CallFunc_GetImmediateRuneFromID_IsValid__4 = CallFunc_GetImmediateRuneFromID_IsValid__4;
	Parms.CallFunc_GetImmediateRuneFromID_Rune_4 = CallFunc_GetImmediateRuneFromID_Rune_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IsBasicRune
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Struct_Rune                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URuneRandomizerComponent_C::IsBasicRune(struct FStruct_Rune& Struct_Rune, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IsBasicRune");

	Params::URuneRandomizerComponent_C_IsBasicRune_Params Parms{};

	Parms.Struct_Rune = Struct_Rune;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RandomizeStartingRuneTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut                      (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut_1                    (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_BossStartingTierChances_ChancesOut_2                    (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBasicRune_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBasicRune_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBasicRune_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Randomizer_FloatToInt_Result_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::RandomizeStartingRuneTier(TArray<float>& CallFunc_BossStartingTierChances_ChancesOut, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut_1, TArray<float>& CallFunc_BossStartingTierChances_ChancesOut_2, int32 CallFunc_Randomizer_FloatToInt_Result, int32 CallFunc_Randomizer_FloatToInt_Result_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_IsBasicRune_ReturnValue, bool CallFunc_IsBasicRune_ReturnValue_1, bool CallFunc_IsBasicRune_ReturnValue_2, int32 CallFunc_Randomizer_FloatToInt_Result_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RandomizeStartingRuneTier");

	Params::URuneRandomizerComponent_C_RandomizeStartingRuneTier_Params Parms{};

	Parms.CallFunc_BossStartingTierChances_ChancesOut = CallFunc_BossStartingTierChances_ChancesOut;
	Parms.CallFunc_BossStartingTierChances_ChancesOut_1 = CallFunc_BossStartingTierChances_ChancesOut_1;
	Parms.CallFunc_BossStartingTierChances_ChancesOut_2 = CallFunc_BossStartingTierChances_ChancesOut_2;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_Randomizer_FloatToInt_Result_1 = CallFunc_Randomizer_FloatToInt_Result_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_IsBasicRune_ReturnValue = CallFunc_IsBasicRune_ReturnValue;
	Parms.CallFunc_IsBasicRune_ReturnValue_1 = CallFunc_IsBasicRune_ReturnValue_1;
	Parms.CallFunc_IsBasicRune_ReturnValue_2 = CallFunc_IsBasicRune_ReturnValue_2;
	Parms.CallFunc_Randomizer_FloatToInt_Result_2 = CallFunc_Randomizer_FloatToInt_Result_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleLastChanceRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetImmediateRuneFromID_IsValid_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetImmediateRuneFromID_Rune                             (HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::HandleLastChanceRune(bool* Success, bool CallFunc_GetImmediateRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetImmediateRuneFromID_Rune, bool CallFunc_RandomBoolWithWeight_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_NotEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleLastChanceRune");

	Params::URuneRandomizerComponent_C_HandleLastChanceRune_Params Parms{};

	Parms.CallFunc_GetImmediateRuneFromID_IsValid_ = CallFunc_GetImmediateRuneFromID_IsValid_;
	Parms.CallFunc_GetImmediateRuneFromID_Rune = CallFunc_GetImmediateRuneFromID_Rune;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBossRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune                               (HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid__1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune_1                             (HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid__2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune_2                             (HasGetValueTypeHash)

void URuneRandomizerComponent_C::HandleBossRune(bool* Success, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetSpecialRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune, bool CallFunc_GetSpecialRuneFromID_IsValid__1, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune_1, bool CallFunc_GetSpecialRuneFromID_IsValid__2, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleBossRune");

	Params::URuneRandomizerComponent_C_HandleBossRune_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid_ = CallFunc_GetSpecialRuneFromID_IsValid_;
	Parms.CallFunc_GetSpecialRuneFromID_Rune = CallFunc_GetSpecialRuneFromID_Rune;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid__1 = CallFunc_GetSpecialRuneFromID_IsValid__1;
	Parms.CallFunc_GetSpecialRuneFromID_Rune_1 = CallFunc_GetSpecialRuneFromID_Rune_1;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid__2 = CallFunc_GetSpecialRuneFromID_IsValid__2;
	Parms.CallFunc_GetSpecialRuneFromID_Rune_2 = CallFunc_GetSpecialRuneFromID_Rune_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.HandleBonusRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBonusMiscRune_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBonusMiscRune_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBonusMiscRune_Success_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMiniBossRune_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleLastChanceRune_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleChaliceRune_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMiniBossRune_Success_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleMiniBossRune_Success_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleLastChanceRune_Success_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleLastChanceRune_Success_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBossRune_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_ShouldUnlockChalice__ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::HandleBonusRune(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HandleBonusMiscRune_Success, bool CallFunc_HandleBonusMiscRune_Success_1, bool CallFunc_HandleBonusMiscRune_Success_2, bool CallFunc_HandleMiniBossRune_Success, bool CallFunc_HandleLastChanceRune_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HandleChaliceRune_Success, bool CallFunc_HandleMiniBossRune_Success_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_HandleMiniBossRune_Success_2, bool CallFunc_HandleLastChanceRune_Success_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_HandleLastChanceRune_Success_2, bool CallFunc_HandleBossRune_Success, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_ShouldUnlockChalice__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "HandleBonusRune");

	Params::URuneRandomizerComponent_C_HandleBonusRune_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HandleBonusMiscRune_Success = CallFunc_HandleBonusMiscRune_Success;
	Parms.CallFunc_HandleBonusMiscRune_Success_1 = CallFunc_HandleBonusMiscRune_Success_1;
	Parms.CallFunc_HandleBonusMiscRune_Success_2 = CallFunc_HandleBonusMiscRune_Success_2;
	Parms.CallFunc_HandleMiniBossRune_Success = CallFunc_HandleMiniBossRune_Success;
	Parms.CallFunc_HandleLastChanceRune_Success = CallFunc_HandleLastChanceRune_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HandleChaliceRune_Success = CallFunc_HandleChaliceRune_Success;
	Parms.CallFunc_HandleMiniBossRune_Success_1 = CallFunc_HandleMiniBossRune_Success_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_HandleMiniBossRune_Success_2 = CallFunc_HandleMiniBossRune_Success_2;
	Parms.CallFunc_HandleLastChanceRune_Success_1 = CallFunc_HandleLastChanceRune_Success_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_HandleLastChanceRune_Success_2 = CallFunc_HandleLastChanceRune_Success_2;
	Parms.CallFunc_HandleBossRune_Success = CallFunc_HandleBossRune_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_ShouldUnlockChalice__ReturnValue = CallFunc_StormMode_ShouldUnlockChalice__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetOpenAreasRunes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetSpecialRuneFromID_IsValid_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune                               (HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid__1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune_1                             (HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid__2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune_2                             (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GetOpenAreasRunes(bool CallFunc_GetSpecialRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune, bool CallFunc_GetSpecialRuneFromID_IsValid__1, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune_1, bool CallFunc_GetSpecialRuneFromID_IsValid__2, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetOpenAreasRunes");

	Params::URuneRandomizerComponent_C_GetOpenAreasRunes_Params Parms{};

	Parms.CallFunc_GetSpecialRuneFromID_IsValid_ = CallFunc_GetSpecialRuneFromID_IsValid_;
	Parms.CallFunc_GetSpecialRuneFromID_Rune = CallFunc_GetSpecialRuneFromID_Rune;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid__1 = CallFunc_GetSpecialRuneFromID_IsValid__1;
	Parms.CallFunc_GetSpecialRuneFromID_Rune_1 = CallFunc_GetSpecialRuneFromID_Rune_1;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid__2 = CallFunc_GetSpecialRuneFromID_IsValid__2;
	Parms.CallFunc_GetSpecialRuneFromID_Rune_2 = CallFunc_GetSpecialRuneFromID_Rune_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRuneInSlotDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Type          RuneType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetSlotCurrentRune_CurrentRune                          (HasGetValueTypeHash)
// bool                               CallFunc_GetSlotCurrentRune_HasRune_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Type          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneSlots_IDs      CallFunc_GetSlotIDsForCategory_Improvement                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneSlots_IDs      CallFunc_GetSlotIDsForCategory_SpecialEffect                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneSlots_IDs      K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetRuneInSlotDetails(enum class Enum_Rune_Type RuneType, const struct FStruct_Rune& CallFunc_GetSlotCurrentRune_CurrentRune, bool CallFunc_GetSlotCurrentRune_HasRune_, enum class Enum_Rune_Type Temp_byte_Variable, enum class Enum_RuneSlots_IDs CallFunc_GetSlotIDsForCategory_Improvement, enum class Enum_RuneSlots_IDs CallFunc_GetSlotIDsForCategory_SpecialEffect, enum class Enum_RuneSlots_IDs K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetRuneInSlotDetails");

	Params::URuneRandomizerComponent_C_GetRuneInSlotDetails_Params Parms{};

	Parms.RuneType = RuneType;
	Parms.CallFunc_GetSlotCurrentRune_CurrentRune = CallFunc_GetSlotCurrentRune_CurrentRune;
	Parms.CallFunc_GetSlotCurrentRune_HasRune_ = CallFunc_GetSlotCurrentRune_HasRune_;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetSlotIDsForCategory_Improvement = CallFunc_GetSlotIDsForCategory_Improvement;
	Parms.CallFunc_GetSlotIDsForCategory_SpecialEffect = CallFunc_GetSlotIDsForCategory_SpecialEffect;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OfferMiscRunes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune                                  (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_1                                (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_2                                (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_3                                (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_4                                (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_5                                (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::OfferMiscRunes(int32 SelectAmount, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_1, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_2, bool CallFunc_Array_RemoveItem_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue_4, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_3, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_4, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_5, bool CallFunc_Array_RemoveItem_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OfferMiscRunes");

	Params::URuneRandomizerComponent_C_OfferMiscRunes_Params Parms{};

	Parms.SelectAmount = SelectAmount;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_GetRandomMiscRune_Rune = CallFunc_GetRandomMiscRune_Rune;
	Parms.CallFunc_GetRandomMiscRune_Rune_1 = CallFunc_GetRandomMiscRune_Rune_1;
	Parms.CallFunc_GetRandomMiscRune_Rune_2 = CallFunc_GetRandomMiscRune_Rune_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_3 = CallFunc_Array_RemoveItem_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_4 = CallFunc_Array_RemoveItem_ReturnValue_4;
	Parms.CallFunc_GetRandomMiscRune_Rune_3 = CallFunc_GetRandomMiscRune_Rune_3;
	Parms.CallFunc_GetRandomMiscRune_Rune_4 = CallFunc_GetRandomMiscRune_Rune_4;
	Parms.CallFunc_GetRandomMiscRune_Rune_5 = CallFunc_GetRandomMiscRune_Rune_5;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_5 = CallFunc_Array_RemoveItem_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Increase Rune Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                RuneIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FStruct_Rune                RuneOut                                                          (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_UpgradeType        UpgradeType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Capped                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Rune_HandleLevelUp_RuneOut                              (HasGetValueTypeHash)
// bool                               CallFunc_Rune_HandleLevelUp_RuneCapped                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Rune_HandleLevelUp_Increment_X__Out                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_HandleLevelUp_Increment_X_Out                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_MakeStruct_Struct_Rune_Values                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_SetFieldsInStruct_StructOut_1                             (HasGetValueTypeHash)

void URuneRandomizerComponent_C::Increase_Rune_Level(struct FStruct_Rune& RuneIn, struct FStruct_Rune* RuneOut, enum class Enum_UpgradeType* UpgradeType, bool Local_Capped, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FStruct_Rune& CallFunc_Rune_HandleLevelUp_RuneOut, bool CallFunc_Rune_HandleLevelUp_RuneCapped, int32 CallFunc_Rune_HandleLevelUp_Increment_X__Out, int32 CallFunc_Rune_HandleLevelUp_Increment_X_Out, const struct FStruct_Rune& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, const struct FStruct_Rune_Values& K2Node_MakeStruct_Struct_Rune_Values, const struct FStruct_Rune& K2Node_SetFieldsInStruct_StructOut_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Increase Rune Level");

	Params::URuneRandomizerComponent_C_Increase_Rune_Level_Params Parms{};

	Parms.RuneIn = RuneIn;
	Parms.Local_Capped = Local_Capped;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Rune_HandleLevelUp_RuneOut = CallFunc_Rune_HandleLevelUp_RuneOut;
	Parms.CallFunc_Rune_HandleLevelUp_RuneCapped = CallFunc_Rune_HandleLevelUp_RuneCapped;
	Parms.CallFunc_Rune_HandleLevelUp_Increment_X__Out = CallFunc_Rune_HandleLevelUp_Increment_X__Out;
	Parms.CallFunc_Rune_HandleLevelUp_Increment_X_Out = CallFunc_Rune_HandleLevelUp_Increment_X_Out;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Struct_Rune_Values = K2Node_MakeStruct_Struct_Rune_Values;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RuneOut != nullptr)
		*RuneOut = std::move(Parms.RuneOut);

	if (UpgradeType != nullptr)
		*UpgradeType = Parms.UpgradeType;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseRuneTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                RuneIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FStruct_Rune                RuneOut                                                          (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::IncreaseRuneTier(struct FStruct_Rune& RuneIn, struct FStruct_Rune* RuneOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IncreaseRuneTier");

	Params::URuneRandomizerComponent_C_IncreaseRuneTier_Params Parms{};

	Parms.RuneIn = RuneIn;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RuneOut != nullptr)
		*RuneOut = std::move(Parms.RuneOut);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseCategoryProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerSelectedCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Current                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::IncreaseCategoryProgress(enum class Enum_Rune_Category_Randomizer SelectedCategory, int32 Local_Current, enum class Enum_Rune_Category_Randomizer Local_Category, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IncreaseCategoryProgress");

	Params::URuneRandomizerComponent_C_IncreaseCategoryProgress_Params Parms{};

	Parms.SelectedCategory = SelectedCategory;
	Parms.Local_Current = Local_Current;
	Parms.Local_Category = Local_Category;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Runes_GetSpecialEffectOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Lenght                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_Rune>        Local_Runes_Temp                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::Runes_GetSpecialEffectOnly(int32* Lenght, const TArray<struct FStruct_Rune>& Local_Runes_Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Runes_GetSpecialEffectOnly");

	Params::URuneRandomizerComponent_C_Runes_GetSpecialEffectOnly_Params Parms{};

	Parms.Local_Runes_Temp = Local_Runes_Temp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Lenght != nullptr)
		*Lenght = Parms.Lenght;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectThreeUpgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::SelectThreeUpgrades(int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, const struct FStruct_Rune& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SelectThreeUpgrades");

	Params::URuneRandomizerComponent_C_SelectThreeUpgrades_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomMiscRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetRandomMiscRune(struct FStruct_Rune* Rune, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetRandomMiscRune");

	Params::URuneRandomizerComponent_C_GetRandomMiscRune_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OfferUpgradeAndMisc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MiscAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune                                  (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_1                                (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomMiscRune_Rune_2                                (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)

void URuneRandomizerComponent_C::OfferUpgradeAndMisc(int32 MiscAmount, bool K2Node_SwitchInteger_CmpSuccess, const struct FStruct_Rune& CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune, const struct FStruct_Rune& CallFunc_Array_Get_Item_1, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_1, const struct FStruct_Rune& CallFunc_GetRandomMiscRune_Rune_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, const struct FStruct_Rune& CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OfferUpgradeAndMisc");

	Params::URuneRandomizerComponent_C_OfferUpgradeAndMisc_Params Parms{};

	Parms.MiscAmount = MiscAmount;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetRandomMiscRune_Rune = CallFunc_GetRandomMiscRune_Rune;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetRandomMiscRune_Rune_1 = CallFunc_GetRandomMiscRune_Rune_1;
	Parms.CallFunc_GetRandomMiscRune_Rune_2 = CallFunc_GetRandomMiscRune_Rune_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetRandomRune
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetRandomRune(struct FStruct_Rune* Rune, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetRandomRune");

	Params::URuneRandomizerComponent_C_GetRandomRune_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectThreeRandomUpgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRune_Rune                                      (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRune_Rune_1                                    (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRune_Rune_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::SelectThreeRandomUpgrades(int32 Temp_int_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStruct_Rune& CallFunc_GetRandomRune_Rune, const struct FStruct_Rune& CallFunc_GetRandomRune_Rune_1, const struct FStruct_Rune& CallFunc_GetRandomRune_Rune_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SelectThreeRandomUpgrades");

	Params::URuneRandomizerComponent_C_SelectThreeRandomUpgrades_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRandomRune_Rune = CallFunc_GetRandomRune_Rune;
	Parms.CallFunc_GetRandomRune_Rune_1 = CallFunc_GetRandomRune_Rune_1;
	Parms.CallFunc_GetRandomRune_Rune_2 = CallFunc_GetRandomRune_Rune_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.IncreaseRuneTierOld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::IncreaseRuneTierOld(enum class Enum_Rune_Tier Temp_byte_Variable, enum class Enum_Rune_Tier Temp_byte_Variable_1, enum class Enum_Rune_Tier Temp_byte_Variable_2, enum class Enum_Rune_Tier Temp_byte_Variable_3, enum class Enum_Rune_Tier Temp_byte_Variable_4, enum class Enum_Rune_Tier Temp_byte_Variable_5, enum class Enum_Rune_Tier Temp_byte_Variable_6, enum class Enum_Rune_Tier K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "IncreaseRuneTierOld");

	Params::URuneRandomizerComponent_C_IncreaseRuneTierOld_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SelectRandomRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void URuneRandomizerComponent_C::SelectRandomRune(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SelectRandomRune");

	Params::URuneRandomizerComponent_C_SelectRandomRune_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Runes_GetImprovementOnly
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Lenght                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_Rune>        Local_Runes_Temp                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::Runes_GetImprovementOnly(int32* Lenght, const TArray<struct FStruct_Rune>& Local_Runes_Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Runes_GetImprovementOnly");

	Params::URuneRandomizerComponent_C_Runes_GetImprovementOnly_Params Parms{};

	Parms.Local_Runes_Temp = Local_Runes_Temp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Lenght != nullptr)
		*Lenght = Parms.Lenght;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryUpgrades_+Misc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCategoryUpgrades_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAllMiscRunes_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::GetCategoryUpgrades_PlusMisc(bool* Success, bool CallFunc_GetCategoryUpgrades_Success, bool CallFunc_GetAllMiscRunes_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetCategoryUpgrades_+Misc");

	Params::URuneRandomizerComponent_C_GetCategoryUpgrades_PlusMisc_Params Parms{};

	Parms.CallFunc_GetCategoryUpgrades_Success = CallFunc_GetCategoryUpgrades_Success;
	Parms.CallFunc_GetAllMiscRunes_Success = CallFunc_GetAllMiscRunes_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.GetCategoryUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Local_Runes                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::GetCategoryUpgrades(bool* Success, class UDataTable* Local_Runes, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue_2, int32 Temp_int_Variable_2, bool CallFunc_IsUpgradeUnlocked_bUnlocked_2, class FName CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_3, class FName CallFunc_Array_Get_Item_3, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 Temp_int_Variable_3, class FName CallFunc_Array_Get_Item_4, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "GetCategoryUpgrades");

	Params::URuneRandomizerComponent_C_GetCategoryUpgrades_Params Parms{};

	Parms.Local_Runes = Local_Runes;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue = CallFunc_GetRiposteUpgradeIDs_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue_1 = CallFunc_GetRiposteUpgradeIDs_ReturnValue_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_1 = CallFunc_IsUpgradeUnlocked_bUnlocked_1;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue_2 = CallFunc_GetRiposteUpgradeIDs_ReturnValue_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_2 = CallFunc_IsUpgradeUnlocked_bUnlocked_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue_3 = CallFunc_GetRiposteUpgradeIDs_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_3 = CallFunc_IsUpgradeUnlocked_bUnlocked_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetRunesFromTable_ReturnValue_1 = CallFunc_GetRunesFromTable_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SetObjectMainChance%
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rune_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Item_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::SetObjectMainChance_(float Rune_Chance, float Item_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SetObjectMainChance%");

	Params::URuneRandomizerComponent_C_SetObjectMainChance__Params Parms{};

	Parms.Rune_Chance = Rune_Chance;
	Parms.Item_Chance = Item_Chance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RemoveObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RemoveObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RemoveObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SetPillarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_PillarType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::SetPillarType(enum class Enum_PillarType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SetPillarType");

	Params::URuneRandomizerComponent_C_SetPillarType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.SetObjectAsTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::SetObjectAsTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "SetObjectAsTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ReRandomizeEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSeed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::ReRandomizeEnemy(int32 NewSeed, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "ReRandomizeEnemy");

	Params::URuneRandomizerComponent_C_ReRandomizeEnemy_Params Parms{};

	Parms.NewSeed = NewSeed;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Randomizer_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::Randomizer_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Randomizer_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnRuneSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::OnRuneSelected(enum class Enum_Rune_Category_Randomizer Category, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OnRuneSelected");

	Params::URuneRandomizerComponent_C_OnRuneSelected_Params Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Rune_Randomize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::Rune_Randomize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Rune_Randomize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Randomizer_CreateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipBonusRune_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneRandomizerComponent_C::Randomizer_CreateWidget(bool SkipBonusRune_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Randomizer_CreateWidget");

	Params::URuneRandomizerComponent_C_Randomizer_CreateWidget_Params Parms{};

	Parms.SkipBonusRune_ = SkipBonusRune_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RuneInSlot_IncreaseLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RuneInSlot_IncreaseLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RuneInSlot_IncreaseLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RuneInSlot_IncreaseTier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RuneInSlot_IncreaseTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RuneInSlot_IncreaseTier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RuneInSlot_OfferNew_IncreasedTIER_ResetLVL
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RuneInSlot_OfferNew_IncreasedTIER_ResetLVL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RuneInSlot_OfferNew_IncreasedTIER_ResetLVL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RuneInSlot_OfferNew_SameTIER_SameLVL
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RuneInSlot_OfferNew_SameTIER_SameLVL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RuneInSlot_OfferNew_SameTIER_SameLVL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.InitiliazeSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialSeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::InitiliazeSeed(int32 SeedID, int32 InitialSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "InitiliazeSeed");

	Params::URuneRandomizerComponent_C_InitiliazeSeed_Params Parms{};

	Parms.SeedID = SeedID;
	Parms.InitialSeed = InitialSeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Rune_OpenAreas
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::Rune_OpenAreas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Rune_OpenAreas");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OfferUpgradeLevelRunes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::OfferUpgradeLevelRunes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OfferUpgradeLevelRunes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.MiscUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::MiscUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "MiscUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.Randomizer_GiveOpenAreas
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::Randomizer_GiveOpenAreas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "Randomizer_GiveOpenAreas");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.RiposteUpgradeRandomizer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::RiposteUpgradeRandomizer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "RiposteUpgradeRandomizer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.DarkForm_Upgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::DarkForm_Upgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "DarkForm_Upgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OpenSeedWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::OpenSeedWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OpenSeedWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnSeedFound_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::OnSeedFound_Event(class FName SeedID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OnSeedFound_Event");

	Params::URuneRandomizerComponent_C_OnSeedFound_Event_Params Parms{};

	Parms.SeedID = SeedID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.ExecuteUbergraph_RuneRandomizerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateTierUpRunes_Success_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Rune_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Item_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_PillarType         K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewSeed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Runes_SelectWindow_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerK2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCategoryUpgrades__Misc_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_SkipBonusRune_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasImprovementRune__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Increase_Rune_Level_RuneOut                             (HasGetValueTypeHash)
// enum class Enum_UpgradeType        CallFunc_Increase_Rune_Level_UpgradeType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_IncreaseRuneTier_RuneOut                                (HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRune_Rune                                      (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetRandomRune_Rune_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_IncreaseRuneTier_RuneOut_1                              (HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// int32                              K2Node_Event_SeedID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InitialSeed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetStormMode_ShouldOpenArea__ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConfigurable_Glowing_Pickup_StormMode_C*K2Node_DynamicCast_AsConfigurable_Glowing_Pickup_Storm_Mode      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Rune_Container_C*        K2Node_DynamicCast_AsBP_Rune_Container                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossUpgradeTierChances_ChancesOut                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_BossLegendaryChances_ChancesOut                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCategoryPercentagesArray_IsDarkForm_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_GetCategoryPercentagesArray_Percentages                 (ReferenceParm, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerCallFunc_Category_Randomizer_SelectedCategory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Type          CallFunc_GetRandomRuneType_RuneType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAllMiscRunes_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasImprovementRune__ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Runes_GetSpecialEffectOnly_Lenght_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Runes_GetImprovementOnly_Lenght_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Type          CallFunc_GetRandomRuneType_RuneType_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfNonReplaceable_NonReplaceable                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAllMiscRunes_DarkForm_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeightFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectDarkFormUpgrade_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GiveDarkFormRandomMiscRune_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_RandomizeDarkFormRune_Rune                              (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetAllDarkFormUpgrades_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_SeedID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::ExecuteUbergraph_RuneRandomizerComponent(int32 EntryPoint, bool CallFunc_PopulateTierUpRunes_Success_, bool CallFunc_HasSpecialEffectRune__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Runes_SelectWindow_C* CallFunc_Create_ReturnValue, enum class Enum_Rune_Category_Randomizer K2Node_CustomEvent_Category, class FName K2Node_CustomEvent_ID, bool CallFunc_GetCategoryUpgrades__Misc_Success, int32 CallFunc_Runes_GetImprovementOnly_Lenght, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_SkipBonusRune_, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght, bool CallFunc_HasImprovementRune__ReturnValue, const struct FStruct_Rune& CallFunc_Increase_Rune_Level_RuneOut, enum class Enum_UpgradeType CallFunc_Increase_Rune_Level_UpgradeType, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FStruct_Rune& CallFunc_IncreaseRuneTier_RuneOut, const struct FStruct_Rune& CallFunc_GetRandomRune_Rune, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_2, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght_1, const struct FStruct_Rune& CallFunc_GetRandomRune_Rune_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, const struct FStruct_Rune& CallFunc_IncreaseRuneTier_RuneOut_1, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Randomizer_FloatToInt_Result, bool K2Node_SwitchInteger_CmpSuccess_3, TArray<float>& K2Node_MakeArray_Array_1, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, int32 CallFunc_Randomizer_FloatToInt_Result_1, bool K2Node_SwitchInteger_CmpSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStormMode_ShouldOpenArea__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AConfigurable_Glowing_Pickup_StormMode_C* K2Node_DynamicCast_AsConfigurable_Glowing_Pickup_Storm_Mode, bool K2Node_DynamicCast_bSuccess_1, class ABP_Rune_Container_C* K2Node_DynamicCast_AsBP_Rune_Container, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasSpecialEffectRune__ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<float>& CallFunc_BossUpgradeTierChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result_2, bool K2Node_SwitchInteger_CmpSuccess_5, TArray<float>& CallFunc_BossLegendaryChances_ChancesOut, int32 CallFunc_Randomizer_FloatToInt_Result_3, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_6, bool K2Node_SwitchInteger_CmpSuccess_7, bool CallFunc_HasSpecialEffectRune__ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, bool CallFunc_GetCategoryPercentagesArray_IsDarkForm_, TArray<float>& CallFunc_GetCategoryPercentagesArray_Percentages, enum class Enum_Rune_Category_Randomizer CallFunc_Category_Randomizer_SelectedCategory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<float>& K2Node_MakeArray_Array_2, int32 CallFunc_Randomizer_FloatToInt_Result_4, bool K2Node_SwitchInteger_CmpSuccess_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_9, enum class Enum_Rune_Type CallFunc_GetRandomRuneType_RuneType, bool CallFunc_GetAllMiscRunes_Success, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_HasImprovementRune__ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Runes_GetImprovementOnly_Lenght_1, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght_2, int32 CallFunc_Runes_GetImprovementOnly_Lenght_2, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Runes_GetSpecialEffectOnly_Lenght_3, int32 CallFunc_Runes_GetImprovementOnly_Lenght_3, bool K2Node_SwitchEnum_CmpSuccess_2, enum class Enum_Rune_Type CallFunc_GetRandomRuneType_RuneType_1, bool CallFunc_CheckIfNonReplaceable_NonReplaceable, bool CallFunc_GetAllMiscRunes_DarkForm_Success, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_SelectDarkFormUpgrade_Success, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GiveDarkFormRandomMiscRune_Success, const struct FStruct_Rune& CallFunc_RandomizeDarkFormRune_Rune, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetAllDarkFormUpgrades_Success, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_SeedID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "ExecuteUbergraph_RuneRandomizerComponent");

	Params::URuneRandomizerComponent_C_ExecuteUbergraph_RuneRandomizerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PopulateTierUpRunes_Success_ = CallFunc_PopulateTierUpRunes_Success_;
	Parms.CallFunc_HasSpecialEffectRune__ReturnValue = CallFunc_HasSpecialEffectRune__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_Event_Rune_Chance = K2Node_Event_Rune_Chance;
	Parms.K2Node_Event_Item_Chance = K2Node_Event_Item_Chance;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_NewSeed = K2Node_Event_NewSeed;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_GetCategoryUpgrades__Misc_Success = CallFunc_GetCategoryUpgrades__Misc_Success;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght = CallFunc_Runes_GetImprovementOnly_Lenght;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_SkipBonusRune_ = K2Node_CustomEvent_SkipBonusRune_;
	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght = CallFunc_Runes_GetSpecialEffectOnly_Lenght;
	Parms.CallFunc_HasImprovementRune__ReturnValue = CallFunc_HasImprovementRune__ReturnValue;
	Parms.CallFunc_Increase_Rune_Level_RuneOut = CallFunc_Increase_Rune_Level_RuneOut;
	Parms.CallFunc_Increase_Rune_Level_UpgradeType = CallFunc_Increase_Rune_Level_UpgradeType;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IncreaseRuneTier_RuneOut = CallFunc_IncreaseRuneTier_RuneOut;
	Parms.CallFunc_GetRandomRune_Rune = CallFunc_GetRandomRune_Rune;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght_1 = CallFunc_Runes_GetSpecialEffectOnly_Lenght_1;
	Parms.CallFunc_GetRandomRune_Rune_1 = CallFunc_GetRandomRune_Rune_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_IncreaseRuneTier_RuneOut_1 = CallFunc_IncreaseRuneTier_RuneOut_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Event_SeedID = K2Node_Event_SeedID;
	Parms.K2Node_Event_InitialSeed = K2Node_Event_InitialSeed;
	Parms.CallFunc_Randomizer_FloatToInt_Result_1 = CallFunc_Randomizer_FloatToInt_Result_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormMode_ShouldOpenArea__ReturnValue = CallFunc_GetStormMode_ShouldOpenArea__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsConfigurable_Glowing_Pickup_Storm_Mode = K2Node_DynamicCast_AsConfigurable_Glowing_Pickup_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Rune_Container = K2Node_DynamicCast_AsBP_Rune_Container;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasSpecialEffectRune__ReturnValue_1 = CallFunc_HasSpecialEffectRune__ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BossUpgradeTierChances_ChancesOut = CallFunc_BossUpgradeTierChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result_2 = CallFunc_Randomizer_FloatToInt_Result_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_BossLegendaryChances_ChancesOut = CallFunc_BossLegendaryChances_ChancesOut;
	Parms.CallFunc_Randomizer_FloatToInt_Result_3 = CallFunc_Randomizer_FloatToInt_Result_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_HasSpecialEffectRune__ReturnValue_2 = CallFunc_HasSpecialEffectRune__ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_GetCategoryPercentagesArray_IsDarkForm_ = CallFunc_GetCategoryPercentagesArray_IsDarkForm_;
	Parms.CallFunc_GetCategoryPercentagesArray_Percentages = CallFunc_GetCategoryPercentagesArray_Percentages;
	Parms.CallFunc_Category_Randomizer_SelectedCategory = CallFunc_Category_Randomizer_SelectedCategory;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Randomizer_FloatToInt_Result_4 = CallFunc_Randomizer_FloatToInt_Result_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_9 = K2Node_SwitchInteger_CmpSuccess_9;
	Parms.CallFunc_GetRandomRuneType_RuneType = CallFunc_GetRandomRuneType_RuneType;
	Parms.CallFunc_GetAllMiscRunes_Success = CallFunc_GetAllMiscRunes_Success;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_HasImprovementRune__ReturnValue_1 = CallFunc_HasImprovementRune__ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght_1 = CallFunc_Runes_GetImprovementOnly_Lenght_1;
	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght_2 = CallFunc_Runes_GetSpecialEffectOnly_Lenght_2;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght_2 = CallFunc_Runes_GetImprovementOnly_Lenght_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Runes_GetSpecialEffectOnly_Lenght_3 = CallFunc_Runes_GetSpecialEffectOnly_Lenght_3;
	Parms.CallFunc_Runes_GetImprovementOnly_Lenght_3 = CallFunc_Runes_GetImprovementOnly_Lenght_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetRandomRuneType_RuneType_1 = CallFunc_GetRandomRuneType_RuneType_1;
	Parms.CallFunc_CheckIfNonReplaceable_NonReplaceable = CallFunc_CheckIfNonReplaceable_NonReplaceable;
	Parms.CallFunc_GetAllMiscRunes_DarkForm_Success = CallFunc_GetAllMiscRunes_DarkForm_Success;
	Parms.CallFunc_RandomBoolWithWeightFromStream_ReturnValue = CallFunc_RandomBoolWithWeightFromStream_ReturnValue;
	Parms.CallFunc_SelectDarkFormUpgrade_Success = CallFunc_SelectDarkFormUpgrade_Success;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GiveDarkFormRandomMiscRune_Success = CallFunc_GiveDarkFormRandomMiscRune_Success;
	Parms.CallFunc_RandomizeDarkFormRune_Rune = CallFunc_RandomizeDarkFormRune_Rune;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAllDarkFormUpgrades_Success = CallFunc_GetAllDarkFormUpgrades_Success;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_SeedID = K2Node_CustomEvent_SeedID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnSeedFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::OnSeedFound__DelegateSignature(class FName SeedID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OnSeedFound__DelegateSignature");

	Params::URuneRandomizerComponent_C_OnSeedFound__DelegateSignature_Params Parms{};

	Parms.SeedID = SeedID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnSeedInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneRandomizerComponent_C::OnSeedInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OnSeedInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneRandomizerComponent.RuneRandomizerComponent_C.OnUpgradesSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneRandomizerComponent_C::OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneRandomizerComponent_C", "OnUpgradesSelected__DelegateSignature");

	Params::URuneRandomizerComponent_C_OnUpgradesSelected__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


