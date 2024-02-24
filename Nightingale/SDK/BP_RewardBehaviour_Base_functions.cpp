#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Base.BP_RewardBehaviour_Base_C
// (None)

class UClass* UBP_RewardBehaviour_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Base_C");

	return Clss;
}


// BP_RewardBehaviour_Base_C BP_RewardBehaviour_Base.Default__BP_RewardBehaviour_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Base_C* UBP_RewardBehaviour_Base_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Base_C*>(UBP_RewardBehaviour_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Base.BP_RewardBehaviour_Base_C.GetDebugText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        DebugText                                                        (Parm, OutParm)

void UBP_RewardBehaviour_Base_C::GetDebugText(class FText* DebugText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Base_C", "GetDebugText");

	Params::UBP_RewardBehaviour_Base_C_GetDebugText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugText != nullptr)
		*DebugText = Parms.DebugText;

}


// Function BP_RewardBehaviour_Base.BP_RewardBehaviour_Base_C.GetDebugDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      OutDescription                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetDebugText_DebugText                                  (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_RewardBehaviour_Base_C::GetDebugDescription(class FString& OutDescription, class FText CallFunc_GetDebugText_DebugText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Base_C", "GetDebugDescription");

	Params::UBP_RewardBehaviour_Base_C_GetDebugDescription_Params Parms{};

	Parms.OutDescription = OutDescription;
	Parms.CallFunc_GetDebugText_DebugText = CallFunc_GetDebugText_DebugText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


