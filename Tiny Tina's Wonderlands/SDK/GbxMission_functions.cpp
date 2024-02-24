#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxMission.MissionRewardData
// (None)

class UClass* UMissionRewardData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionRewardData");

	return Clss;
}


// MissionRewardData GbxMission.Default__MissionRewardData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionRewardData* UMissionRewardData::GetDefaultObj()
{
	static class UMissionRewardData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionRewardData*>(UMissionRewardData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionGraph
// (None)

class UClass* UMissionGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGraph");

	return Clss;
}


// MissionGraph GbxMission.Default__MissionGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionGraph* UMissionGraph::GetDefaultObj()
{
	static class UMissionGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGraph*>(UMissionGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.GlobalMissionGraph
// (None)

class UClass* UGlobalMissionGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalMissionGraph");

	return Clss;
}


// GlobalMissionGraph GbxMission.Default__GlobalMissionGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalMissionGraph* UGlobalMissionGraph::GetDefaultObj()
{
	static class UGlobalMissionGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalMissionGraph*>(UGlobalMissionGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.Mission
// (None)

class UClass* UMission::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission");

	return Clss;
}


// Mission GbxMission.Default__Mission
// (Public, ClassDefaultObject, ArchetypeObject)

class UMission* UMission::GetDefaultObj()
{
	static class UMission* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission*>(UMission::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.Mission.UpdateObjective
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::UpdateObjective(class UMissionObjective* Objective, class UObject* Context, uint8 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "UpdateObjective");

	Params::UMission_UpdateObjective_Params Parms{};

	Parms.Objective = Objective;
	Parms.Context = Context;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.UnpauseObjectiveChain
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::UnpauseObjectiveChain(class UMissionObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "UnpauseObjectiveChain");

	Params::UMission_UnpauseObjectiveChain_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*           ObjectiveToThwart                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjectiveSet*        ObjectiveSet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bJumpToSet                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "ThwartObjectiveAndAdvanceObjectiveSet");

	Params::UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params Parms{};

	Parms.ObjectiveToThwart = ObjectiveToThwart;
	Parms.ObjectiveSet = ObjectiveSet;
	Parms.bJumpToSet = bJumpToSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.StopMissionTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMission::StopMissionTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "StopMissionTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.StartMissionTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMission::StartMissionTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "StartMissionTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.MissionTimerExpired
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionTimerExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionTimerExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionRemoteEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMission::MissionRemoteEvent(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionRemoteEvent");

	Params::UMission_MissionRemoteEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.Mission.MissionNotStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionNotStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionNotStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionGameModeEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMission::MissionGameModeEvent(class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionGameModeEvent");

	Params::UMission_MissionGameModeEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.Mission.MissionFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionCompleteLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionCompleteLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionCompleteLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionActiveLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionActiveLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionActiveLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.MissionActive
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission::MissionActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "MissionActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxMission.Mission.JumpToObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*        ObjectiveSet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsBranchingMission                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "JumpToObjectiveSet");

	Params::UMission_JumpToObjectiveSet_Params Parms{};

	Parms.ObjectiveSet = ObjectiveSet;
	Parms.bIsBranchingMission = bIsBranchingMission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.GetPausableChainedObjectivesList
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class UMissionObjective*>   ObjectivesList                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMission::GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "GetPausableChainedObjectivesList");

	Params::UMission_GetPausableChainedObjectivesList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectivesList != nullptr)
		*ObjectivesList = std::move(Parms.ObjectivesList);

}


// Function GbxMission.Mission.GetObjectivesList
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class UMissionObjective*>   ObjectivesList                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMission::GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "GetObjectivesList");

	Params::UMission_GetObjectivesList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectivesList != nullptr)
		*ObjectivesList = std::move(Parms.ObjectivesList);

}


// Function GbxMission.Mission.GetObjectiveSetsList
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class UMissionObjectiveSet*>ObjectiveSetsList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMission::GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "GetObjectiveSetsList");

	Params::UMission_GetObjectiveSetsList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectiveSetsList != nullptr)
		*ObjectiveSetsList = std::move(Parms.ObjectiveSetsList);

}


// Function GbxMission.Mission.GetMissionRemainingSeconds
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMission::GetMissionRemainingSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "GetMissionRemainingSeconds");

	Params::UMission_GetMissionRemainingSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.Mission.FailMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMission::FailMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "FailMission");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.EndKickoff
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMission::EndKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "EndKickoff");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.CompleteMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMission::CompleteMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "CompleteMission");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.ClearObjective
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::ClearObjective(class UMissionObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "ClearObjective");

	Params::UMission_ClearObjective_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.AdvanceObjectiveSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*        ObjectiveSet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "AdvanceObjectiveSet");

	Params::UMission_AdvanceObjectiveSet_Params Parms{};

	Parms.ObjectiveSet = ObjectiveSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.AddTimeToMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SecondsToAdd                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::AddTimeToMission(int32 SecondsToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "AddTimeToMission");

	Params::UMission_AddTimeToMission_Params Parms{};

	Parms.SecondsToAdd = SecondsToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.Mission.ActivateMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMissionObjectiveSet*        InitialObjectiveSet                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMission::ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission", "ActivateMission");

	Params::UMission_ActivateMission_Params Parms{};

	Parms.InitialObjectiveSet = InitialObjectiveSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionDirectorComponent
// (SceneComponent)

class UClass* UMissionDirectorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionDirectorComponent");

	return Clss;
}


// MissionDirectorComponent GbxMission.Default__MissionDirectorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionDirectorComponent* UMissionDirectorComponent::GetDefaultObj()
{
	static class UMissionDirectorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionDirectorComponent*>(UMissionDirectorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// enum class EMissionAvailableResult OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDirectorComponent::IsAnyMissionAvailable(enum class EMissionAvailableResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "IsAnyMissionAvailable");

	Params::UMissionDirectorComponent_IsAnyMissionAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// enum class EMissionActiveResult    OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDirectorComponent::IsAnyMissionActive(enum class EMissionActiveResult* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "IsAnyMissionActive");

	Params::UMissionDirectorComponent_IsAnyMissionActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function GbxMission.MissionDirectorComponent.GetAllMissions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TSubclassOf<class UMission>>AllMissions                                                      (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UMissionDirectorComponent::GetAllMissions(TArray<TSubclassOf<class UMission>>* AllMissions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "GetAllMissions");

	Params::UMissionDirectorComponent_GetAllMissions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AllMissions != nullptr)
		*AllMissions = std::move(Parms.AllMissions);

}


// Function GbxMission.MissionDirectorComponent.ClearMissions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMissionDirectorComponent::ClearMissions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "ClearMissions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDirectorComponent.AddMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMission>        InMission                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDirectorComponent::AddMission(TSubclassOf<class UMission> InMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "AddMission");

	Params::UMissionDirectorComponent_AddMission_Params Parms{};

	Parms.InMission = InMission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDirectorComponent.ActivateAvailableMission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UMissionDirectorComponent::ActivateAvailableMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDirectorComponent", "ActivateAvailableMission");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionIconComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMissionIconComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionIconComponent");

	return Clss;
}


// MissionIconComponent GbxMission.Default__MissionIconComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionIconComponent* UMissionIconComponent::GetDefaultObj()
{
	static class UMissionIconComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionIconComponent*>(UMissionIconComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionIconComponent.SetIconState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMissionIconState       InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionIconComponent::SetIconState(enum class EMissionIconState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "SetIconState");

	Params::UMissionIconComponent_SetIconState_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionIconComponent.SetIconEnabledCondition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCondition*               EnabledCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionIconComponent::SetIconEnabledCondition(class UGbxCondition* EnabledCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "SetIconEnabledCondition");

	Params::UMissionIconComponent_SetIconEnabledCondition_Params Parms{};

	Parms.EnabledCondition = EnabledCondition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionIconComponent.SetDisabledState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionIconComponent::SetDisabledState(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "SetDisabledState");

	Params::UMissionIconComponent_SetDisabledState_Params Parms{};

	Parms.bDisabled = bDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionIconComponent.OnRep_Enabled
// (Final, Native, Private)
// Parameters:
// bool                               bPreviouslyEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionIconComponent::OnRep_Enabled(bool bPreviouslyEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "OnRep_Enabled");

	Params::UMissionIconComponent_OnRep_Enabled_Params Parms{};

	Parms.bPreviouslyEnabled = bPreviouslyEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionIconComponent.IsIconEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionIconComponent::IsIconEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "IsIconEnabled");

	Params::UMissionIconComponent_IsIconEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionIconComponent.GetRequiredInterface
// (Final, Native, Public)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UMissionIconComponent::GetRequiredInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "GetRequiredInterface");

	Params::UMissionIconComponent_GetRequiredInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
// (Final, Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionIconComponent::EnabledConditionRequiresNativeClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionIconComponent", "EnabledConditionRequiresNativeClass");

	Params::UMissionIconComponent_EnabledConditionRequiresNativeClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxMission.MissionTrackerBase
// (Actor)

class UClass* AMissionTrackerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTrackerBase");

	return Clss;
}


// MissionTrackerBase GbxMission.Default__MissionTrackerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AMissionTrackerBase* AMissionTrackerBase::GetDefaultObj()
{
	static class AMissionTrackerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AMissionTrackerBase*>(AMissionTrackerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionTracker
// (Actor)

class UClass* AMissionTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTracker");

	return Clss;
}


// MissionTracker GbxMission.Default__MissionTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class AMissionTracker* AMissionTracker::GetDefaultObj()
{
	static class AMissionTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<AMissionTracker*>(AMissionTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionTracker.OnStatIncrement
// (Native, Public)
// Parameters:
// class AActor*                      StatContext                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameStatData*               StatId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMissionTracker::OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTracker", "OnStatIncrement");

	Params::AMissionTracker_OnStatIncrement_Params Parms{};

	Parms.StatContext = StatContext;
	Parms.StatId = StatId;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued
// (Final, Native, Public)
// Parameters:

void AMissionTracker::OnRep_LevelLoadEventsIssued()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTracker", "OnRep_LevelLoadEventsIssued");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionTracker.OnRep_ActiveIcons
// (Final, Native, Public)
// Parameters:

void AMissionTracker::OnRep_ActiveIcons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTracker", "OnRep_ActiveIcons");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.PlayerMissionComponent
// (None)

class UClass* UPlayerMissionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMissionComponent");

	return Clss;
}


// PlayerMissionComponent GbxMission.Default__PlayerMissionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMissionComponent* UPlayerMissionComponent::GetDefaultObj()
{
	static class UPlayerMissionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMissionComponent*>(UPlayerMissionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UPlayerMissionComponent::ServerTrackPreviousActiveMissionInList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ServerTrackPreviousActiveMissionInList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UPlayerMissionComponent::ServerTrackNextActiveMissionInList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ServerTrackNextActiveMissionInList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ServerSetTrackedMission(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ServerSetTrackedMission");

	Params::UPlayerMissionComponent_ServerSetTrackedMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMissionStatus          Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientUpdateMissionStatus(TSubclassOf<class UMission> MissionClass, enum class EMissionStatus Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientUpdateMissionStatus");

	Params::UPlayerMissionComponent_ClientUpdateMissionStatus_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjectiveSet*        ActiveObjectiveSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMissionObjective*>   DormantObjectives                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientUpdateActiveObjectiveSet(TSubclassOf<class UMission> MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*>& DormantObjectives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientUpdateActiveObjectiveSet");

	Params::UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.ActiveObjectiveSet = ActiveObjectiveSet;
	Parms.DormantObjectives = DormantObjectives;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientTrackedMissionChanged(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientTrackedMissionChanged");

	Params::UPlayerMissionComponent_ClientTrackedMissionChanged_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjective*           UpdatedObjective                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             ObjectiveBit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientObjectiveUpdated(TSubclassOf<class UMission> MissionClass, class UMissionObjective* UpdatedObjective, uint32 ObjectiveBit, uint8 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientObjectiveUpdated");

	Params::UPlayerMissionComponent_ClientObjectiveUpdated_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.UpdatedObjective = UpdatedObjective;
	Parms.ObjectiveBit = ObjectiveBit;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjectiveSet*        CompletedObjectiveSet                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientObjectiveSetCompleted(TSubclassOf<class UMission> MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientObjectiveSetCompleted");

	Params::UPlayerMissionComponent_ClientObjectiveSetCompleted_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.CompletedObjectiveSet = CompletedObjectiveSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjective*           ClearedObjective                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientObjectiveCleared(TSubclassOf<class UMission> MissionClass, class UMissionObjective* ClearedObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientObjectiveCleared");

	Params::UPlayerMissionComponent_ClientObjectiveCleared_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.ClearedObjective = ClearedObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientObjectiveChainUnpaused(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientObjectiveChainUnpaused");

	Params::UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientMissionTimerStopped(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientMissionTimerStopped");

	Params::UPlayerMissionComponent_ClientMissionTimerStopped_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientMissionTimerStarted(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientMissionTimerStarted");

	Params::UPlayerMissionComponent_ClientMissionTimerStarted_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SecondsToAdd                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientMissionTimerChanged(TSubclassOf<class UMission> MissionClass, float SecondsToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientMissionTimerChanged");

	Params::UPlayerMissionComponent_ClientMissionTimerChanged_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.SecondsToAdd = SecondsToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientMissionRegistered(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientMissionRegistered");

	Params::UPlayerMissionComponent_ClientMissionRegistered_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIssueActiveEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientDormantObjectiveRemoved(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientDormantObjectiveRemoved");

	Params::UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.Objective = Objective;
	Parms.bIssueActiveEvent = bIssueActiveEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMissionObjective*           Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerMissionComponent::ClientDormantObjectiveAdded(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMissionComponent", "ClientDormantObjectiveAdded");

	Params::UPlayerMissionComponent_ClientDormantObjectiveAdded_Params Parms{};

	Parms.MissionClass = MissionClass;
	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionAttributeValueResolver
// (None)

class UClass* UMissionAttributeValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionAttributeValueResolver");

	return Clss;
}


// MissionAttributeValueResolver GbxMission.Default__MissionAttributeValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionAttributeValueResolver* UMissionAttributeValueResolver::GetDefaultObj()
{
	static class UMissionAttributeValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionAttributeValueResolver*>(UMissionAttributeValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionCondition_List
// (None)

class UClass* UMissionCondition_List::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionCondition_List");

	return Clss;
}


// MissionCondition_List GbxMission.Default__MissionCondition_List
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionCondition_List* UMissionCondition_List::GetDefaultObj()
{
	static class UMissionCondition_List* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionCondition_List*>(UMissionCondition_List::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionConditionAttributeValueResolver
// (None)

class UClass* UMissionConditionAttributeValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionConditionAttributeValueResolver");

	return Clss;
}


// MissionConditionAttributeValueResolver GbxMission.Default__MissionConditionAttributeValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionConditionAttributeValueResolver* UMissionConditionAttributeValueResolver::GetDefaultObj()
{
	static class UMissionConditionAttributeValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionConditionAttributeValueResolver*>(UMissionConditionAttributeValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionDebugMenu
// (None)

class UClass* UMissionDebugMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionDebugMenu");

	return Clss;
}


// MissionDebugMenu GbxMission.Default__MissionDebugMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionDebugMenu* UMissionDebugMenu::GetDefaultObj()
{
	static class UMissionDebugMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionDebugMenu*>(UMissionDebugMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionDebugMenu.SelectMissionGraph
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MissionGraphId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDebugMenu::SelectMissionGraph(class FName& MissionGraphId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "SelectMissionGraph");

	Params::UMissionDebugMenu_SelectMissionGraph_Params Parms{};

	Parms.MissionGraphId = MissionGraphId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UMissionDebugMenu::NotifyMissionActivationCheatStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "NotifyMissionActivationCheatStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxCascadingListItemData>OutItems                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionDebugMenu::GetObjectiveSetItemsForMission(class FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "GetObjectiveSetItemsForMission");

	Params::UMissionDebugMenu_GetObjectiveSetItemsForMission_Params Parms{};

	Parms.MissionId = MissionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItems != nullptr)
		*OutItems = std::move(Parms.OutItems);

}


// Function GbxMission.MissionDebugMenu.GetMissionWithId
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMission*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMission* UMissionDebugMenu::GetMissionWithId(class FName& MissionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "GetMissionWithId");

	Params::UMissionDebugMenu_GetMissionWithId_Params Parms{};

	Parms.MissionId = MissionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionDebugMenu.GetMissionStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMissionStatus          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMissionStatus UMissionDebugMenu::GetMissionStatus(class FName& MissionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "GetMissionStatus");

	Params::UMissionDebugMenu_GetMissionStatus_Params Parms{};

	Parms.MissionId = MissionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMissionDebugStatus     Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxCascadingListItemData>OutItems                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionDebugMenu::GetItemsForMissionStatus(enum class EMissionDebugStatus Status, TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "GetItemsForMissionStatus");

	Params::UMissionDebugMenu_GetItemsForMissionStatus_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItems != nullptr)
		*OutItems = std::move(Parms.OutItems);

}


// Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGbxCascadingListItemData>OutItems                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionDebugMenu::GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "GetItemsForMissionGraph");

	Params::UMissionDebugMenu_GetItemsForMissionGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItems != nullptr)
		*OutItems = std::move(Parms.OutItems);

}


// Function GbxMission.MissionDebugMenu.CompleteMission
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDebugMenu::CompleteMission(class FName& MissionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "CompleteMission");

	Params::UMissionDebugMenu_CompleteMission_Params Parms{};

	Parms.MissionId = MissionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ObjectiveSetId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDebugMenu::AdvanceToObjectiveSet(class FName& MissionId, class FName& ObjectiveSetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "AdvanceToObjectiveSet");

	Params::UMissionDebugMenu_AdvanceToObjectiveSet_Params Parms{};

	Parms.MissionId = MissionId;
	Parms.ObjectiveSetId = ObjectiveSetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionDebugMenu.AdvanceMission
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MissionId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionDebugMenu::AdvanceMission(class FName& MissionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionDebugMenu", "AdvanceMission");

	Params::UMissionDebugMenu_AdvanceMission_Params Parms{};

	Parms.MissionId = MissionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionEnableCondition
// (None)

class UClass* UMissionEnableCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableCondition");

	return Clss;
}


// MissionEnableCondition GbxMission.Default__MissionEnableCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableCondition* UMissionEnableCondition::GetDefaultObj()
{
	static class UMissionEnableCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableCondition*>(UMissionEnableCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective
// (None)

class UClass* UMissionEnableConditionBreadcrumbLinkedObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionBreadcrumbLinkedObjective");

	return Clss;
}


// MissionEnableConditionBreadcrumbLinkedObjective GbxMission.Default__MissionEnableConditionBreadcrumbLinkedObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionBreadcrumbLinkedObjective* UMissionEnableConditionBreadcrumbLinkedObjective::GetDefaultObj()
{
	static class UMissionEnableConditionBreadcrumbLinkedObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionBreadcrumbLinkedObjective*>(UMissionEnableConditionBreadcrumbLinkedObjective::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionKickoff
// (None)

class UClass* UMissionEnableConditionKickoff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionKickoff");

	return Clss;
}


// MissionEnableConditionKickoff GbxMission.Default__MissionEnableConditionKickoff
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionKickoff* UMissionEnableConditionKickoff::GetDefaultObj()
{
	static class UMissionEnableConditionKickoff* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionKickoff*>(UMissionEnableConditionKickoff::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionMission
// (None)

class UClass* UMissionEnableConditionMission::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionMission");

	return Clss;
}


// MissionEnableConditionMission GbxMission.Default__MissionEnableConditionMission
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionMission* UMissionEnableConditionMission::GetDefaultObj()
{
	static class UMissionEnableConditionMission* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionMission*>(UMissionEnableConditionMission::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionMissionAvailable
// (None)

class UClass* UMissionEnableConditionMissionAvailable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionMissionAvailable");

	return Clss;
}


// MissionEnableConditionMissionAvailable GbxMission.Default__MissionEnableConditionMissionAvailable
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionMissionAvailable* UMissionEnableConditionMissionAvailable::GetDefaultObj()
{
	static class UMissionEnableConditionMissionAvailable* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionMissionAvailable*>(UMissionEnableConditionMissionAvailable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionObjective
// (None)

class UClass* UMissionEnableConditionObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionObjective");

	return Clss;
}


// MissionEnableConditionObjective GbxMission.Default__MissionEnableConditionObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionObjective* UMissionEnableConditionObjective::GetDefaultObj()
{
	static class UMissionEnableConditionObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionObjective*>(UMissionEnableConditionObjective::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionObjectiveCount
// (None)

class UClass* UMissionEnableConditionObjectiveCount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionObjectiveCount");

	return Clss;
}


// MissionEnableConditionObjectiveCount GbxMission.Default__MissionEnableConditionObjectiveCount
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionObjectiveCount* UMissionEnableConditionObjectiveCount::GetDefaultObj()
{
	static class UMissionEnableConditionObjectiveCount* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionObjectiveCount*>(UMissionEnableConditionObjectiveCount::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionEnableConditionObjectiveSet
// (None)

class UClass* UMissionEnableConditionObjectiveSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEnableConditionObjectiveSet");

	return Clss;
}


// MissionEnableConditionObjectiveSet GbxMission.Default__MissionEnableConditionObjectiveSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionEnableConditionObjectiveSet* UMissionEnableConditionObjectiveSet::GetDefaultObj()
{
	static class UMissionEnableConditionObjectiveSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEnableConditionObjectiveSet*>(UMissionEnableConditionObjectiveSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionFunctionLibrary
// (None)

class UClass* UMissionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionFunctionLibrary");

	return Clss;
}


// MissionFunctionLibrary GbxMission.Default__MissionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionFunctionLibrary* UMissionFunctionLibrary::GetDefaultObj()
{
	static class UMissionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionFunctionLibrary*>(UMissionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveReference  ObjectiveRef                                                     (Parm, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "UpdateMissionObjectiveRef");

	Params::UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveRef = ObjectiveRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::TrackPreviousActiveMissionInList(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "TrackPreviousActiveMissionInList");

	Params::UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::TrackNextActiveMissionInList(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "TrackNextActiveMissionInList");

	Params::UMissionFunctionLibrary_TrackNextActiveMissionInList_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.TrackActiveMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::TrackActiveMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "TrackActiveMission");

	Params::UMissionFunctionLibrary_TrackActiveMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMissionEventReference      EventRef                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "SendMissionEventWithContext");

	Params::UMissionFunctionLibrary_SendMissionEventWithContext_Params Parms{};

	Parms.EventRef = EventRef;
	Parms.WorldContextObject = WorldContextObject;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.SendMissionEvent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionEventReference      EventRef                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "SendMissionEvent");

	Params::UMissionFunctionLibrary_SendMissionEvent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EventRef = EventRef;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSoftClassPtr<class UMission>      Mission                                                          (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UMission> UMissionFunctionLibrary::ResolveMissionSoftClassReference(TSoftClassPtr<class UMission> Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "ResolveMissionSoftClassReference");

	Params::UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params Parms{};

	Parms.Mission = Mission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.ResetRepeatableMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::ResetRepeatableMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "ResetRepeatableMission");

	Params::UMissionFunctionLibrary_ResetRepeatableMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceObjectiveSetRef                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               bIsBranchingMission                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "JumpToMissionObjectiveSetRef");

	Params::UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveSetRef = ObjectiveSetRef;
	Parms.bIsBranchingMission = bIsBranchingMission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.GetSummary_MissionObjectiveReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReference  ObjectiveReference                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMissionFunctionLibrary::GetSummary_MissionObjectiveReference(struct FMissionObjectiveReference& ObjectiveReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetSummary_MissionObjectiveReference");

	Params::UMissionFunctionLibrary_GetSummary_MissionObjectiveReference_Params Parms{};

	Parms.ObjectiveReference = ObjectiveReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSoftClassPtr<class UMission>      MissionClass                                                     (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UMissionObjectiveSet>>SoftObjectiveSetList                                             (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetSoftObjectiveSetListForMission(TSoftClassPtr<class UMission> MissionClass, TArray<TSoftObjectPtr<class UMissionObjectiveSet>>* SoftObjectiveSetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetSoftObjectiveSetListForMission");

	Params::UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoftObjectiveSetList != nullptr)
		*SoftObjectiveSetList = std::move(Parms.SoftObjectiveSetList);

}


// Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMission*                    MissionObj                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMissionFunctionLibrary::GetPlotMissionIndex(class UMission* MissionObj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetPlotMissionIndex");

	Params::UMissionFunctionLibrary_GetPlotMissionIndex_Params Parms{};

	Parms.MissionObj = MissionObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSoftClassPtr<class UMission>      MissionClass                                                     (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NamesList                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftClassPtr<class UMission> MissionClass, TArray<class FName>* NamesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetObjectiveSetNameListForMissionFromAssetSubclass");

	Params::UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesList != nullptr)
		*NamesList = std::move(Parms.NamesList);

}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NamesList                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetObjectiveSetNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetObjectiveSetNameListForMission");

	Params::UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesList != nullptr)
		*NamesList = std::move(Parms.NamesList);

}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMissionObjectiveSet*>ObjectiveSetList                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetObjectiveSetListForMission(TSubclassOf<class UMission> MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetObjectiveSetListForMission");

	Params::UMissionFunctionLibrary_GetObjectiveSetListForMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectiveSetList != nullptr)
		*ObjectiveSetList = std::move(Parms.ObjectiveSetList);

}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSoftClassPtr<class UMission>      Mission                                                          (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NamesList                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetObjectiveNameListForMissionFromAssetSubclass(TSoftClassPtr<class UMission> Mission, TArray<class FName>* NamesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetObjectiveNameListForMissionFromAssetSubclass");

	Params::UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params Parms{};

	Parms.Mission = Mission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesList != nullptr)
		*NamesList = std::move(Parms.NamesList);

}


// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NamesList                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetObjectiveNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetObjectiveNameListForMission");

	Params::UMissionFunctionLibrary_GetObjectiveNameListForMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesList != nullptr)
		*NamesList = std::move(Parms.NamesList);

}


// Function GbxMission.MissionFunctionLibrary.GetMissionStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMissionStatus          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMissionStatus UMissionFunctionLibrary::GetMissionStatus(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionStatus");

	Params::UMissionFunctionLibrary_GetMissionStatus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveReference  ObjectiveRef                                                     (Parm, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMissionObjectiveStatus ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMissionObjectiveStatus UMissionFunctionLibrary::GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionObjectiveStatusRef");

	Params::UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveRef = ObjectiveRef;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceObjectiveSetRef                                                  (Parm, NativeAccessSpecifierPublic)
// enum class EMissionObjectiveSetStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMissionObjectiveSetStatus UMissionFunctionLibrary::GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionObjectiveSetStatusRef");

	Params::UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveSetRef = ObjectiveSetRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveReference  ObjectiveRef                                                     (Parm, NativeAccessSpecifierPublic)
// int32                              CurrentObjectiveCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalObjectiveCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int32* CurrentObjectiveCount, int32* TotalObjectiveCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionObjectiveCount");

	Params::UMissionFunctionLibrary_GetMissionObjectiveCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveRef = ObjectiveRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurrentObjectiveCount != nullptr)
		*CurrentObjectiveCount = Parms.CurrentObjectiveCount;

	if (TotalObjectiveCount != nullptr)
		*TotalObjectiveCount = Parms.TotalObjectiveCount;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMission*                    MissionObj                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMissionFunctionLibrary::GetMissionLevel(class UMission* MissionObj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionLevel");

	Params::UMissionFunctionLibrary_GetMissionLevel_Params Parms{};

	Parms.MissionObj = MissionObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReferenceWeakObjectiveReference                                               (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UMission> UMissionFunctionLibrary::GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionClassFromObjectiveReferenceWeak");

	Params::UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params Parms{};

	Parms.ObjectiveReference = ObjectiveReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReference  ObjectiveReference                                               (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UMission> UMissionFunctionLibrary::GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMissionClassFromObjectiveReference");

	Params::UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params Parms{};

	Parms.ObjectiveReference = ObjectiveReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMission*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMission* UMissionFunctionLibrary::GetMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetMission");

	Params::UMissionFunctionLibrary_GetMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                NamesList                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::GetEventNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetEventNameListForMission");

	Params::UMissionFunctionLibrary_GetEventNameListForMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesList != nullptr)
		*NamesList = std::move(Parms.NamesList);

}


// Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UMission> UMissionFunctionLibrary::GetCurrentlyTrackedMission(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetCurrentlyTrackedMission");

	Params::UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UMission> UMissionFunctionLibrary::GetActivePlotMission(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetActivePlotMission");

	Params::UMissionFunctionLibrary_GetActivePlotMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.GetActiveMissions
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMission*>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMission*> UMissionFunctionLibrary::GetActiveMissions(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "GetActiveMissions");

	Params::UMissionFunctionLibrary_GetActiveMissions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveSetReferenceMissionObjectiveSetRef                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ObjectiveSet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::FillMissionObjectiveSetRef(struct FMissionObjectiveSetReference& MissionObjectiveSetRef, TSubclassOf<class UMission>& MissionClass, class FName ObjectiveSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "FillMissionObjectiveSetRef");

	Params::UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params Parms{};

	Parms.MissionObjectiveSetRef = MissionObjectiveSetRef;
	Parms.MissionClass = MissionClass;
	Parms.ObjectiveSet = ObjectiveSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveReferenceWeakMissionObjectiveRef                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::FillMissionObjectiveRefWeak(struct FMissionObjectiveReferenceWeak& MissionObjectiveRef, TSubclassOf<class UMission>& MissionClass, class FName Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "FillMissionObjectiveRefWeak");

	Params::UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params Parms{};

	Parms.MissionObjectiveRef = MissionObjectiveRef;
	Parms.MissionClass = MissionClass;
	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMissionObjectiveReference  MissionObjectiveRef                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::FillMissionObjectiveRef(struct FMissionObjectiveReference& MissionObjectiveRef, TSubclassOf<class UMission>& MissionClass, class FName Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "FillMissionObjectiveRef");

	Params::UMissionFunctionLibrary_FillMissionObjectiveRef_Params Parms{};

	Parms.MissionObjectiveRef = MissionObjectiveRef;
	Parms.MissionClass = MissionClass;
	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMissionEventReference      MissionEventRef                                                  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::FillMissionEventRef(struct FMissionEventReference& MissionEventRef, TSubclassOf<class UMission>& MissionClass, class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "FillMissionEventRef");

	Params::UMissionFunctionLibrary_FillMissionEventRef_Params Parms{};

	Parms.MissionEventRef = MissionEventRef;
	Parms.MissionClass = MissionClass;
	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveSetReferenceA                                                                (Parm, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceB                                                                (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionFunctionLibrary::EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "EqualEqual_MissionObjectiveSetReference");

	Params::UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMissionObjectiveReference  A                                                                (Parm, NativeAccessSpecifierPublic)
// struct FMissionObjectiveReference  B                                                                (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionFunctionLibrary::EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "EqualEqual_MissionObjectiveReference");

	Params::UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceObjectiveSetRef                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               bIsBranchingMission                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "DebugJumpToMissionObjectiveSetRef");

	Params::UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveSetRef = ObjectiveSetRef;
	Parms.bIsBranchingMission = bIsBranchingMission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.CreateMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMission*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMission* UMissionFunctionLibrary::CreateMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "CreateMission");

	Params::UMissionFunctionLibrary_CreateMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionFunctionLibrary.CompleteMission
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::CompleteMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "CompleteMission");

	Params::UMissionFunctionLibrary_CompleteMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveReference  BreadcrumbObjectiveRef                                           (Parm, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "AdvanceToBreadcrumbObjective");

	Params::UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.BreadcrumbObjectiveRef = BreadcrumbObjectiveRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceObjectiveSetRef                                                  (Parm, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "AdvanceMissionObjectiveSetRef");

	Params::UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveSetRef = ObjectiveSetRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionObjectiveSetReferenceObjectiveSetRef                                                  (Parm, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "ActivateMissionAtObjectiveSet");

	Params::UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveSetRef = ObjectiveSetRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionFunctionLibrary.ActivateMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionFunctionLibrary::ActivateMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionFunctionLibrary", "ActivateMission");

	Params::UMissionFunctionLibrary_ActivateMission_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionIconInterface
// (None)

class UClass* IMissionIconInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionIconInterface");

	return Clss;
}


// MissionIconInterface GbxMission.Default__MissionIconInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionIconInterface* IMissionIconInterface::GetDefaultObj()
{
	static class IMissionIconInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionIconInterface*>(IMissionIconInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionIconObserverInterface
// (None)

class UClass* IMissionIconObserverInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionIconObserverInterface");

	return Clss;
}


// MissionIconObserverInterface GbxMission.Default__MissionIconObserverInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionIconObserverInterface* IMissionIconObserverInterface::GetDefaultObj()
{
	static class IMissionIconObserverInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionIconObserverInterface*>(IMissionIconObserverInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionLocationData
// (None)

class UClass* UMissionLocationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionLocationData");

	return Clss;
}


// MissionLocationData GbxMission.Default__MissionLocationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionLocationData* UMissionLocationData::GetDefaultObj()
{
	static class UMissionLocationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionLocationData*>(UMissionLocationData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionLocationData.GetRequiredInterface
// (Final, Native, Public)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UMissionLocationData::GetRequiredInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionLocationData", "GetRequiredInterface");

	Params::UMissionLocationData_GetRequiredInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
// (Final, Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionLocationData::EnabledConditionRequiresNativeClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionLocationData", "EnabledConditionRequiresNativeClass");

	Params::UMissionLocationData_EnabledConditionRequiresNativeClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxMission.MissionObjective
// (None)

class UClass* UMissionObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjective");

	return Clss;
}


// MissionObjective GbxMission.Default__MissionObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionObjective* UMissionObjective::GetDefaultObj()
{
	static class UMissionObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionObjective*>(UMissionObjective::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionObjectiveReferenceInterface
// (None)

class UClass* IMissionObjectiveReferenceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveReferenceInterface");

	return Clss;
}


// MissionObjectiveReferenceInterface GbxMission.Default__MissionObjectiveReferenceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionObjectiveReferenceInterface* IMissionObjectiveReferenceInterface::GetDefaultObj()
{
	static class IMissionObjectiveReferenceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObjectiveReferenceInterface*>(IMissionObjectiveReferenceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMissionObjectiveReference>OutMissionObjectives                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IMissionObjectiveReferenceInterface::GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveReferenceInterface", "GetMissionObjectiveReferences");

	Params::IMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMissionObjectives != nullptr)
		*OutMissionObjectives = std::move(Parms.OutMissionObjectives);

}


// Class GbxMission.MissionObjectiveSet
// (None)

class UClass* UMissionObjectiveSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveSet");

	return Clss;
}


// MissionObjectiveSet GbxMission.Default__MissionObjectiveSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionObjectiveSet* UMissionObjectiveSet::GetDefaultObj()
{
	static class UMissionObjectiveSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionObjectiveSet*>(UMissionObjectiveSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionObjectiveSetReferenceInterface
// (None)

class UClass* IMissionObjectiveSetReferenceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObjectiveSetReferenceInterface");

	return Clss;
}


// MissionObjectiveSetReferenceInterface GbxMission.Default__MissionObjectiveSetReferenceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionObjectiveSetReferenceInterface* IMissionObjectiveSetReferenceInterface::GetDefaultObj()
{
	static class IMissionObjectiveSetReferenceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObjectiveSetReferenceInterface*>(IMissionObjectiveSetReferenceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMissionObjectiveSetReference>OutMissionObjectiveSets                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IMissionObjectiveSetReferenceInterface::GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObjectiveSetReferenceInterface", "GetMissionObjectiveSetReferences");

	Params::IMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMissionObjectiveSets != nullptr)
		*OutMissionObjectiveSets = std::move(Parms.OutMissionObjectiveSets);

}


// Class GbxMission.MissionObserverComponent
// (None)

class UClass* UMissionObserverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObserverComponent");

	return Clss;
}


// MissionObserverComponent GbxMission.Default__MissionObserverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionObserverComponent* UMissionObserverComponent::GetDefaultObj()
{
	static class UMissionObserverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionObserverComponent*>(UMissionObserverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionObserverComponent.ObserverMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMission>        MissionClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionObserverComponent::ObserverMission(TSubclassOf<class UMission> MissionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObserverComponent", "ObserverMission");

	Params::UMissionObserverComponent_ObserverMission_Params Parms{};

	Parms.MissionClass = MissionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxMission.MissionObserverComponent.GetUpdateEventObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             OutMissionInitialized                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UObject*>             OutMissionUpdate                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UObject*>             OutMissionObjectiveUpdate                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UObject*>             OutMissionObjectiveSetUpdate                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMissionObserverComponent::GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObserverComponent", "GetUpdateEventObject");

	Params::UMissionObserverComponent_GetUpdateEventObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMissionInitialized != nullptr)
		*OutMissionInitialized = std::move(Parms.OutMissionInitialized);

	if (OutMissionUpdate != nullptr)
		*OutMissionUpdate = std::move(Parms.OutMissionUpdate);

	if (OutMissionObjectiveUpdate != nullptr)
		*OutMissionObjectiveUpdate = std::move(Parms.OutMissionObjectiveUpdate);

	if (OutMissionObjectiveSetUpdate != nullptr)
		*OutMissionObjectiveSetUpdate = std::move(Parms.OutMissionObjectiveSetUpdate);

	return Parms.ReturnValue;

}


// Class GbxMission.MissionObserverInterface
// (None)

class UClass* IMissionObserverInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObserverInterface");

	return Clss;
}


// MissionObserverInterface GbxMission.Default__MissionObserverInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionObserverInterface* IMissionObserverInterface::GetDefaultObj()
{
	static class IMissionObserverInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObserverInterface*>(IMissionObserverInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionObserverPlayerInterface
// (None)

class UClass* IMissionObserverPlayerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionObserverPlayerInterface");

	return Clss;
}


// MissionObserverPlayerInterface GbxMission.Default__MissionObserverPlayerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionObserverPlayerInterface* IMissionObserverPlayerInterface::GetDefaultObj()
{
	static class IMissionObserverPlayerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionObserverPlayerInterface*>(IMissionObserverPlayerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FReplicatedMissionData      MissionData                                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void IMissionObserverPlayerInterface::ClientReceiveMissionData(struct FReplicatedMissionData& MissionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionObserverPlayerInterface", "ClientReceiveMissionData");

	Params::IMissionObserverPlayerInterface_ClientReceiveMissionData_Params Parms{};

	Parms.MissionData = MissionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxMission.MissionPhase
// (None)

class UClass* UMissionPhase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionPhase");

	return Clss;
}


// MissionPhase GbxMission.Default__MissionPhase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionPhase* UMissionPhase::GetDefaultObj()
{
	static class UMissionPhase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionPhase*>(UMissionPhase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxMission.MissionReferenceInterface
// (None)

class UClass* IMissionReferenceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionReferenceInterface");

	return Clss;
}


// MissionReferenceInterface GbxMission.Default__MissionReferenceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMissionReferenceInterface* IMissionReferenceInterface::GetDefaultObj()
{
	static class IMissionReferenceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMissionReferenceInterface*>(IMissionReferenceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<TSubclassOf<class UMission>>OutMissions                                                      (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IMissionReferenceInterface::GetMissionClassReferences(TArray<TSubclassOf<class UMission>>* OutMissions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionReferenceInterface", "GetMissionClassReferences");

	Params::IMissionReferenceInterface_GetMissionClassReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMissions != nullptr)
		*OutMissions = std::move(Parms.OutMissions);

}


// Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IMissionReferenceInterface::CheckForMissionReferenceErrors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionReferenceInterface", "CheckForMissionReferenceErrors");

	Params::IMissionReferenceInterface_CheckForMissionReferenceErrors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


