#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_Instincts.BP_Achievement_Instincts_C
// (Actor)

class UClass* ABP_Achievement_Instincts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_Instincts_C");

	return Clss;
}


// BP_Achievement_Instincts_C BP_Achievement_Instincts.Default__BP_Achievement_Instincts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_Instincts_C* ABP_Achievement_Instincts_C::GetDefaultObj()
{
	static class ABP_Achievement_Instincts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_Instincts_C*>(ABP_Achievement_Instincts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_Instincts.BP_Achievement_Instincts_C.HasMetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsClient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsIsland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGQuestManager*             CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedAllInstincts_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Achievement_Instincts_C::HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedAllInstincts_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Instincts_C", "HasMetRequirements");

	Params::ABP_Achievement_Instincts_C_HasMetRequirements_Params Parms{};

	Parms.bIsClient = bIsClient;
	Parms.bIsMainMenu = bIsMainMenu;
	Parms.bIsIsland = bIsIsland;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedAllInstincts_ReturnValue = CallFunc_HasCompletedAllInstincts_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Achievement_Instincts.BP_Achievement_Instincts_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_Instincts_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Instincts_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_Instincts.BP_Achievement_Instincts_C.ExecuteUbergraph_BP_Achievement_Instincts
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Instincts_C::ExecuteUbergraph_BP_Achievement_Instincts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Instincts_C", "ExecuteUbergraph_BP_Achievement_Instincts");

	Params::ABP_Achievement_Instincts_C_ExecuteUbergraph_BP_Achievement_Instincts_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


