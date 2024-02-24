#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NewAutoQuest.WBP_NewAutoQuest_C
// (None)

class UClass* UWBP_NewAutoQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NewAutoQuest_C");

	return Clss;
}


// WBP_NewAutoQuest_C WBP_NewAutoQuest.Default__WBP_NewAutoQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NewAutoQuest_C* UWBP_NewAutoQuest_C::GetDefaultObj()
{
	static class UWBP_NewAutoQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NewAutoQuest_C*>(UWBP_NewAutoQuest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NewAutoQuest.WBP_NewAutoQuest_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NewAutoQuest_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewAutoQuest_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewAutoQuest.WBP_NewAutoQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NewAutoQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewAutoQuest_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewAutoQuest.WBP_NewAutoQuest_C.ExecuteUbergraph_WBP_NewAutoQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewAutoQuest_C::ExecuteUbergraph_WBP_NewAutoQuest(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewAutoQuest_C", "ExecuteUbergraph_WBP_NewAutoQuest");

	Params::UWBP_NewAutoQuest_C_ExecuteUbergraph_WBP_NewAutoQuest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


