#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C
// (None)

class UClass* UWBP_Quests_QuestEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Quests_QuestEntry_C");

	return Clss;
}


// WBP_Quests_QuestEntry_C WBP_Quests_QuestEntry.Default__WBP_Quests_QuestEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Quests_QuestEntry_C* UWBP_Quests_QuestEntry_C::GetDefaultObj()
{
	static class UWBP_Quests_QuestEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Quests_QuestEntry_C*>(UWBP_Quests_QuestEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.SetTaskProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        NewTaskProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Quests_QuestEntry_C::SetTaskProgress(const struct FOngoingTaskProgress& NewTaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "SetTaskProgress");

	Params::UWBP_Quests_QuestEntry_C_SetTaskProgress_Params Parms{};

	Parms.NewTaskProgress = NewTaskProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.GetTaskProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (Parm, OutParm)

void UWBP_Quests_QuestEntry_C::GetTaskProgress(struct FOngoingTaskProgress* TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "GetTaskProgress");

	Params::UWBP_Quests_QuestEntry_C_GetTaskProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TaskProgress != nullptr)
		*TaskProgress = std::move(Parms.TaskProgress);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.SetContractState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Contract_StateType    NewContractState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quests_QuestEntry_C::SetContractState(enum class E_Contract_StateType NewContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "SetContractState");

	Params::UWBP_Quests_QuestEntry_C_SetContractState_Params Parms{};

	Parms.NewContractState = NewContractState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.GetContractState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_Contract_StateType    ContractState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quests_QuestEntry_C::GetContractState(enum class E_Contract_StateType* ContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "GetContractState");

	Params::UWBP_Quests_QuestEntry_C_GetContractState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ContractState != nullptr)
		*ContractState = Parms.ContractState;

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Quests_QuestEntry_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Quests_QuestEntry_C::BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Quests_QuestEntry_C::BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Quests_QuestEntry_C::BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "BndEvt__Button_Network_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Quests_QuestEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.ExecuteUbergraph_WBP_Quests_QuestEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_UI_Text_TruncationCheck_ReturnValue                     (None)

void UWBP_Quests_QuestEntry_C::ExecuteUbergraph_WBP_Quests_QuestEntry(int32 EntryPoint, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, class FText CallFunc_UI_Text_TruncationCheck_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "ExecuteUbergraph_WBP_Quests_QuestEntry");

	Params::UWBP_Quests_QuestEntry_C_ExecuteUbergraph_WBP_Quests_QuestEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_UI_Text_TruncationCheck_ReturnValue = CallFunc_UI_Text_TruncationCheck_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.QuestEntryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quests_QuestEntry_C::QuestEntryHovered__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "QuestEntryHovered__DelegateSignature");

	Params::UWBP_Quests_QuestEntry_C_QuestEntryHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.QuestEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Quests_QuestEntry_C::QuestEntrySelected__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Quests_QuestEntry_C", "QuestEntrySelected__DelegateSignature");

	Params::UWBP_Quests_QuestEntry_C_QuestEntrySelected__DelegateSignature_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}

}


