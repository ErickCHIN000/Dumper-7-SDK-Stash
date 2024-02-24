#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Difficulty_Equipment_C WBP_CC_DynamicSubPanel_Difficulty_Equipment.Default__WBP_CC_DynamicSubPanel_Difficulty_Equipment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C*>(UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.SetLoadoutStoryCombinedText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Background                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Story7_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story7_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story7_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story7_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story6_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story6_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story6_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story6_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story5_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story5_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story5_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story5_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story4_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story4_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story4_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story4_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story3_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story3_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story3_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story3_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story2_Loadout_4                                                 (Edit, BlueprintVisible)
// class FText                        Story2_Loadout_3                                                 (Edit, BlueprintVisible)
// class FText                        Story2_Loadout_2                                                 (Edit, BlueprintVisible)
// class FText                        Story2_Loadout_1                                                 (Edit, BlueprintVisible)
// class FText                        Story1_Loadout4                                                  (Edit, BlueprintVisible)
// class FText                        Story1_Loadout3                                                  (Edit, BlueprintVisible)
// class FText                        Story1_Loadout2                                                  (Edit, BlueprintVisible)
// class FText                        Story1_Loadout1                                                  (Edit, BlueprintVisible)
// enum class EPlayerBackground       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// class FText                        K2Node_Select_Default_6                                          (None)
// class FText                        K2Node_Select_Default_7                                          (None)
// class FText                        K2Node_Select_Default_8                                          (ConstParm)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::SetLoadoutStoryCombinedText(int32 Loadout, enum class EPlayerBackground Background, class FText Story7_Loadout_4, class FText Story7_Loadout_3, class FText Story7_Loadout_2, class FText Story7_Loadout_1, class FText Story6_Loadout_4, class FText Story6_Loadout_3, class FText Story6_Loadout_2, class FText Story6_Loadout_1, class FText Story5_Loadout_4, class FText Story5_Loadout_3, class FText Story5_Loadout_2, class FText Story5_Loadout_1, class FText Story4_Loadout_4, class FText Story4_Loadout_3, class FText Story4_Loadout_2, class FText Story4_Loadout_1, class FText Story3_Loadout_4, class FText Story3_Loadout_3, class FText Story3_Loadout_2, class FText Story3_Loadout_1, class FText Story2_Loadout_4, class FText Story2_Loadout_3, class FText Story2_Loadout_2, class FText Story2_Loadout_1, class FText Story1_Loadout4, class FText Story1_Loadout3, class FText Story1_Loadout2, class FText Story1_Loadout1, enum class EPlayerBackground Temp_byte_Variable, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class FText K2Node_Select_Default_7, class FText K2Node_Select_Default_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "SetLoadoutStoryCombinedText");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_SetLoadoutStoryCombinedText_Params Parms{};

	Parms.Loadout = Loadout;
	Parms.Background = Background;
	Parms.Story7_Loadout_4 = Story7_Loadout_4;
	Parms.Story7_Loadout_3 = Story7_Loadout_3;
	Parms.Story7_Loadout_2 = Story7_Loadout_2;
	Parms.Story7_Loadout_1 = Story7_Loadout_1;
	Parms.Story6_Loadout_4 = Story6_Loadout_4;
	Parms.Story6_Loadout_3 = Story6_Loadout_3;
	Parms.Story6_Loadout_2 = Story6_Loadout_2;
	Parms.Story6_Loadout_1 = Story6_Loadout_1;
	Parms.Story5_Loadout_4 = Story5_Loadout_4;
	Parms.Story5_Loadout_3 = Story5_Loadout_3;
	Parms.Story5_Loadout_2 = Story5_Loadout_2;
	Parms.Story5_Loadout_1 = Story5_Loadout_1;
	Parms.Story4_Loadout_4 = Story4_Loadout_4;
	Parms.Story4_Loadout_3 = Story4_Loadout_3;
	Parms.Story4_Loadout_2 = Story4_Loadout_2;
	Parms.Story4_Loadout_1 = Story4_Loadout_1;
	Parms.Story3_Loadout_4 = Story3_Loadout_4;
	Parms.Story3_Loadout_3 = Story3_Loadout_3;
	Parms.Story3_Loadout_2 = Story3_Loadout_2;
	Parms.Story3_Loadout_1 = Story3_Loadout_1;
	Parms.Story2_Loadout_4 = Story2_Loadout_4;
	Parms.Story2_Loadout_3 = Story2_Loadout_3;
	Parms.Story2_Loadout_2 = Story2_Loadout_2;
	Parms.Story2_Loadout_1 = Story2_Loadout_1;
	Parms.Story1_Loadout4 = Story1_Loadout4;
	Parms.Story1_Loadout3 = Story1_Loadout3;
	Parms.Story1_Loadout2 = Story1_Loadout2;
	Parms.Story1_Loadout1 = Story1_Loadout1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.GetLoadoutScore
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FPlayerLoadout              CallFunc_TryGetPlayerLoadoutData_OutLoadoutData                  (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetPlayerLoadoutData_OutBranches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoadoutScore_Score                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::GetLoadoutScore(const struct FPlayerLoadoutDataReference& InputPin, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, int32 CallFunc_GetLoadoutScore_Score, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "GetLoadoutScore");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_GetLoadoutScore_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutLoadoutData = CallFunc_TryGetPlayerLoadoutData_OutLoadoutData;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutBranches = CallFunc_TryGetPlayerLoadoutData_OutBranches;
	Parms.CallFunc_GetLoadoutScore_Score = CallFunc_GetLoadoutScore_Score;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Extreme_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::Get_Extreme_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "Get_Extreme_ToolTipWidget");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Extreme_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Hard_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::Get_Hard_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "Get_Hard_ToolTipWidget");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Hard_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Medium_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::Get_Medium_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "Get_Medium_ToolTipWidget");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Medium_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Get_Easy_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::Get_Easy_ToolTipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "Get_Easy_ToolTipWidget");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_Get_Easy_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.RefreshSelectedOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       CallFunc_GetPlayerBackground_OutBackground                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout        (HasGetValueTypeHash)
// struct FPlayerLoadout              CallFunc_TryGetPlayerLoadoutData_OutLoadoutData                  (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetPlayerLoadoutData_OutBranches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLoadoutScore_ReturnValue                             (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_UI_Text_TruncationCheck_ReturnValue                     (None)
// TArray<struct FPlayerLoadoutDataReference>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::RefreshSelectedOption(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, const struct FPlayerLoadoutDataReference& CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout, const struct FPlayerLoadout& CallFunc_TryGetPlayerLoadoutData_OutLoadoutData, enum class EGetResult CallFunc_TryGetPlayerLoadoutData_OutBranches, class FText CallFunc_GetLoadoutScore_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_UI_Text_TruncationCheck_ReturnValue, TArray<struct FPlayerLoadoutDataReference>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FPlayerLoadoutDataReference& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "RefreshSelectedOption");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_RefreshSelectedOption_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerBackground_OutBackground = CallFunc_GetPlayerBackground_OutBackground;
	Parms.CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout = CallFunc_GetSelectedInitialLoadout_SelectedInitialLoadout;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutLoadoutData = CallFunc_TryGetPlayerLoadoutData_OutLoadoutData;
	Parms.CallFunc_TryGetPlayerLoadoutData_OutBranches = CallFunc_TryGetPlayerLoadoutData_OutBranches;
	Parms.CallFunc_GetLoadoutScore_ReturnValue = CallFunc_GetLoadoutScore_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_UI_Text_TruncationCheck_ReturnValue = CallFunc_UI_Text_TruncationCheck_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue = CallFunc_EqualEqual_FPlayerLoadoutDataReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_BndEvt__WBP_CC_DynamicSubPanel_Difficulty_Equipment_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_4_PickerEntryUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "OnAddedToFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "OnRemovedFromFocusPath");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Difficulty_Equipment.WBP_CC_DynamicSubPanel_Difficulty_Equipment_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment(int32 EntryPoint, int32 Temp_int_Variable, enum class ERealmDifficulty Temp_byte_Variable, enum class ERealmDifficulty Temp_byte_Variable_1, enum class ERealmDifficulty Temp_byte_Variable_2, enum class ERealmDifficulty Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, enum class ERealmDifficulty K2Node_Select_Default, int32 Temp_int_Variable_1, const struct FPlayerLoadoutDataReference& K2Node_Select_Default_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Difficulty_Equipment_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment");

	Params::UWBP_CC_DynamicSubPanel_Difficulty_Equipment_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Difficulty_Equipment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


