#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C
// (None)

class UClass* UUI_StormModeUpgrade_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormModeUpgrade_Entry_C");

	return Clss;
}


// UI_StormModeUpgrade_Entry_C UI_StormModeUpgrade_Entry.Default__UI_StormModeUpgrade_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormModeUpgrade_Entry_C* UUI_StormModeUpgrade_Entry_C::GetDefaultObj()
{
	static class UUI_StormModeUpgrade_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormModeUpgrade_Entry_C*>(UUI_StormModeUpgrade_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.IncreaseRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormModeUpgrade_Entry_C::IncreaseRank(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "IncreaseRank");

	Params::UUI_StormModeUpgrade_Entry_C_IncreaseRank_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.ReachedMaxRank?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormModeUpgrade_Entry_C::ReachedMaxRank_(bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "ReachedMaxRank?");

	Params::UUI_StormModeUpgrade_Entry_C_ReachedMaxRank__Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CanBuy?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormModeUpgrade_Entry_C::CanBuy_(int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "CanBuy?");

	Params::UUI_StormModeUpgrade_Entry_C_CanBuy__Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CanBuyColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanBuy                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_StormModeUpgrade_Entry_C::CanBuyColor(bool CanBuy, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "CanBuyColor");

	Params::UUI_StormModeUpgrade_Entry_C_CanBuyColor_Params Parms{};

	Parms.CanBuy = CanBuy;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormModeUpgrade_Entry_C::SetHighlighted(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "SetHighlighted");

	Params::UUI_StormModeUpgrade_Entry_C_SetHighlighted_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.CreateRankText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeUpgrade_Entry_C::CreateRankText(float Value, bool Temp_bool_Variable, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& Temp_string_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "CreateRankText");

	Params::UUI_StormModeUpgrade_Entry_C_CreateRankText_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.PopulateUpgradeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RankID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        UpgradeName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        UpgradeDescription                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              AmountOfRanks                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RankDelta                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RankStartingCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RankCostDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormMode_CurrencyTypeUpgradeCurrency                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MathSymbol                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Has_                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetTierColors_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBuy__ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_CanBuyColor_SlateColor                                  (None)
// bool                               CallFunc_ReachedMaxRank__ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateRankText_ReturnValue                              (None)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateRankText_ReturnValue_1                            (None)
// class FText                        CallFunc_RuneUpgrade_BuildText_X__ReturnValue                    (None)

void UUI_StormModeUpgrade_Entry_C::PopulateUpgradeData(class FName RowID, class FName RankID, class FText UpgradeName, class FText& UpgradeDescription, int32 AmountOfRanks, float RankDelta, int32 RankStartingCost, int32 RankCostDelta, enum class Enum_StormMode_CurrencyType UpgradeCurrency, const class FString& MathSymbol, bool Has_, class UTexture2D* Icon, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanBuy__ReturnValue, const struct FSlateColor& CallFunc_CanBuyColor_SlateColor, bool CallFunc_ReachedMaxRank__ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, class FText CallFunc_CreateRankText_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, class FText CallFunc_CreateRankText_ReturnValue_1, class FText CallFunc_RuneUpgrade_BuildText_X__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "PopulateUpgradeData");

	Params::UUI_StormModeUpgrade_Entry_C_PopulateUpgradeData_Params Parms{};

	Parms.RowID = RowID;
	Parms.RankID = RankID;
	Parms.UpgradeName = UpgradeName;
	Parms.UpgradeDescription = UpgradeDescription;
	Parms.AmountOfRanks = AmountOfRanks;
	Parms.RankDelta = RankDelta;
	Parms.RankStartingCost = RankStartingCost;
	Parms.RankCostDelta = RankCostDelta;
	Parms.UpgradeCurrency = UpgradeCurrency;
	Parms.MathSymbol = MathSymbol;
	Parms.Has_ = Has_;
	Parms.Icon = Icon;
	Parms.CallFunc_GetTierColors_ReturnValue = CallFunc_GetTierColors_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanBuy__ReturnValue = CallFunc_CanBuy__ReturnValue;
	Parms.CallFunc_CanBuyColor_SlateColor = CallFunc_CanBuyColor_SlateColor;
	Parms.CallFunc_ReachedMaxRank__ReturnValue = CallFunc_ReachedMaxRank__ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_CreateRankText_ReturnValue = CallFunc_CreateRankText_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_CreateRankText_ReturnValue_1 = CallFunc_CreateRankText_ReturnValue_1;
	Parms.CallFunc_RuneUpgrade_BuildText_X__ReturnValue = CallFunc_RuneUpgrade_BuildText_X__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormModeUpgrade_Entry_C::BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormModeUpgrade_Entry_C::BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "BndEvt__Button_Upgrade_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormModeUpgrade_Entry.UI_StormModeUpgrade_Entry_C.ExecuteUbergraph_UI_StormModeUpgrade_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormModeUpgrade_Entry_C::ExecuteUbergraph_UI_StormModeUpgrade_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeUpgrade_Entry_C", "ExecuteUbergraph_UI_StormModeUpgrade_Entry");

	Params::UUI_StormModeUpgrade_Entry_C_ExecuteUbergraph_UI_StormModeUpgrade_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


