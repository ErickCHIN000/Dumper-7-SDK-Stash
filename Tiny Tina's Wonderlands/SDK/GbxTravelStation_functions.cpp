#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxTravelStation.TravelGraph
// (None)

class UClass* UTravelGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelGraph");

	return Clss;
}


// TravelGraph GbxTravelStation.Default__TravelGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelGraph* UTravelGraph::GetDefaultObj()
{
	static class UTravelGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelGraph*>(UTravelGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.GlobalTravelGraph
// (None)

class UClass* UGlobalTravelGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalTravelGraph");

	return Clss;
}


// GlobalTravelGraph GbxTravelStation.Default__GlobalTravelGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalTravelGraph* UGlobalTravelGraph::GetDefaultObj()
{
	static class UGlobalTravelGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalTravelGraph*>(UGlobalTravelGraph::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.GlobalTravelGraph.DebugFindClosestLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelData*                  StartingLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelData*                  DestinationLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalTravelGraph::DebugFindClosestLevel(class UObject* WorldContextObject, class ULevelData* StartingLevel, class ULevelData* DestinationLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalTravelGraph", "DebugFindClosestLevel");

	Params::UGlobalTravelGraph_DebugFindClosestLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StartingLevel = StartingLevel;
	Parms.DestinationLevel = DestinationLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTravelStation.TravelStationTracker
// (Actor)

class UClass* ATravelStationTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationTracker");

	return Clss;
}


// TravelStationTracker GbxTravelStation.Default__TravelStationTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class ATravelStationTracker* ATravelStationTracker::GetDefaultObj()
{
	static class ATravelStationTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<ATravelStationTracker*>(ATravelStationTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.TravelStationTracker.TravelToStationTimer
// (Final, Native, Private)
// Parameters:

void ATravelStationTracker::TravelToStationTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "TravelToStationTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.PlayerJoinedTimer
// (Native, Protected)
// Parameters:

void ATravelStationTracker::PlayerJoinedTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "PlayerJoinedTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.OnRep_UsableResurrectTravelStations
// (Native, Public)
// Parameters:

void ATravelStationTracker::OnRep_UsableResurrectTravelStations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "OnRep_UsableResurrectTravelStations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.OnRep_TravelToStationCountdown
// (Final, Native, Private)
// Parameters:

void ATravelStationTracker::OnRep_TravelToStationCountdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "OnRep_TravelToStationCountdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.OnRep_LastActiveTravelToStation
// (Native, Public)
// Parameters:

void ATravelStationTracker::OnRep_LastActiveTravelToStation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "OnRep_LastActiveTravelToStation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.OnRep_HostFastTravelStations
// (Final, Native, Private)
// Parameters:

void ATravelStationTracker::OnRep_HostFastTravelStations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "OnRep_HostFastTravelStations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.InterruptTravelToStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETravelStatus           CancellationReason                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATravelStationTracker::InterruptTravelToStation(enum class ETravelStatus CancellationReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "InterruptTravelToStation");

	Params::ATravelStationTracker_InterruptTravelToStation_Params Parms{};

	Parms.CancellationReason = CancellationReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationTracker.GetTravelStationComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTravelStationData*          TravelStationData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTravelStationComponentBase* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTravelStationComponentBase* ATravelStationTracker::GetTravelStationComponent(class UTravelStationData* TravelStationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetTravelStationComponent");

	Params::ATravelStationTracker_GetTravelStationComponent_Params Parms{};

	Parms.TravelStationData = TravelStationData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.GetLastTravelledThroughStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ATravelStationTracker::GetLastTravelledThroughStation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetLastTravelledThroughStation");

	Params::ATravelStationTracker_GetLastTravelledThroughStation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.GetLastActiveTravelToStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ATravelStationTracker::GetLastActiveTravelToStation(class APlayerController* Pc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetLastActiveTravelToStation");

	Params::ATravelStationTracker_GetLastActiveTravelToStation_Params Parms{};

	Parms.Pc = Pc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.GetFastTravelStationInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FastTravelStationName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFastTravelStationData*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFastTravelStationData* ATravelStationTracker::GetFastTravelStationInfo(const class FString& FastTravelStationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetFastTravelStationInfo");

	Params::ATravelStationTracker_GetFastTravelStationInfo_Params Parms{};

	Parms.FastTravelStationName = FastTravelStationName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.GetAllFastTravelStations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFastTravelStationData*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFastTravelStationData*> ATravelStationTracker::GetAllFastTravelStations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetAllFastTravelStations");

	Params::ATravelStationTracker_GetAllFastTravelStations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.GetActiveFastTravelStationList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FActiveFastTravelData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveFastTravelData> ATravelStationTracker::GetActiveFastTravelStationList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "GetActiveFastTravelStationList");

	Params::ATravelStationTracker_GetActiveFastTravelStationList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationTracker.FindFastTravelStationForMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MapName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFastTravelStationData*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFastTravelStationData* ATravelStationTracker::FindFastTravelStationForMap(class FName MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationTracker", "FindFastTravelStationForMap");

	Params::ATravelStationTracker_FindFastTravelStationForMap_Params Parms{};

	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTravelStation.TravelStationComponentBase
// (SceneComponent, PrimitiveComponent)

class UClass* UTravelStationComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationComponentBase");

	return Clss;
}


// TravelStationComponentBase GbxTravelStation.Default__TravelStationComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationComponentBase* UTravelStationComponentBase::GetDefaultObj()
{
	static class UTravelStationComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationComponentBase*>(UTravelStationComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.TravelStationComponentBase.TravelToStation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTravelStationData*          DestinationStationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ActivatingPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisallowLocalTravel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTravelStationComponentBase::TravelToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, bool bImmediate, class APawn* ActivatingPawn, bool bDisallowLocalTravel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationComponentBase", "TravelToStation");

	Params::UTravelStationComponentBase_TravelToStation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DestinationStationData = DestinationStationData;
	Parms.bImmediate = bImmediate;
	Parms.ActivatingPawn = ActivatingPawn;
	Parms.bDisallowLocalTravel = bDisallowLocalTravel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationComponentBase.TeleportToStation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTravelStationData*          DestinationStationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       SoloTravelPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForcePlayerTravel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTravelStationComponentBase::TeleportToStation(class UObject* WorldContextObject, class UTravelStationData* DestinationStationData, class APawn* SoloTravelPawn, bool bImmediate, bool bForcePlayerTravel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationComponentBase", "TeleportToStation");

	Params::UTravelStationComponentBase_TeleportToStation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DestinationStationData = DestinationStationData;
	Parms.SoloTravelPawn = SoloTravelPawn;
	Parms.bImmediate = bImmediate;
	Parms.bForcePlayerTravel = bForcePlayerTravel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationComponentBase.GetAvailableSpawnLocation
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      ActorForSpawnLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bTestOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForVehicle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTravelStationComponentBase::GetAvailableSpawnLocation(class AActor* ActorForSpawnLocation, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, bool bTestOnly, bool bForVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationComponentBase", "GetAvailableSpawnLocation");

	Params::UTravelStationComponentBase_GetAvailableSpawnLocation_Params Parms{};

	Parms.ActorForSpawnLocation = ActorForSpawnLocation;
	Parms.bTestOnly = bTestOnly;
	Parms.bForVehicle = bForVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpawnLocation != nullptr)
		*SpawnLocation = std::move(Parms.SpawnLocation);

	if (SpawnRotation != nullptr)
		*SpawnRotation = std::move(Parms.SpawnRotation);

	return Parms.ReturnValue;

}


// Function GbxTravelStation.TravelStationComponentBase.EnumerateValidTravelStation
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class UObject*                     TravelStationObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutItems                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTravelStationComponentBase::EnumerateValidTravelStation(class UObject* TravelStationObject, TArray<class FString>* OutItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationComponentBase", "EnumerateValidTravelStation");

	Params::UTravelStationComponentBase_EnumerateValidTravelStation_Params Parms{};

	Parms.TravelStationObject = TravelStationObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItems != nullptr)
		*OutItems = std::move(Parms.OutItems);

}


// Class GbxTravelStation.FastTravelStationComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFastTravelStationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravelStationComponent");

	return Clss;
}


// FastTravelStationComponent GbxTravelStation.Default__FastTravelStationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFastTravelStationComponent* UFastTravelStationComponent::GetDefaultObj()
{
	static class UFastTravelStationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravelStationComponent*>(UFastTravelStationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.FastTravelStationComponent.OnTravelStationActivated
// (Final, Native, Private)
// Parameters:
// class AActor*                      PreviousStation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFastTravelStationComponent::OnTravelStationActivated(class AActor* PreviousStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationComponent", "OnTravelStationActivated");

	Params::UFastTravelStationComponent_OnTravelStationActivated_Params Parms{};

	Parms.PreviousStation = PreviousStation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.FastTravelStationComponent.FastTravelToStation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFastTravelStationData*      DestinationStationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ActivatingPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFastTravelStationComponent::FastTravelToStation(class UObject* WorldContextObject, class UFastTravelStationData* DestinationStationData, class APawn* ActivatingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationComponent", "FastTravelToStation");

	Params::UFastTravelStationComponent_FastTravelToStation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DestinationStationData = DestinationStationData;
	Parms.ActivatingPawn = ActivatingPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.FastTravelStationComponent.DeactivateFastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFastTravelStationComponent* FallbackLocation                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFastTravelStationComponent::DeactivateFastTravel(class UFastTravelStationComponent* FallbackLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationComponent", "DeactivateFastTravel");

	Params::UFastTravelStationComponent_DeactivateFastTravel_Params Parms{};

	Parms.FallbackLocation = FallbackLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.FastTravelStationComponent.ActivateFastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFastTravelStationComponent::ActivateFastTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationComponent", "ActivateFastTravel");

	Params::UFastTravelStationComponent_ActivateFastTravel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTravelStation.TravelLocationData
// (None)

class UClass* UTravelLocationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelLocationData");

	return Clss;
}


// TravelLocationData GbxTravelStation.Default__TravelLocationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelLocationData* UTravelLocationData::GetDefaultObj()
{
	static class UTravelLocationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelLocationData*>(UTravelLocationData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TravelStationData
// (None)

class UClass* UTravelStationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationData");

	return Clss;
}


// TravelStationData GbxTravelStation.Default__TravelStationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationData* UTravelStationData::GetDefaultObj()
{
	static class UTravelStationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationData*>(UTravelStationData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.TravelStationData.GetStationMapName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UTravelStationData::GetStationMapName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationData", "GetStationMapName");

	Params::UTravelStationData_GetStationMapName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTravelStation.FastTravelStationData
// (None)

class UClass* UFastTravelStationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravelStationData");

	return Clss;
}


// FastTravelStationData GbxTravelStation.Default__FastTravelStationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFastTravelStationData* UFastTravelStationData::GetDefaultObj()
{
	static class UFastTravelStationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravelStationData*>(UFastTravelStationData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.FastTravelStationDebugButton
// (None)

class UClass* UFastTravelStationDebugButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravelStationDebugButton");

	return Clss;
}


// FastTravelStationDebugButton GbxTravelStation.Default__FastTravelStationDebugButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFastTravelStationDebugButton* UFastTravelStationDebugButton::GetDefaultObj()
{
	static class UFastTravelStationDebugButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravelStationDebugButton*>(UFastTravelStationDebugButton::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.FastTravelStationDebugButton.OnStationClicked
// (Final, Native, Private)
// Parameters:

void UFastTravelStationDebugButton::OnStationClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationDebugButton", "OnStationClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxTravelStation.FastTravelStationDebugMenu
// (None)

class UClass* UFastTravelStationDebugMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravelStationDebugMenu");

	return Clss;
}


// FastTravelStationDebugMenu GbxTravelStation.Default__FastTravelStationDebugMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UFastTravelStationDebugMenu* UFastTravelStationDebugMenu::GetDefaultObj()
{
	static class UFastTravelStationDebugMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravelStationDebugMenu*>(UFastTravelStationDebugMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelStationSelectedChanged
// (Final, Native, Private)
// Parameters:
// class UFastTravelStationDebugButton*TriggeredButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFastTravelStationDebugMenu::OnTravelStationSelectedChanged(class UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationDebugMenu", "OnTravelStationSelectedChanged");

	Params::UFastTravelStationDebugMenu_OnTravelStationSelectedChanged_Params Parms{};

	Parms.TriggeredButton = TriggeredButton;
	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnTravelButtonClicked
// (Final, Native, Private)
// Parameters:

void UFastTravelStationDebugMenu::OnTravelButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationDebugMenu", "OnTravelButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnShowLevelStationsStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFastTravelStationDebugMenu::OnShowLevelStationsStateChanged(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationDebugMenu", "OnShowLevelStationsStateChanged");

	Params::UFastTravelStationDebugMenu_OnShowLevelStationsStateChanged_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.FastTravelStationDebugMenu.OnActiveStationsStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFastTravelStationDebugMenu::OnActiveStationsStateChanged(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FastTravelStationDebugMenu", "OnActiveStationsStateChanged");

	Params::UFastTravelStationDebugMenu_OnActiveStationsStateChanged_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTravelStation.LevelTravelStationComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULevelTravelStationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelTravelStationComponent");

	return Clss;
}


// LevelTravelStationComponent GbxTravelStation.Default__LevelTravelStationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelTravelStationComponent* ULevelTravelStationComponent::GetDefaultObj()
{
	static class ULevelTravelStationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelTravelStationComponent*>(ULevelTravelStationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.LevelTravelStationComponent.GetLevelTravelStationData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelTravelStationData*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelTravelStationData* ULevelTravelStationComponent::GetLevelTravelStationData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelTravelStationComponent", "GetLevelTravelStationData");

	Params::ULevelTravelStationComponent_GetLevelTravelStationData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.LevelTravelStationComponent.GetDestinationLevelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelData*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelData* ULevelTravelStationComponent::GetDestinationLevelData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelTravelStationComponent", "GetDestinationLevelData");

	Params::ULevelTravelStationComponent_GetDestinationLevelData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTravelStation.LevelTravelStationComponent.ActivateLevelTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 ActivatingController                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelTravelStationComponent::ActivateLevelTravel(class AController* ActivatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelTravelStationComponent", "ActivateLevelTravel");

	Params::ULevelTravelStationComponent_ActivateLevelTravel_Params Parms{};

	Parms.ActivatingController = ActivatingController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTravelStation.LevelTravelStationData
// (None)

class UClass* ULevelTravelStationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelTravelStationData");

	return Clss;
}


// LevelTravelStationData GbxTravelStation.Default__LevelTravelStationData
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelTravelStationData* ULevelTravelStationData::GetDefaultObj()
{
	static class ULevelTravelStationData* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelTravelStationData*>(ULevelTravelStationData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.ResurrectTravelStationData
// (None)

class UClass* UResurrectTravelStationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResurrectTravelStationData");

	return Clss;
}


// ResurrectTravelStationData GbxTravelStation.Default__ResurrectTravelStationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UResurrectTravelStationData* UResurrectTravelStationData::GetDefaultObj()
{
	static class UResurrectTravelStationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UResurrectTravelStationData*>(UResurrectTravelStationData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TeleportDestinationActor
// (Actor)

class UClass* ATeleportDestinationActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeleportDestinationActor");

	return Clss;
}


// TeleportDestinationActor GbxTravelStation.Default__TeleportDestinationActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATeleportDestinationActor* ATeleportDestinationActor::GetDefaultObj()
{
	static class ATeleportDestinationActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATeleportDestinationActor*>(ATeleportDestinationActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.TeleportDestinationActor.TeleportPlayersToDestination
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeleportDestinationActor*   Destination                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATeleportDestinationActor::TeleportPlayersToDestination(class UObject* WorldContextObject, class ATeleportDestinationActor* Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeleportDestinationActor", "TeleportPlayersToDestination");

	Params::ATeleportDestinationActor_TeleportPlayersToDestination_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Destination = Destination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTravelStation.TravelStationBase
// (Actor)

class UClass* ATravelStationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationBase");

	return Clss;
}


// TravelStationBase GbxTravelStation.Default__TravelStationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATravelStationBase* ATravelStationBase::GetDefaultObj()
{
	static class ATravelStationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATravelStationBase*>(ATravelStationBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TravelStationModuleSettings
// (None)

class UClass* UTravelStationModuleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationModuleSettings");

	return Clss;
}


// TravelStationModuleSettings GbxTravelStation.Default__TravelStationModuleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationModuleSettings* UTravelStationModuleSettings::GetDefaultObj()
{
	static class UTravelStationModuleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationModuleSettings*>(UTravelStationModuleSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TravelStationResurrectComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTravelStationResurrectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationResurrectComponent");

	return Clss;
}


// TravelStationResurrectComponent GbxTravelStation.Default__TravelStationResurrectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationResurrectComponent* UTravelStationResurrectComponent::GetDefaultObj()
{
	static class UTravelStationResurrectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationResurrectComponent*>(UTravelStationResurrectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTravelStation.TravelStationResurrectComponent.OnRep_StationIsActive
// (Final, Native, Public)
// Parameters:

void UTravelStationResurrectComponent::OnRep_StationIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationResurrectComponent", "OnRep_StationIsActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTravelStation.TravelStationResurrectComponent.ActivateTravelStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForceActivation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTravelStationResurrectComponent::ActivateTravelStation(bool bForceActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelStationResurrectComponent", "ActivateTravelStation");

	Params::UTravelStationResurrectComponent_ActivateTravelStation_Params Parms{};

	Parms.bForceActivation = bForceActivation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxTravelStation.TravelStationSpawnPointInterface
// (None)

class UClass* ITravelStationSpawnPointInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationSpawnPointInterface");

	return Clss;
}


// TravelStationSpawnPointInterface GbxTravelStation.Default__TravelStationSpawnPointInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITravelStationSpawnPointInterface* ITravelStationSpawnPointInterface::GetDefaultObj()
{
	static class ITravelStationSpawnPointInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITravelStationSpawnPointInterface*>(ITravelStationSpawnPointInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TravelStationSpawnPointComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTravelStationSpawnPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationSpawnPointComponent");

	return Clss;
}


// TravelStationSpawnPointComponent GbxTravelStation.Default__TravelStationSpawnPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationSpawnPointComponent* UTravelStationSpawnPointComponent::GetDefaultObj()
{
	static class UTravelStationSpawnPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationSpawnPointComponent*>(UTravelStationSpawnPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTravelStation.TravelStationVehicleSpawnPointComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTravelStationVehicleSpawnPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelStationVehicleSpawnPointComponent");

	return Clss;
}


// TravelStationVehicleSpawnPointComponent GbxTravelStation.Default__TravelStationVehicleSpawnPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTravelStationVehicleSpawnPointComponent* UTravelStationVehicleSpawnPointComponent::GetDefaultObj()
{
	static class UTravelStationVehicleSpawnPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelStationVehicleSpawnPointComponent*>(UTravelStationVehicleSpawnPointComponent::StaticClass()->DefaultObject);

	return Default;
}

}


