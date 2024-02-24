#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DailyQuestRewards.WBP_DailyQuestRewards_C
// (None)

class UClass* UWBP_DailyQuestRewards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DailyQuestRewards_C");

	return Clss;
}


// WBP_DailyQuestRewards_C WBP_DailyQuestRewards.Default__WBP_DailyQuestRewards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DailyQuestRewards_C* UWBP_DailyQuestRewards_C::GetDefaultObj()
{
	static class UWBP_DailyQuestRewards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DailyQuestRewards_C*>(UWBP_DailyQuestRewards_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DailyQuestRewards.WBP_DailyQuestRewards_C.InitializeImageandText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorldQuest*                 Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DailyQuestRewards_C::InitializeImageandText(class UWorldQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestRewards_C", "InitializeImageandText");

	Params::UWBP_DailyQuestRewards_C_InitializeImageandText_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DailyQuestRewards.WBP_DailyQuestRewards_C.ExecuteUbergraph_WBP_DailyQuestRewards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldQuest*                 K2Node_CustomEvent_Quest                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXPReward_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGoldReward_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBlueOrbReward_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DailyQuestRewards_C::ExecuteUbergraph_WBP_DailyQuestRewards(int32 EntryPoint, class UWorldQuest* K2Node_CustomEvent_Quest, int32 CallFunc_GetXPReward_ReturnValue, int32 CallFunc_GetGoldReward_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetBlueOrbReward_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DailyQuestRewards_C", "ExecuteUbergraph_WBP_DailyQuestRewards");

	Params::UWBP_DailyQuestRewards_C_ExecuteUbergraph_WBP_DailyQuestRewards_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_GetXPReward_ReturnValue = CallFunc_GetXPReward_ReturnValue;
	Parms.CallFunc_GetGoldReward_ReturnValue = CallFunc_GetGoldReward_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBlueOrbReward_ReturnValue = CallFunc_GetBlueOrbReward_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


