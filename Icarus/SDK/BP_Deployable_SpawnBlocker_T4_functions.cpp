#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C
// (Actor)

class UClass* ABP_Deployable_SpawnBlocker_T4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deployable_SpawnBlocker_T4_C");

	return Clss;
}


// BP_Deployable_SpawnBlocker_T4_C BP_Deployable_SpawnBlocker_T4.Default__BP_Deployable_SpawnBlocker_T4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deployable_SpawnBlocker_T4_C* ABP_Deployable_SpawnBlocker_T4_C::GetDefaultObj()
{
	static class ABP_Deployable_SpawnBlocker_T4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deployable_SpawnBlocker_T4_C*>(ABP_Deployable_SpawnBlocker_T4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.UpdateSpawnBlockerEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Deployable_SpawnBlocker_T4_C::UpdateSpawnBlockerEffects(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_T4_C", "UpdateSpawnBlockerEffects");

	Params::ABP_Deployable_SpawnBlocker_T4_C_UpdateSpawnBlockerEffects_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.OnEnergyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Deployable_SpawnBlocker_T4_C::OnEnergyStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_T4_C", "OnEnergyStateUpdated");

	Params::ABP_Deployable_SpawnBlocker_T4_C_OnEnergyStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C.ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Deployable_SpawnBlocker_T4_C::ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4(int32 EntryPoint, bool K2Node_Event_IsActive, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployable_SpawnBlocker_T4_C", "ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4");

	Params::ABP_Deployable_SpawnBlocker_T4_C_ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsActive = K2Node_Event_IsActive;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


