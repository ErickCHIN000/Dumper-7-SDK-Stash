#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C
// (Actor)

class UClass* ABP_ThroneRoom_MainDoors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThroneRoom_MainDoors_C");

	return Clss;
}


// BP_ThroneRoom_MainDoors_C BP_ThroneRoom_MainDoors.Default__BP_ThroneRoom_MainDoors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThroneRoom_MainDoors_C* ABP_ThroneRoom_MainDoors_C::GetDefaultObj()
{
	static class ABP_ThroneRoom_MainDoors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThroneRoom_MainDoors_C*>(ABP_ThroneRoom_MainDoors_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.OnRep_DoorsOpen
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThroneRoom_MainDoors_C::OnRep_DoorsOpen(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_MainDoors_C", "OnRep_DoorsOpen");

	Params::ABP_ThroneRoom_MainDoors_C_OnRep_DoorsOpen_Params Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_MainDoors_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_MainDoors_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.OpenDoors
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     ScannedGoat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_MainDoors_C::OpenDoors(class AGGGoat* ScannedGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_MainDoors_C", "OpenDoors");

	Params::ABP_ThroneRoom_MainDoors_C_OpenDoors_Params Parms{};

	Parms.ScannedGoat = ScannedGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.PlayDoorOpenSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_MainDoors_C::PlayDoorOpenSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_MainDoors_C", "PlayDoorOpenSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C.ExecuteUbergraph_BP_ThroneRoom_MainDoors
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_ScannedGoat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_MainDoors_C::ExecuteUbergraph_BP_ThroneRoom_MainDoors(int32 EntryPoint, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue, class AGGGoat* K2Node_CustomEvent_ScannedGoat, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_MainDoors_C", "ExecuteUbergraph_BP_ThroneRoom_MainDoors");

	Params::ABP_ThroneRoom_MainDoors_C_ExecuteUbergraph_BP_ThroneRoom_MainDoors_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue = CallFunc_IsQuestStepCompleted_ReturnValue;
	Parms.K2Node_CustomEvent_ScannedGoat = K2Node_CustomEvent_ScannedGoat;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


