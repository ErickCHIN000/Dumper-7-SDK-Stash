#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentTreeTitle.UMG_TalentTreeTitle_C
// (None)

class UClass* UUMG_TalentTreeTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentTreeTitle_C");

	return Clss;
}


// UMG_TalentTreeTitle_C UMG_TalentTreeTitle.Default__UMG_TalentTreeTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentTreeTitle_C* UUMG_TalentTreeTitle_C::GetDefaultObj()
{
	static class UUMG_TalentTreeTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentTreeTitle_C*>(UUMG_TalentTreeTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.RefreshRankBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrent_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentTree                 CallFunc_GetTalentTreesStruct_TalentTrees                        (None)
// enum class EValid                  CallFunc_GetTalentTreesStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSpentPointsForTree_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTalentRank_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentRank                 CallFunc_GetTalentRank_ReturnValue                               (None)
// struct FTalentRank                 CallFunc_GetTalentRanksStruct_TalentRanks                        (None)
// enum class EValid                  CallFunc_GetTalentRanksStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentRank                 CallFunc_GetTalentRanksStruct_TalentRanks_1                      (None)
// enum class EValid                  CallFunc_GetTalentRanksStruct_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTreeTitle_C::RefreshRankBar(class UTalentModelInterface_Const* Model, float CallFunc_GetCurrent_Current, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetSpentPointsForTree_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EValid CallFunc_GetTalentRank_Paths, const struct FTalentRank& CallFunc_GetTalentRank_ReturnValue, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks, enum class EValid CallFunc_GetTalentRanksStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks_1, enum class EValid CallFunc_GetTalentRanksStruct_Paths_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float K2Node_MathExpression_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float K2Node_MathExpression_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "RefreshRankBar");

	Params::UUMG_TalentTreeTitle_C_RefreshRankBar_Params Parms{};

	Parms.Model = Model;
	Parms.CallFunc_GetCurrent_Current = CallFunc_GetCurrent_Current;
	Parms.CallFunc_GetTalentTreesStruct_TalentTrees = CallFunc_GetTalentTreesStruct_TalentTrees;
	Parms.CallFunc_GetTalentTreesStruct_Paths = CallFunc_GetTalentTreesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSpentPointsForTree_ReturnValue = CallFunc_GetSpentPointsForTree_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetTalentRank_Paths = CallFunc_GetTalentRank_Paths;
	Parms.CallFunc_GetTalentRank_ReturnValue = CallFunc_GetTalentRank_ReturnValue;
	Parms.CallFunc_GetTalentRanksStruct_TalentRanks = CallFunc_GetTalentRanksStruct_TalentRanks;
	Parms.CallFunc_GetTalentRanksStruct_Paths = CallFunc_GetTalentRanksStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetTalentRanksStruct_TalentRanks_1 = CallFunc_GetTalentRanksStruct_TalentRanks_1;
	Parms.CallFunc_GetTalentRanksStruct_Paths_1 = CallFunc_GetTalentRanksStruct_Paths_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentTreeTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Talent Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Talent_Base_C*          Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentTreeTitle_C::Talent_Hovered(class UUMG_Talent_Base_C* Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "Talent Hovered");

	Params::UUMG_TalentTreeTitle_C_Talent_Hovered_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Talent Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentTreeTitle_C::Talent_Unhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "Talent Unhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.CreateTooltips
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentTreeTitle_C::CreateTooltips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "CreateTooltips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.ExecuteUbergraph_UMG_TalentTreeTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentTree                 CallFunc_GetTalentTreesStruct_TalentTrees                        (None)
// enum class EValid                  CallFunc_GetTalentTreesStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Talent_Base_C*          K2Node_CustomEvent_Talent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanUnlock_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)

void UUMG_TalentTreeTitle_C::ExecuteUbergraph_UMG_TalentTreeTitle(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_Talent_Base_C* K2Node_CustomEvent_Talent, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_CanUnlock_Result, enum class ESlateVisibility K2Node_Select_Default, class FText Temp_text_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentTreeTitle_C", "ExecuteUbergraph_UMG_TalentTreeTitle");

	Params::UUMG_TalentTreeTitle_C_ExecuteUbergraph_UMG_TalentTreeTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetTalentTreesStruct_TalentTrees = CallFunc_GetTalentTreesStruct_TalentTrees;
	Parms.CallFunc_GetTalentTreesStruct_Paths = CallFunc_GetTalentTreesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Talent = K2Node_CustomEvent_Talent;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_CanUnlock_Result = CallFunc_CanUnlock_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


