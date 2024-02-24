#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoneChallenge.StoneChallenge_C
// (None)

class UClass* UStoneChallenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoneChallenge_C");

	return Clss;
}


// StoneChallenge_C StoneChallenge.Default__StoneChallenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoneChallenge_C* UStoneChallenge_C::GetDefaultObj()
{
	static class UStoneChallenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoneChallenge_C*>(UStoneChallenge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoneChallenge.StoneChallenge_C.BreakStoneChallenge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoneChallenge_C::BreakStoneChallenge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoneChallenge_C", "BreakStoneChallenge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoneChallenge.StoneChallenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoneChallenge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoneChallenge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoneChallenge.StoneChallenge_C.ExecuteUbergraph_StoneChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoneChallenge_C::ExecuteUbergraph_StoneChallenge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoneChallenge_C", "ExecuteUbergraph_StoneChallenge");

	Params::UStoneChallenge_C_ExecuteUbergraph_StoneChallenge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


