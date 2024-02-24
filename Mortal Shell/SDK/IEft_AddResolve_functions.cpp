#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_AddResolve.IEft_AddResolve_C
// (None)

class UClass* UIEft_AddResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_AddResolve_C");

	return Clss;
}


// IEft_AddResolve_C IEft_AddResolve.Default__IEft_AddResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_AddResolve_C* UIEft_AddResolve_C::GetDefaultObj()
{
	static class UIEft_AddResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_AddResolve_C*>(UIEft_AddResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_AddResolve.IEft_AddResolve_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_AddResolve_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddResolve_C", "OnAppliedBP");

	Params::UIEft_AddResolve_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_AddResolve.IEft_AddResolve_C.ExecuteUbergraph_IEft_AddResolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ServerSetHealth_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_AddResolve_C::ExecuteUbergraph_IEft_AddResolve(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, float K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_ServerSetHealth_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddResolve_C", "ExecuteUbergraph_IEft_AddResolve");

	Params::UIEft_AddResolve_C_ExecuteUbergraph_IEft_AddResolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_ServerSetHealth_Success = CallFunc_ServerSetHealth_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


