#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_CallFunctionOnGameMode.IEft_CallFunctionOnGameMode_C
// (None)

class UClass* UIEft_CallFunctionOnGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_CallFunctionOnGameMode_C");

	return Clss;
}


// IEft_CallFunctionOnGameMode_C IEft_CallFunctionOnGameMode.Default__IEft_CallFunctionOnGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_CallFunctionOnGameMode_C* UIEft_CallFunctionOnGameMode_C::GetDefaultObj()
{
	static class UIEft_CallFunctionOnGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_CallFunctionOnGameMode_C*>(UIEft_CallFunctionOnGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_CallFunctionOnGameMode.IEft_CallFunctionOnGameMode_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_CallFunctionOnGameMode_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_CallFunctionOnGameMode_C", "OnAppliedBP");

	Params::UIEft_CallFunctionOnGameMode_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_CallFunctionOnGameMode.IEft_CallFunctionOnGameMode_C.ExecuteUbergraph_IEft_CallFunctionOnGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_CallFunctionOnGameMode_C::ExecuteUbergraph_IEft_CallFunctionOnGameMode(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class AGameModeBase* CallFunc_GetGameMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_CallFunctionOnGameMode_C", "ExecuteUbergraph_IEft_CallFunctionOnGameMode");

	Params::UIEft_CallFunctionOnGameMode_C_ExecuteUbergraph_IEft_CallFunctionOnGameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


