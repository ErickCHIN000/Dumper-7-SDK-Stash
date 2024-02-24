#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuestInfoContainer.WBP_QuestInfoContainer_C
// (None)

class UClass* UWBP_QuestInfoContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuestInfoContainer_C");

	return Clss;
}


// WBP_QuestInfoContainer_C WBP_QuestInfoContainer.Default__WBP_QuestInfoContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuestInfoContainer_C* UWBP_QuestInfoContainer_C::GetDefaultObj()
{
	static class UWBP_QuestInfoContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuestInfoContainer_C*>(UWBP_QuestInfoContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QuestInfoContainer.WBP_QuestInfoContainer_C.BPI_SlideIn
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWorldQuest*                 Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestInfoContainer_C::BPI_SlideIn(class UWorldQuest* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestInfoContainer_C", "BPI_SlideIn");

	Params::UWBP_QuestInfoContainer_C_BPI_SlideIn_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuestInfoContainer.WBP_QuestInfoContainer_C.ExecuteUbergraph_WBP_QuestInfoContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWorldQuest*                 K2Node_Event_quest                                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuestInfoContainer_C::ExecuteUbergraph_WBP_QuestInfoContainer(int32 EntryPoint, class UWorldQuest* K2Node_Event_quest, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuestInfoContainer_C", "ExecuteUbergraph_WBP_QuestInfoContainer");

	Params::UWBP_QuestInfoContainer_C_ExecuteUbergraph_WBP_QuestInfoContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_quest = K2Node_Event_quest;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


