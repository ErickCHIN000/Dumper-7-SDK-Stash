#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DailyQuestCoins.WBP_DailyQuestCoins_C
// (None)

class UClass* UWBP_DailyQuestCoins_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DailyQuestCoins_C");

	return Clss;
}


// WBP_DailyQuestCoins_C WBP_DailyQuestCoins.Default__WBP_DailyQuestCoins_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DailyQuestCoins_C* UWBP_DailyQuestCoins_C::GetDefaultObj()
{
	static class UWBP_DailyQuestCoins_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DailyQuestCoins_C*>(UWBP_DailyQuestCoins_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DailyQuestCoins.WBP_DailyQuestCoins_C.ShowCoinAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Reward                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DailyQuestCoins_C::ShowCoinAnimation(int32 Reward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestCoins_C", "ShowCoinAnimation");

	Params::UWBP_DailyQuestCoins_C_ShowCoinAnimation_Params Parms{};

	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DailyQuestCoins.WBP_DailyQuestCoins_C.ExecuteUbergraph_WBP_DailyQuestCoins
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BPC_GetCoinsInfo_AdditionalCoins                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BPC_GetCoinsInfo_TotalCoins                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Reward                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DailyQuestCoins_C::ExecuteUbergraph_WBP_DailyQuestCoins(int32 EntryPoint, int32 CallFunc_BPC_GetCoinsInfo_AdditionalCoins, int32 CallFunc_BPC_GetCoinsInfo_TotalCoins, int32 K2Node_CustomEvent_Reward, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestCoins_C", "ExecuteUbergraph_WBP_DailyQuestCoins");

	Params::UWBP_DailyQuestCoins_C_ExecuteUbergraph_WBP_DailyQuestCoins_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BPC_GetCoinsInfo_AdditionalCoins = CallFunc_BPC_GetCoinsInfo_AdditionalCoins;
	Parms.CallFunc_BPC_GetCoinsInfo_TotalCoins = CallFunc_BPC_GetCoinsInfo_TotalCoins;
	Parms.K2Node_CustomEvent_Reward = K2Node_CustomEvent_Reward;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


