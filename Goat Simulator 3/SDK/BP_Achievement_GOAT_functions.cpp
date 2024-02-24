#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_GOAT.BP_Achievement_GOAT_C
// (Actor)

class UClass* ABP_Achievement_GOAT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_GOAT_C");

	return Clss;
}


// BP_Achievement_GOAT_C BP_Achievement_GOAT.Default__BP_Achievement_GOAT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_GOAT_C* ABP_Achievement_GOAT_C::GetDefaultObj()
{
	static class ABP_Achievement_GOAT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_GOAT_C*>(ABP_Achievement_GOAT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_GOAT.BP_Achievement_GOAT_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_GOAT_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_GOAT_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_GOAT.BP_Achievement_GOAT_C.OnCompletedAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AchievementID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Achievement_GOAT_C::OnCompletedAchievement(const class FString& AchievementID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_GOAT_C", "OnCompletedAchievement");

	Params::ABP_Achievement_GOAT_C_OnCompletedAchievement_Params Parms{};

	Parms.AchievementID = AchievementID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_GOAT.BP_Achievement_GOAT_C.ExecuteUbergraph_BP_Achievement_GOAT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AchievementID                                 (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_GOAT_C::ExecuteUbergraph_BP_Achievement_GOAT(int32 EntryPoint, const class FString& K2Node_CustomEvent_AchievementID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_GOAT_C", "ExecuteUbergraph_BP_Achievement_GOAT");

	Params::ABP_Achievement_GOAT_C_ExecuteUbergraph_BP_Achievement_GOAT_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AchievementID = K2Node_CustomEvent_AchievementID;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


