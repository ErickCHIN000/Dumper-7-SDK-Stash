#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_QuestHelper.UMG_QuestHelper_C
// (None)

class UClass* UUMG_QuestHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_QuestHelper_C");

	return Clss;
}


// UMG_QuestHelper_C UMG_QuestHelper.Default__UMG_QuestHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_QuestHelper_C* UUMG_QuestHelper_C::GetDefaultObj()
{
	static class UUMG_QuestHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_QuestHelper_C*>(UUMG_QuestHelper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_QuestHelper.UMG_QuestHelper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_QuestHelper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestHelper_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_QuestHelper.UMG_QuestHelper_C.ExecuteUbergraph_UMG_QuestHelper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_QuestHelper_C::ExecuteUbergraph_UMG_QuestHelper(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestHelper_C", "ExecuteUbergraph_UMG_QuestHelper");

	Params::UUMG_QuestHelper_C_ExecuteUbergraph_UMG_QuestHelper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


