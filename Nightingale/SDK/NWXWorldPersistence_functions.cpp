#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXWorldPersistence.PersistentWorldState
// (None)

class UClass* UPersistentWorldState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentWorldState");

	return Clss;
}


// PersistentWorldState NWXWorldPersistence.Default__PersistentWorldState
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistentWorldState* UPersistentWorldState::GetDefaultObj()
{
	static class UPersistentWorldState* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentWorldState*>(UPersistentWorldState::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceTestActorComponent
// (None)

class UClass* UWorldPersistenceTestActorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceTestActorComponent");

	return Clss;
}


// WorldPersistenceTestActorComponent NWXWorldPersistence.Default__WorldPersistenceTestActorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldPersistenceTestActorComponent* UWorldPersistenceTestActorComponent::GetDefaultObj()
{
	static class UWorldPersistenceTestActorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldPersistenceTestActorComponent*>(UWorldPersistenceTestActorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceTestSceneComponent
// (SceneComponent)

class UClass* UWorldPersistenceTestSceneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceTestSceneComponent");

	return Clss;
}


// WorldPersistenceTestSceneComponent NWXWorldPersistence.Default__WorldPersistenceTestSceneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldPersistenceTestSceneComponent* UWorldPersistenceTestSceneComponent::GetDefaultObj()
{
	static class UWorldPersistenceTestSceneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldPersistenceTestSceneComponent*>(UWorldPersistenceTestSceneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceTestActorComponentOptOut
// (None)

class UClass* UWorldPersistenceTestActorComponentOptOut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceTestActorComponentOptOut");

	return Clss;
}


// WorldPersistenceTestActorComponentOptOut NWXWorldPersistence.Default__WorldPersistenceTestActorComponentOptOut
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldPersistenceTestActorComponentOptOut* UWorldPersistenceTestActorComponentOptOut::GetDefaultObj()
{
	static class UWorldPersistenceTestActorComponentOptOut* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldPersistenceTestActorComponentOptOut*>(UWorldPersistenceTestActorComponentOptOut::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceTestActor
// (Actor)

class UClass* AWorldPersistenceTestActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceTestActor");

	return Clss;
}


// WorldPersistenceTestActor NWXWorldPersistence.Default__WorldPersistenceTestActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AWorldPersistenceTestActor* AWorldPersistenceTestActor::GetDefaultObj()
{
	static class AWorldPersistenceTestActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AWorldPersistenceTestActor*>(AWorldPersistenceTestActor::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceTestActorOptOut
// (Actor)

class UClass* AWorldPersistenceTestActorOptOut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceTestActorOptOut");

	return Clss;
}


// WorldPersistenceTestActorOptOut NWXWorldPersistence.Default__WorldPersistenceTestActorOptOut
// (Public, ClassDefaultObject, ArchetypeObject)

class AWorldPersistenceTestActorOptOut* AWorldPersistenceTestActorOptOut::GetDefaultObj()
{
	static class AWorldPersistenceTestActorOptOut* Default = nullptr;

	if (!Default)
		Default = static_cast<AWorldPersistenceTestActorOptOut*>(AWorldPersistenceTestActorOptOut::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXWorldPersistence.WorldPersistenceObjectInterface
// (None)

class UClass* IWorldPersistenceObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceObjectInterface");

	return Clss;
}


// WorldPersistenceObjectInterface NWXWorldPersistence.Default__WorldPersistenceObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWorldPersistenceObjectInterface* IWorldPersistenceObjectInterface::GetDefaultObj()
{
	static class IWorldPersistenceObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWorldPersistenceObjectInterface*>(IWorldPersistenceObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXWorldPersistence.WorldPersistenceObjectInterface.ShouldOptOutOfPersistenceStore
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IWorldPersistenceObjectInterface::ShouldOptOutOfPersistenceStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceObjectInterface", "ShouldOptOutOfPersistenceStore");

	Params::IWorldPersistenceObjectInterface_ShouldOptOutOfPersistenceStore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceObjectInterface.OnPersistentDataRestored
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void IWorldPersistenceObjectInterface::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceObjectInterface", "OnPersistentDataRestored");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceObjectInterface.OnLinkedReferencesRestored
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void IWorldPersistenceObjectInterface::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceObjectInterface", "OnLinkedReferencesRestored");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class NWXWorldPersistence.WorldPersistenceSettings
// (None)

class UClass* UWorldPersistenceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceSettings");

	return Clss;
}


// WorldPersistenceSettings NWXWorldPersistence.Default__WorldPersistenceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldPersistenceSettings* UWorldPersistenceSettings::GetDefaultObj()
{
	static class UWorldPersistenceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldPersistenceSettings*>(UWorldPersistenceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXWorldPersistence.WorldPersistenceSettings.GetUnadornedWorldSaveFileFullName
// (Final, Native, Public, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldPersistenceSettings::GetUnadornedWorldSaveFileFullName(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSettings", "GetUnadornedWorldSaveFileFullName");

	Params::UWorldPersistenceSettings_GetUnadornedWorldSaveFileFullName_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSettings.GetSaveDirectorySettingOrDefault
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldPersistenceSettings::GetSaveDirectorySettingOrDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSettings", "GetSaveDirectorySettingOrDefault");

	Params::UWorldPersistenceSettings_GetSaveDirectorySettingOrDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSettings.GetPeriodicWorldSaveFileFullName
// (Final, Native, Public, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldPersistenceSettings::GetPeriodicWorldSaveFileFullName(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSettings", "GetPeriodicWorldSaveFileFullName");

	Params::UWorldPersistenceSettings_GetPeriodicWorldSaveFileFullName_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSettings.GetLoadPersistenceFileFullName
// (Final, Native, Public, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldPersistenceSettings::GetLoadPersistenceFileFullName(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSettings", "GetLoadPersistenceFileFullName");

	Params::UWorldPersistenceSettings_GetLoadPersistenceFileFullName_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSettings.GetFinalWorldSaveFileFullName
// (Final, Native, Public, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWorldPersistenceSettings::GetFinalWorldSaveFileFullName(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSettings", "GetFinalWorldSaveFileFullName");

	Params::UWorldPersistenceSettings_GetFinalWorldSaveFileFullName_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXWorldPersistence.WorldPersistenceSubsystem
// (None)

class UClass* UWorldPersistenceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldPersistenceSubsystem");

	return Clss;
}


// WorldPersistenceSubsystem NWXWorldPersistence.Default__WorldPersistenceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldPersistenceSubsystem* UWorldPersistenceSubsystem::GetDefaultObj()
{
	static class UWorldPersistenceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldPersistenceSubsystem*>(UWorldPersistenceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.WorldStateIsLoadedFromPersistence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldPersistenceSubsystem::WorldStateIsLoadedFromPersistence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "WorldStateIsLoadedFromPersistence");

	Params::UWorldPersistenceSubsystem_WorldStateIsLoadedFromPersistence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.StoreGenericObjectMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class UObject*>GenericDataMap                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::StoreGenericObjectMap(TMap<class FString, class UObject*>& GenericDataMap, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "StoreGenericObjectMap");

	Params::UWorldPersistenceSubsystem_StoreGenericObjectMap_Params Parms{};

	Parms.GenericDataMap = GenericDataMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.StoreGenericObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldPersistenceSubsystem::StoreGenericObject(const class FString& Key, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "StoreGenericObject");

	Params::UWorldPersistenceSubsystem_StoreGenericObject_Params Parms{};

	Parms.Key = Key;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.SavePersistentWorldDataToFile
// (Final, Native, Public, Const)
// Parameters:
// class FString                      SaveFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::SavePersistentWorldDataToFile(const class FString& SaveFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "SavePersistentWorldDataToFile");

	Params::UWorldPersistenceSubsystem_SavePersistentWorldDataToFile_Params Parms{};

	Parms.SaveFilePath = SaveFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.RestoreWorld
// (Final, Native, Public, Const)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::RestoreWorld(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "RestoreWorld");

	Params::UWorldPersistenceSubsystem_RestoreWorld_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::OnActorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "OnActorDestroyed");

	Params::UWorldPersistenceSubsystem_OnActorDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.MaybeLoadPersistentWorldDataFromSettings
// (Final, Native, Public, Const)
// Parameters:

void UWorldPersistenceSubsystem::MaybeLoadPersistentWorldDataFromSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "MaybeLoadPersistentWorldDataFromSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.LoadWorldDataFromFile
// (Final, Native, Public, Const)
// Parameters:
// class FString                      SaveFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::LoadWorldDataFromFile(const class FString& SaveFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "LoadWorldDataFromFile");

	Params::UWorldPersistenceSubsystem_LoadWorldDataFromFile_Params Parms{};

	Parms.SaveFilePath = SaveFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.LoadWorldDataFromBackend
// (Final, Native, Public, Const)
// Parameters:
// class FString                      BackendName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::LoadWorldDataFromBackend(const class FString& BackendName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "LoadWorldDataFromBackend");

	Params::UWorldPersistenceSubsystem_LoadWorldDataFromBackend_Params Parms{};

	Parms.BackendName = BackendName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.IsTrackingRunningWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldPersistenceSubsystem::IsTrackingRunningWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "IsTrackingRunningWorld");

	Params::UWorldPersistenceSubsystem_IsTrackingRunningWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.HasPersistenceBeenAppliedToWorld
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldPersistenceSubsystem::HasPersistenceBeenAppliedToWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "HasPersistenceBeenAppliedToWorld");

	Params::UWorldPersistenceSubsystem_HasPersistenceBeenAppliedToWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandlePreLoadMap
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FWorldContext               WorldContext                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::HandlePreLoadMap(struct FWorldContext& WorldContext, const class FString& MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "HandlePreLoadMap");

	Params::UWorldPersistenceSubsystem_HandlePreLoadMap_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandlePostLoadMap
// (Final, Native, Private)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::HandlePostLoadMap(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "HandlePostLoadMap");

	Params::UWorldPersistenceSubsystem_HandlePostLoadMap_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandleLevelRemovedFromWorld
// (Final, Native, Private)
// Parameters:
// class ULevel*                      Level                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::HandleLevelRemovedFromWorld(class ULevel* Level, class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "HandleLevelRemovedFromWorld");

	Params::UWorldPersistenceSubsystem_HandleLevelRemovedFromWorld_Params Parms{};

	Parms.Level = Level;
	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.HandleLevelAddedToWorld
// (Final, Native, Private)
// Parameters:
// class ULevel*                      Level                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::HandleLevelAddedToWorld(class ULevel* Level, class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "HandleLevelAddedToWorld");

	Params::UWorldPersistenceSubsystem_HandleLevelAddedToWorld_Params Parms{};

	Parms.Level = Level;
	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetLoadState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class E_WorldPersistenceLoadStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class E_WorldPersistenceLoadState UWorldPersistenceSubsystem::GetLoadState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "GetLoadState");

	Params::UWorldPersistenceSubsystem_GetLoadState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetGenericObjectMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class UObject*>GenericDataMap                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldPersistenceSubsystem::GetGenericObjectMap(TMap<class FString, class UObject*>* GenericDataMap, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "GetGenericObjectMap");

	Params::UWorldPersistenceSubsystem_GetGenericObjectMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GenericDataMap != nullptr)
		*GenericDataMap = Parms.GenericDataMap;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function NWXWorldPersistence.WorldPersistenceSubsystem.GetGenericObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWorldPersistenceSubsystem::GetGenericObject(const class FString& Key, class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldPersistenceSubsystem", "GetGenericObject");

	Params::UWorldPersistenceSubsystem_GetGenericObject_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

	return Parms.ReturnValue;

}

}


