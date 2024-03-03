#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_02_quest_mini_entry.w_02_quest_mini_entry_C
// (None)

class UClass* UW_02_quest_mini_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_02_quest_mini_entry_C");

	return Clss;
}


// w_02_quest_mini_entry_C w_02_quest_mini_entry.Default__w_02_quest_mini_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_02_quest_mini_entry_C* UW_02_quest_mini_entry_C::GetDefaultObj()
{
	static class UW_02_quest_mini_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_02_quest_mini_entry_C*>(UW_02_quest_mini_entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_02_quest_mini_entry.w_02_quest_mini_entry_C.init_quest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_quest_mini_entry_C::Init_quest(class Abp_quest_actor_C* Quest_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_quest_mini_entry_C", "init_quest");

	Params::UW_02_quest_mini_entry_C_Init_quest_Params Parms{};

	Parms.Quest_actor = Quest_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_quest_mini_entry.w_02_quest_mini_entry_C.ExecuteUbergraph_w_02_quest_mini_entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_06_objective_entry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_quest_mini_entry_C::ExecuteUbergraph_w_02_quest_mini_entry(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FS_quest_objective_data& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_06_objective_entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_quest_mini_entry_C", "ExecuteUbergraph_w_02_quest_mini_entry");

	Params::UW_02_quest_mini_entry_C_ExecuteUbergraph_w_02_quest_mini_entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


