#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PrefabricatorRuntime.PrefabActor
// (Actor)

class UClass* APrefabActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabActor");

	return Clss;
}


// PrefabActor PrefabricatorRuntime.Default__PrefabActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APrefabActor* APrefabActor::GetDefaultObj()
{
	static class APrefabActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APrefabActor*>(APrefabActor::StaticClass()->DefaultObject);

	return Default;
}


// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APrefabActor::SavePrefab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabActor", "SavePrefab");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream               InRandom                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APrefabActor::RandomizeSeed(struct FRandomStream& InRandom, bool bRecursive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabActor", "RandomizeSeed");

	Params::APrefabActor_RandomizeSeed_Params Parms{};

	Parms.InRandom = InRandom;
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void APrefabActor::LoadPrefab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabActor", "LoadPrefab");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APrefabActor::IsPrefabOutdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabActor", "IsPrefabOutdated");

	Params::APrefabActor_IsPrefabOutdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrefabricatorAsset*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabActor", "GetPrefabAsset");

	Params::APrefabActor_GetPrefabAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PrefabricatorRuntime.ReplicablePrefabActor
// (Actor)

class UClass* AReplicablePrefabActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicablePrefabActor");

	return Clss;
}


// ReplicablePrefabActor PrefabricatorRuntime.Default__ReplicablePrefabActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AReplicablePrefabActor* AReplicablePrefabActor::GetDefaultObj()
{
	static class AReplicablePrefabActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AReplicablePrefabActor*>(AReplicablePrefabActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabComponent
// (SceneComponent)

class UClass* UPrefabComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabComponent");

	return Clss;
}


// PrefabComponent PrefabricatorRuntime.Default__PrefabComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabComponent* UPrefabComponent::GetDefaultObj()
{
	static class UPrefabComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabComponent*>(UPrefabComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabDebugActor
// (Actor)

class UClass* APrefabDebugActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabDebugActor");

	return Clss;
}


// PrefabDebugActor PrefabricatorRuntime.Default__PrefabDebugActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APrefabDebugActor* APrefabDebugActor::GetDefaultObj()
{
	static class APrefabDebugActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APrefabDebugActor*>(APrefabDebugActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabRandomizer
// (Actor)

class UClass* APrefabRandomizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabRandomizer");

	return Clss;
}


// PrefabRandomizer PrefabricatorRuntime.Default__PrefabRandomizer
// (Public, ClassDefaultObject, ArchetypeObject)

class APrefabRandomizer* APrefabRandomizer::GetDefaultObj()
{
	static class APrefabRandomizer* Default = nullptr;

	if (!Default)
		Default = static_cast<APrefabRandomizer*>(APrefabRandomizer::StaticClass()->DefaultObject);

	return Default;
}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InSeed                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APrefabRandomizer::Randomize(int32 InSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabRandomizer", "Randomize");

	Params::APrefabRandomizer_Randomize_Params Parms{};

	Parms.InSeed = InSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PrefabricatorRuntime.PrefabricatorProperty
// (None)

class UClass* UPrefabricatorProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorProperty");

	return Clss;
}


// PrefabricatorProperty PrefabricatorRuntime.Default__PrefabricatorProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorProperty* UPrefabricatorProperty::GetDefaultObj()
{
	static class UPrefabricatorProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorProperty*>(UPrefabricatorProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabricatorEventListener
// (None)

class UClass* UPrefabricatorEventListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorEventListener");

	return Clss;
}


// PrefabricatorEventListener PrefabricatorRuntime.Default__PrefabricatorEventListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorEventListener* UPrefabricatorEventListener::GetDefaultObj()
{
	static class UPrefabricatorEventListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorEventListener*>(UPrefabricatorEventListener::StaticClass()->DefaultObject);

	return Default;
}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APrefabActor*                Prefab                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorEventListener", "PostSpawn");

	Params::UPrefabricatorEventListener_PostSpawn_Params Parms{};

	Parms.Prefab = Prefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// (None)

class UClass* UPrefabricatorAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorAssetInterface");

	return Clss;
}


// PrefabricatorAssetInterface PrefabricatorRuntime.Default__PrefabricatorAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorAssetInterface* UPrefabricatorAssetInterface::GetDefaultObj()
{
	static class UPrefabricatorAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorAssetInterface*>(UPrefabricatorAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabricatorAsset
// (None)

class UClass* UPrefabricatorAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorAsset");

	return Clss;
}


// PrefabricatorAsset PrefabricatorRuntime.Default__PrefabricatorAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorAsset* UPrefabricatorAsset::GetDefaultObj()
{
	static class UPrefabricatorAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorAsset*>(UPrefabricatorAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// (None)

class UClass* UPrefabricatorAssetCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorAssetCollection");

	return Clss;
}


// PrefabricatorAssetCollection PrefabricatorRuntime.Default__PrefabricatorAssetCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorAssetCollection* UPrefabricatorAssetCollection::GetDefaultObj()
{
	static class UPrefabricatorAssetCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorAssetCollection*>(UPrefabricatorAssetCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// (None)

class UClass* UPrefabricatorAssetUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorAssetUserData");

	return Clss;
}


// PrefabricatorAssetUserData PrefabricatorRuntime.Default__PrefabricatorAssetUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorAssetUserData* UPrefabricatorAssetUserData::GetDefaultObj()
{
	static class UPrefabricatorAssetUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorAssetUserData*>(UPrefabricatorAssetUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// (None)

class UClass* UPrefabricatorBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorBlueprintLibrary");

	return Clss;
}


// PrefabricatorBlueprintLibrary PrefabricatorRuntime.Default__PrefabricatorBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorBlueprintLibrary* UPrefabricatorBlueprintLibrary::GetDefaultObj()
{
	static class UPrefabricatorBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorBlueprintLibrary*>(UPrefabricatorBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APrefabActor*                PrefabActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::UnlinkPrefab(class APrefabActor* PrefabActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "UnlinkPrefab");

	Params::UPrefabricatorBlueprintLibrary_UnlinkPrefab_Params Parms{};

	Parms.PrefabActor = PrefabActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface*Prefab                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Seed                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, struct FTransform& Transform, int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "SpawnPrefab");

	Params::UPrefabricatorBlueprintLibrary_SpawnPrefab_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Prefab = Prefab;
	Parms.Transform = Transform;
	Parms.Seed = Seed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APrefabActor*                PrefabActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface*Prefab                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReloadPrefab                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "SetPrefabAsset");

	Params::UPrefabricatorBlueprintLibrary_SetPrefabAsset_Params Parms{};

	Parms.PrefabActor = PrefabActor;
	Parms.Prefab = Prefab;
	Parms.bReloadPrefab = bReloadPrefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APrefabActor*                PrefabActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRandomStream               InRandom                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::RandomizePrefab(class APrefabActor* PrefabActor, struct FRandomStream& InRandom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "RandomizePrefab");

	Params::UPrefabricatorBlueprintLibrary_RandomizePrefab_Params Parms{};

	Parms.PrefabActor = PrefabActor;
	Parms.InRandom = InRandom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Prefab                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              AttachedActors                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "GetAllAttachedActors");

	Params::UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params Parms{};

	Parms.Prefab = Prefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttachedActors != nullptr)
		*AttachedActors = std::move(Parms.AttachedActors);

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::FindTopMostPrefabActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrefabricatorBlueprintLibrary", "FindTopMostPrefabActor");

	Params::UPrefabricatorBlueprintLibrary_FindTopMostPrefabActor_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PrefabricatorRuntime.PrefabricatorSettings
// (None)

class UClass* UPrefabricatorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabricatorSettings");

	return Clss;
}


// PrefabricatorSettings PrefabricatorRuntime.Default__PrefabricatorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabricatorSettings* UPrefabricatorSettings::GetDefaultObj()
{
	static class UPrefabricatorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabricatorSettings*>(UPrefabricatorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// (SceneComponent)

class UClass* UPrefabSeedLinkerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabSeedLinkerComponent");

	return Clss;
}


// PrefabSeedLinkerComponent PrefabricatorRuntime.Default__PrefabSeedLinkerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrefabSeedLinkerComponent* UPrefabSeedLinkerComponent::GetDefaultObj()
{
	static class UPrefabSeedLinkerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrefabSeedLinkerComponent*>(UPrefabSeedLinkerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PrefabricatorRuntime.PrefabSeedLinker
// (Actor)

class UClass* APrefabSeedLinker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrefabSeedLinker");

	return Clss;
}


// PrefabSeedLinker PrefabricatorRuntime.Default__PrefabSeedLinker
// (Public, ClassDefaultObject, ArchetypeObject)

class APrefabSeedLinker* APrefabSeedLinker::GetDefaultObj()
{
	static class APrefabSeedLinker* Default = nullptr;

	if (!Default)
		Default = static_cast<APrefabSeedLinker*>(APrefabSeedLinker::StaticClass()->DefaultObject);

	return Default;
}

}


