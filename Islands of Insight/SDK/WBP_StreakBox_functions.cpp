#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StreakBox.WBP_StreakBox_C
// (None)

class UClass* UWBP_StreakBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StreakBox_C");

	return Clss;
}


// WBP_StreakBox_C WBP_StreakBox.Default__WBP_StreakBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StreakBox_C* UWBP_StreakBox_C::GetDefaultObj()
{
	static class UWBP_StreakBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StreakBox_C*>(UWBP_StreakBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StreakBox.WBP_StreakBox_C.BP_Init
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StreakBox_C::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StreakBox_C", "BP_Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StreakBox.WBP_StreakBox_C.BP_UpdateStreak
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        StreakMessage                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StreakBox_C::BP_UpdateStreak(class FText& StreakMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StreakBox_C", "BP_UpdateStreak");

	Params::UWBP_StreakBox_C_BP_UpdateStreak_Params Parms{};

	Parms.StreakMessage = StreakMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StreakBox.WBP_StreakBox_C.BP_UpdateSolvedCount
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SolvedMessage                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StreakBox_C::BP_UpdateSolvedCount(class FText& SolvedMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StreakBox_C", "BP_UpdateSolvedCount");

	Params::UWBP_StreakBox_C_BP_UpdateSolvedCount_Params Parms{};

	Parms.SolvedMessage = SolvedMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StreakBox.WBP_StreakBox_C.BP_UpdateTier
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StreakBox_C::BP_UpdateTier(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StreakBox_C", "BP_UpdateTier");

	Params::UWBP_StreakBox_C_BP_UpdateTier_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StreakBox.WBP_StreakBox_C.ExecuteUbergraph_WBP_StreakBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_tier                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_streakMessage                                       (ConstParm)
// class FText                        K2Node_Event_solvedMessage                                       (ConstParm)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StreakBox_C::ExecuteUbergraph_WBP_StreakBox(int32 EntryPoint, int32 K2Node_Event_tier, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class FText K2Node_Event_streakMessage, class FText K2Node_Event_solvedMessage, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StreakBox_C", "ExecuteUbergraph_WBP_StreakBox");

	Params::UWBP_StreakBox_C_ExecuteUbergraph_WBP_StreakBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_tier = K2Node_Event_tier;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_Event_streakMessage = K2Node_Event_streakMessage;
	Parms.K2Node_Event_solvedMessage = K2Node_Event_solvedMessage;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


