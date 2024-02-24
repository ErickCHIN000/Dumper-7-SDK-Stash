#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ExpRewardLarge.UMG_ExpRewardLarge_C
// (None)

class UClass* UUMG_ExpRewardLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ExpRewardLarge_C");

	return Clss;
}


// UMG_ExpRewardLarge_C UMG_ExpRewardLarge.Default__UMG_ExpRewardLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ExpRewardLarge_C* UUMG_ExpRewardLarge_C::GetDefaultObj()
{
	static class UUMG_ExpRewardLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ExpRewardLarge_C*>(UUMG_ExpRewardLarge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ExpRewardLarge.UMG_ExpRewardLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ExpRewardLarge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExpRewardLarge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ExpRewardLarge.UMG_ExpRewardLarge_C.UpdateValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ExpRewardLarge_C::UpdateValue(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExpRewardLarge_C", "UpdateValue");

	Params::UUMG_ExpRewardLarge_C_UpdateValue_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExpRewardLarge.UMG_ExpRewardLarge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ExpRewardLarge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExpRewardLarge_C", "PreConstruct");

	Params::UUMG_ExpRewardLarge_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ExpRewardLarge.UMG_ExpRewardLarge_C.ExecuteUbergraph_UMG_ExpRewardLarge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UUMG_ExpRewardLarge_C::ExecuteUbergraph_UMG_ExpRewardLarge(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Amount, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ExpRewardLarge_C", "ExecuteUbergraph_UMG_ExpRewardLarge");

	Params::UUMG_ExpRewardLarge_C_ExecuteUbergraph_UMG_ExpRewardLarge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


