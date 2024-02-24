#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxDynamicRoom.DynamicRoomBaseData
// (None)

class UClass* UDynamicRoomBaseData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomBaseData");

	return Clss;
}


// DynamicRoomBaseData GbxDynamicRoom.Default__DynamicRoomBaseData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicRoomBaseData* UDynamicRoomBaseData::GetDefaultObj()
{
	static class UDynamicRoomBaseData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicRoomBaseData*>(UDynamicRoomBaseData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDynamicRoom.DynamicRoomBase
// (Actor)

class UClass* ADynamicRoomBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomBase");

	return Clss;
}


// DynamicRoomBase GbxDynamicRoom.Default__DynamicRoomBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicRoomBase* ADynamicRoomBase::GetDefaultObj()
{
	static class ADynamicRoomBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicRoomBase*>(ADynamicRoomBase::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADynamicRoomBase::VisibleForAllPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "VisibleForAllPlayers");

	Params::ADynamicRoomBase_VisibleForAllPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom
// (Native, Public, BlueprintCallable)
// Parameters:

void ADynamicRoomBase::UnloadRoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "UnloadRoom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.SetRoomVisiblity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADynamicRoomBase::SetRoomVisiblity(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "SetRoomVisiblity");

	Params::ADynamicRoomBase_SetRoomVisiblity_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible
// (Final, Native, Public)
// Parameters:

void ADynamicRoomBase::SelectedRoomVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "SelectedRoomVisible");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded
// (Final, Native, Public)
// Parameters:

void ADynamicRoomBase::SelectedRoomLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "SelectedRoomLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded
// (Final, Native, Public)
// Parameters:

void ADynamicRoomBase::SelectedRoomClassLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "SelectedRoomClassLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FDynamicRoomReplicationInfo OldRoomInfoToLoad                                                (Parm, OutParm, NativeAccessSpecifierPublic)

void ADynamicRoomBase::OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "OnRep_RoomInfoToLoad");

	Params::ADynamicRoomBase_OnRep_RoomInfoToLoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OldRoomInfoToLoad != nullptr)
		*OldRoomInfoToLoad = std::move(Parms.OldRoomInfoToLoad);

}


// Function GbxDynamicRoom.DynamicRoomBase.IsRoomSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADynamicRoomBase::IsRoomSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "IsRoomSet");

	Params::ADynamicRoomBase_IsRoomSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDynamicRoom.DynamicRoomBase.IsRoomLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADynamicRoomBase::IsRoomLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "IsRoomLoaded");

	Params::ADynamicRoomBase_IsRoomLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicRoomBaseData*        RoomToLoad                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CustomData                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitiallyVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADynamicRoomBase::InstanceRoom(class UDynamicRoomBaseData* RoomToLoad, const class FString& CustomData, bool bInitiallyVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "InstanceRoom");

	Params::ADynamicRoomBase_InstanceRoom_Params Parms{};

	Parms.RoomToLoad = RoomToLoad;
	Parms.CustomData = CustomData;
	Parms.bInitiallyVisible = bInitiallyVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom
// (Native, Public, BlueprintCallable)
// Parameters:

void ADynamicRoomBase::InstanceRandomRoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "InstanceRandomRoom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AGbxCharacter*>       Players                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ADynamicRoomBase::GetPlayersInLevel(TArray<class AGbxCharacter*>* Players)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "GetPlayersInLevel");

	Params::ADynamicRoomBase_GetPlayersInLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Players != nullptr)
		*Players = std::move(Parms.Players);

}


// Function GbxDynamicRoom.DynamicRoomBase.GetLoadedRoomLevels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULevel*>              Levels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ADynamicRoomBase::GetLoadedRoomLevels(TArray<class ULevel*>* Levels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "GetLoadedRoomLevels");

	Params::ADynamicRoomBase_GetLoadedRoomLevels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Levels != nullptr)
		*Levels = std::move(Parms.Levels);

}


// Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicRoomBaseData*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDynamicRoomBaseData* ADynamicRoomBase::GetCurrentRoomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "GetCurrentRoomData");

	Params::ADynamicRoomBase_GetCurrentRoomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDynamicRoomBaseData*>AvailableRooms                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ADynamicRoomBase::GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "GetAvailableRoomData");

	Params::ADynamicRoomBase_GetAvailableRoomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AvailableRooms != nullptr)
		*AvailableRooms = std::move(Parms.AvailableRooms);

}


// Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest
// (Final, Native, Private)
// Parameters:

void ADynamicRoomBase::AllPlayerVisibilityTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomBase", "AllPlayerVisibilityTest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxDynamicRoom.DynamicRoomActor
// (Actor)

class UClass* ADynamicRoomActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomActor");

	return Clss;
}


// DynamicRoomActor GbxDynamicRoom.Default__DynamicRoomActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicRoomActor* ADynamicRoomActor::GetDefaultObj()
{
	static class ADynamicRoomActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicRoomActor*>(ADynamicRoomActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDynamicRoom.DynamicRoomActorData
// (None)

class UClass* UDynamicRoomActorData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomActorData");

	return Clss;
}


// DynamicRoomActorData GbxDynamicRoom.Default__DynamicRoomActorData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicRoomActorData* UDynamicRoomActorData::GetDefaultObj()
{
	static class UDynamicRoomActorData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicRoomActorData*>(UDynamicRoomActorData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicRoomActorData::HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicRoomActorData", "HandleDynamicRoomActorSpawned");

	Params::UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.InstanceIndex = InstanceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxDynamicRoom.DynamicRoomLevelData
// (None)

class UClass* UDynamicRoomLevelData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomLevelData");

	return Clss;
}


// DynamicRoomLevelData GbxDynamicRoom.Default__DynamicRoomLevelData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicRoomLevelData* UDynamicRoomLevelData::GetDefaultObj()
{
	static class UDynamicRoomLevelData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicRoomLevelData*>(UDynamicRoomLevelData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxDynamicRoom.DynamicRoomModuleSettings
// (None)

class UClass* UDynamicRoomModuleSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicRoomModuleSettings");

	return Clss;
}


// DynamicRoomModuleSettings GbxDynamicRoom.Default__DynamicRoomModuleSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicRoomModuleSettings* UDynamicRoomModuleSettings::GetDefaultObj()
{
	static class UDynamicRoomModuleSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicRoomModuleSettings*>(UDynamicRoomModuleSettings::StaticClass()->DefaultObject);

	return Default;
}

}


