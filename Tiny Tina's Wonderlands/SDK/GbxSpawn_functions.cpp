#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxSpawn.Spawner
// (Actor)

class UClass* ASpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spawner");

	return Clss;
}


// Spawner GbxSpawn.Default__Spawner
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpawner* ASpawner::GetDefaultObj()
{
	static class ASpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpawner*>(ASpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.Spawner.SuspendAllActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::SuspendAllActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "SuspendAllActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.SetTeamOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                       OverrideTeam                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::SetTeamOverride(class UTeam* OverrideTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "SetTeamOverride");

	Params::ASpawner_SetTeamOverride_Params Parms{};

	Parms.OverrideTeam = OverrideTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                       NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::SetTeam(class UTeam* NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "SetTeam");

	Params::ASpawner_SetTeam_Params Parms{};

	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.SetSpawnerStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnerStyle*               Style                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::SetSpawnerStyle(class USpawnerStyle* Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "SetSpawnerStyle");

	Params::ASpawner_SetSpawnerStyle_Params Parms{};

	Parms.Style = Style;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.SetAlwaysActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAlwaysActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::SetAlwaysActive(bool bInAlwaysActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "SetAlwaysActive");

	Params::ASpawner_SetAlwaysActive_Params Parms{};

	Parms.bInAlwaysActive = bInAlwaysActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.ResetSpawning
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::ResetSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "ResetSpawning");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.OverrideSpawnerStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnerStyle*               NewSpawnerStyle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "OverrideSpawnerStyle");

	Params::ASpawner_OverrideSpawnerStyle_Params Parms{};

	Parms.NewSpawnerStyle = NewSpawnerStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.OnSpawningComplete
// (Final, Native, Private)
// Parameters:
// class ASpawner*                    Spawner                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawner::OnSpawningComplete(class ASpawner* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "OnSpawningComplete");

	Params::ASpawner_OnSpawningComplete_Params Parms{};

	Parms.Spawner = Spawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.IsSpawnerEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASpawner::IsSpawnerEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "IsSpawnerEnabled");

	Params::ASpawner_IsSpawnerEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.IsFinishedSpawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASpawner::IsFinishedSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "IsFinishedSpawning");

	Params::ASpawner_IsFinishedSpawning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.GetSpawnPointComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnPointComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnPointComponent* ASpawner::GetSpawnPointComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "GetSpawnPointComponent");

	Params::ASpawner_GetSpawnPointComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.GetSpawnerTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerTeamComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnerTeamComponent* ASpawner::GetSpawnerTeamComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "GetSpawnerTeamComponent");

	Params::ASpawner_GetSpawnerTeamComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.GetSpawnerLinkComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerLinkComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnerLinkComponent* ASpawner::GetSpawnerLinkComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "GetSpawnerLinkComponent");

	Params::ASpawner_GetSpawnerLinkComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.GetSpawnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnerComponent* ASpawner::GetSpawnerComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "GetSpawnerComponent");

	Params::ASpawner_GetSpawnerComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.GetNumAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ASpawner::GetNumAliveActors(bool bIncludeExternal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "GetNumAliveActors");

	Params::ASpawner_GetNumAliveActors_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.Spawner.EnableSpawner
// (Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::EnableSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "EnableSpawner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.DisableSpawner
// (Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::DisableSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "DisableSpawner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.DestroyAllActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::DestroyAllActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "DestroyAllActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.CompleteScriptedWarmup
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawner::CompleteScriptedWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "CompleteScriptedWarmup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.Spawner.AreAllDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASpawner::AreAllDead(bool bIncludeExternal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spawner", "AreAllDead");

	Params::ASpawner_AreAllDead_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USpawnerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerComponent");

	return Clss;
}


// SpawnerComponent GbxSpawn.Default__SpawnerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerComponent* USpawnerComponent::GetDefaultObj()
{
	static class USpawnerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerComponent*>(USpawnerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnerComponent.SuspendAllActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::SuspendAllActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SuspendAllActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                       NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::SetTeam(class UTeam* NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SetTeam");

	Params::USpawnerComponent_SetTeam_Params Parms{};

	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.SetSpawnOptionsWaves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnOptionData*            NewSpawnOptions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::SetSpawnOptionsWaves(class USpawnOptionData* NewSpawnOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SetSpawnOptionsWaves");

	Params::USpawnerComponent_SetSpawnOptionsWaves_Params Parms{};

	Parms.NewSpawnOptions = NewSpawnOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.SetSpawnOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnOptionData*            NewSpawnOptions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::SetSpawnOptions(class USpawnOptionData* NewSpawnOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SetSpawnOptions");

	Params::USpawnerComponent_SetSpawnOptions_Params Parms{};

	Parms.NewSpawnOptions = NewSpawnOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.SetSpawnOptionForWaveId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnOptionData*            NewSpawnOption                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WaveId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::SetSpawnOptionForWaveId(class USpawnOptionData* NewSpawnOption, int32 WaveId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SetSpawnOptionForWaveId");

	Params::USpawnerComponent_SetSpawnOptionForWaveId_Params Parms{};

	Parms.NewSpawnOption = NewSpawnOption;
	Parms.WaveId = WaveId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.SetNumWaves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumWaves                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::SetNumWaves(int32 NumWaves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "SetNumWaves");

	Params::USpawnerComponent_SetNumWaves_Params Parms{};

	Parms.NumWaves = NumWaves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.ResetSpawning
// (Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::ResetSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "ResetSpawning");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.OverrideSpawnerStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnerStyle*               NewSpawnerStyle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerComponent::OverrideSpawnerStyle(class USpawnerStyle* NewSpawnerStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "OverrideSpawnerStyle");

	Params::USpawnerComponent_OverrideSpawnerStyle_Params Parms{};

	Parms.NewSpawnerStyle = NewSpawnerStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.IsSpawnerStyleClassAllowed
// (Final, Native, Private, Const)
// Parameters:
// class UClass*                      SpawnerStyleClass                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerComponent::IsSpawnerStyleClassAllowed(class UClass* SpawnerStyleClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "IsSpawnerStyleClassAllowed");

	Params::USpawnerComponent_IsSpawnerStyleClassAllowed_Params Parms{};

	Parms.SpawnerStyleClass = SpawnerStyleClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.IsFinishedSpawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerComponent::IsFinishedSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "IsFinishedSpawning");

	Params::USpawnerComponent_IsFinishedSpawning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.IncludeExternalActorsForAllDiedEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::IncludeExternalActorsForAllDiedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "IncludeExternalActorsForAllDiedEvent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.GetSpawnOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnOptionData*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnOptionData* USpawnerComponent::GetSpawnOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetSpawnOptions");

	Params::USpawnerComponent_GetSpawnOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetParentSpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnerComponent* USpawnerComponent::GetParentSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetParentSpawner");

	Params::USpawnerComponent_GetParentSpawner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetNumSuspendedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpawnerComponent::GetNumSuspendedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetNumSuspendedActors");

	Params::USpawnerComponent_GetNumSuspendedActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetNumSpawnedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInGroup                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpawnerComponent::GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetNumSpawnedActors");

	Params::USpawnerComponent_GetNumSpawnedActors_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;
	Parms.bInGroup = bInGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetNumDeadActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInGroup                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpawnerComponent::GetNumDeadActors(bool bIncludeExternal, bool bInGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetNumDeadActors");

	Params::USpawnerComponent_GetNumDeadActors_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;
	Parms.bInGroup = bInGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetNumAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInGroup                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpawnerComponent::GetNumAliveActors(bool bIncludeExternal, bool bInGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetNumAliveActors");

	Params::USpawnerComponent_GetNumAliveActors_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;
	Parms.bInGroup = bInGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.GetAliveActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> USpawnerComponent::GetAliveActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "GetAliveActors");

	Params::USpawnerComponent_GetAliveActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerComponent.EnableSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::EnableSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "EnableSpawner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.DisableSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::DisableSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "DisableSpawner");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.DestroyAllActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::DestroyAllActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "DestroyAllActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.CompleteScriptedWarmup
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnerComponent::CompleteScriptedWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "CompleteScriptedWarmup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerComponent.AreAllDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeExternal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInGroup                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerComponent::AreAllDead(bool bIncludeExternal, bool bInGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerComponent", "AreAllDead");

	Params::USpawnerComponent_AreAllDead_Params Parms{};

	Parms.bIncludeExternal = bIncludeExternal;
	Parms.bInGroup = bInGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnPoint
// (Actor)

class UClass* ASpawnPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnPoint");

	return Clss;
}


// SpawnPoint GbxSpawn.Default__SpawnPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpawnPoint* ASpawnPoint::GetDefaultObj()
{
	static class ASpawnPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpawnPoint*>(ASpawnPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnPoint.SetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                NewTag                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpawnPoint::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPoint", "SetSpawnStyleTag");

	Params::ASpawnPoint_SetSpawnStyleTag_Params Parms{};

	Parms.NewTag = NewTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPoint.ResetStretchPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawnPoint::ResetStretchPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPoint", "ResetStretchPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPoint.GetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag ASpawnPoint::GetSpawnStyleTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPoint", "GetSpawnStyleTag");

	Params::ASpawnPoint_GetSpawnStyleTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnPoint.EnableSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawnPoint::EnableSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPoint", "EnableSpawnPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPoint.DisableSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASpawnPoint::DisableSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPoint", "DisableSpawnPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxSpawn.AnimNotify_SpawnAnim
// (None)

class UClass* UAnimNotify_SpawnAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_SpawnAnim");

	return Clss;
}


// AnimNotify_SpawnAnim GbxSpawn.Default__AnimNotify_SpawnAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_SpawnAnim* UAnimNotify_SpawnAnim::GetDefaultObj()
{
	static class UAnimNotify_SpawnAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_SpawnAnim*>(UAnimNotify_SpawnAnim::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.GbxAction_SpawnAnim
// (None)

class UClass* UGbxAction_SpawnAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_SpawnAnim");

	return Clss;
}


// GbxAction_SpawnAnim GbxSpawn.Default__GbxAction_SpawnAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_SpawnAnim* UGbxAction_SpawnAnim::GetDefaultObj()
{
	static class UGbxAction_SpawnAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_SpawnAnim*>(UGbxAction_SpawnAnim::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.GbxAction_SpawnAnim.K2_GetSpawnPoint
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGbxAction_SpawnAnim::K2_GetSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_SpawnAnim", "K2_GetSpawnPoint");

	Params::UGbxAction_SpawnAnim_K2_GetSpawnPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.GbxCondition_SpawnCostAvailable
// (None)

class UClass* UGbxCondition_SpawnCostAvailable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_SpawnCostAvailable");

	return Clss;
}


// GbxCondition_SpawnCostAvailable GbxSpawn.Default__GbxCondition_SpawnCostAvailable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_SpawnCostAvailable* UGbxCondition_SpawnCostAvailable::GetDefaultObj()
{
	static class UGbxCondition_SpawnCostAvailable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_SpawnCostAvailable*>(UGbxCondition_SpawnCostAvailable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.MultiSpawnPoint
// (Actor)

class UClass* AMultiSpawnPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiSpawnPoint");

	return Clss;
}


// MultiSpawnPoint GbxSpawn.Default__MultiSpawnPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class AMultiSpawnPoint* AMultiSpawnPoint::GetDefaultObj()
{
	static class AMultiSpawnPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<AMultiSpawnPoint*>(AMultiSpawnPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnDLCScript
// (None)

class UClass* USpawnDLCScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnDLCScript");

	return Clss;
}


// SpawnDLCScript GbxSpawn.Default__SpawnDLCScript
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnDLCScript* USpawnDLCScript::GetDefaultObj()
{
	static class USpawnDLCScript* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnDLCScript*>(USpawnDLCScript::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnDLCScript.OnAllSpawned
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*           SpawnerComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnDLCScript::OnAllSpawned(class USpawnerComponent* SpawnerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnDLCScript", "OnAllSpawned");

	Params::USpawnDLCScript_OnAllSpawned_Params Parms{};

	Parms.SpawnerComponent = SpawnerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxSpawn.SpawnDLCScript.OnAllDied
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*           SpawnerComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnDLCScript::OnAllDied(class USpawnerComponent* SpawnerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnDLCScript", "OnAllDied");

	Params::USpawnDLCScript_OnAllDied_Params Parms{};

	Parms.SpawnerComponent = SpawnerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxSpawn.SpawnDLCScript.OnActorSpawned
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*           SpawnerComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnDLCScript::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnDLCScript", "OnActorSpawned");

	Params::USpawnDLCScript_OnActorSpawned_Params Parms{};

	Parms.SpawnerComponent = SpawnerComponent;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxSpawn.SpawnDLCScript.OnActorDied
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent*           SpawnerComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnDLCScript::OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnDLCScript", "OnActorDied");

	Params::USpawnDLCScript_OnActorDied_Params Parms{};

	Parms.SpawnerComponent = SpawnerComponent;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxSpawn.SpawnDLCData
// (None)

class UClass* USpawnDLCData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnDLCData");

	return Clss;
}


// SpawnDLCData GbxSpawn.Default__SpawnDLCData
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnDLCData* USpawnDLCData::GetDefaultObj()
{
	static class USpawnDLCData* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnDLCData*>(USpawnDLCData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.GlobalSpawnDLCData
// (None)

class UClass* UGlobalSpawnDLCData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalSpawnDLCData");

	return Clss;
}


// GlobalSpawnDLCData GbxSpawn.Default__GlobalSpawnDLCData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalSpawnDLCData* UGlobalSpawnDLCData::GetDefaultObj()
{
	static class UGlobalSpawnDLCData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalSpawnDLCData*>(UGlobalSpawnDLCData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.DLCScriptedSpawerExpansionList
// (None)

class UClass* UDLCScriptedSpawerExpansionList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCScriptedSpawerExpansionList");

	return Clss;
}


// DLCScriptedSpawerExpansionList GbxSpawn.Default__DLCScriptedSpawerExpansionList
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLCScriptedSpawerExpansionList* UDLCScriptedSpawerExpansionList::GetDefaultObj()
{
	static class UDLCScriptedSpawerExpansionList* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCScriptedSpawerExpansionList*>(UDLCScriptedSpawerExpansionList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnedActorInterface
// (None)

class UClass* ISpawnedActorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnedActorInterface");

	return Clss;
}


// SpawnedActorInterface GbxSpawn.Default__SpawnedActorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISpawnedActorInterface* ISpawnedActorInterface::GetDefaultObj()
{
	static class ISpawnedActorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnedActorInterface*>(ISpawnedActorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerBlueprintLibrary
// (None)

class UClass* USpawnerBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerBlueprintLibrary");

	return Clss;
}


// SpawnerBlueprintLibrary GbxSpawn.Default__SpawnerBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerBlueprintLibrary* USpawnerBlueprintLibrary::GetDefaultObj()
{
	static class USpawnerBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerBlueprintLibrary*>(USpawnerBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnerBlueprintLibrary.SuspendSpawnedActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerBlueprintLibrary::SuspendSpawnedActors(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SuspendSpawnedActors");

	Params::USpawnerBlueprintLibrary_SuspendSpawnedActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnOptionData*            SpawnOptions                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawnOptionsTransform(class AActor* Context, class USpawnOptionData* SpawnOptions, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SpawnActorWithSpawnOptionsTransform");

	Params::USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsTransform_Params Parms{};

	Parms.Context = Context;
	Parms.SpawnOptions = SpawnOptions;
	Parms.SpawnTransform = SpawnTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptionsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpawnManagerAsyncRequest   Request                                                          (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpawnerBlueprintLibrary::SpawnActorWithSpawnOptionsAsync(class UObject* WorldContext, const struct FSpawnManagerAsyncRequest& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SpawnActorWithSpawnOptionsAsync");

	Params::USpawnerBlueprintLibrary_SpawnActorWithSpawnOptionsAsync_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawnOptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnOptionData*            SpawnOptions                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnPointComponent*        SpawnPointComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawnOptions(class AActor* Context, class USpawnOptionData* SpawnOptions, class USpawnPointComponent* SpawnPointComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SpawnActorWithSpawnOptions");

	Params::USpawnerBlueprintLibrary_SpawnActorWithSpawnOptions_Params Parms{};

	Parms.Context = Context;
	Parms.SpawnOptions = SpawnOptions;
	Parms.SpawnPointComponent = SpawnPointComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.SpawnActorWithSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnFactory*               Factory                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnPointComponent*        SpawnPointComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnerComponent*           SpawnerComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* USpawnerBlueprintLibrary::SpawnActorWithSpawner(class AActor* Context, class USpawnFactory* Factory, class USpawnPointComponent* SpawnPointComponent, class USpawnerComponent* SpawnerComponent, class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SpawnActorWithSpawner");

	Params::USpawnerBlueprintLibrary_SpawnActorWithSpawner_Params Parms{};

	Parms.Context = Context;
	Parms.Factory = Factory;
	Parms.SpawnPointComponent = SpawnPointComponent;
	Parms.SpawnerComponent = SpawnerComponent;
	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.SetMaxSpawnCost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewMaxSpawnCost                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerBlueprintLibrary::SetMaxSpawnCost(class UObject* WorldContextObject, int32 NewMaxSpawnCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "SetMaxSpawnCost");

	Params::USpawnerBlueprintLibrary_SetMaxSpawnCost_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewMaxSpawnCost = NewMaxSpawnCost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.RestoreSuspendedActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerBlueprintLibrary::RestoreSuspendedActors(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "RestoreSuspendedActors");

	Params::USpawnerBlueprintLibrary_RestoreSuspendedActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.RemoveActorFromSpawnSystem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerBlueprintLibrary::RemoveActorFromSpawnSystem(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "RemoveActorFromSpawnSystem");

	Params::USpawnerBlueprintLibrary_RemoveActorFromSpawnSystem_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnerBlueprintLibrary.CancelSpawnActorWithOptionsAsyncRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnerBlueprintLibrary::CancelSpawnActorWithOptionsAsyncRequest(class UObject* WorldContext, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerBlueprintLibrary", "CancelSpawnActorWithOptionsAsyncRequest");

	Params::USpawnerBlueprintLibrary_CancelSpawnActorWithOptionsAsyncRequest_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxSpawn.SpawnerLinkComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USpawnerLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerLinkComponent");

	return Clss;
}


// SpawnerLinkComponent GbxSpawn.Default__SpawnerLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerLinkComponent* USpawnerLinkComponent::GetDefaultObj()
{
	static class USpawnerLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerLinkComponent*>(USpawnerLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStateInterface
// (None)

class UClass* ISpawnerStateInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStateInterface");

	return Clss;
}


// SpawnerStateInterface GbxSpawn.Default__SpawnerStateInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISpawnerStateInterface* ISpawnerStateInterface::GetDefaultObj()
{
	static class ISpawnerStateInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnerStateInterface*>(ISpawnerStateInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle
// (None)

class UClass* USpawnerStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle");

	return Clss;
}


// SpawnerStyle GbxSpawn.Default__SpawnerStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle* USpawnerStyle::GetDefaultObj()
{
	static class USpawnerStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle*>(USpawnerStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle_Bunch
// (None)

class UClass* USpawnerStyle_Bunch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle_Bunch");

	return Clss;
}


// SpawnerStyle_Bunch GbxSpawn.Default__SpawnerStyle_Bunch
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle_Bunch* USpawnerStyle_Bunch::GetDefaultObj()
{
	static class USpawnerStyle_Bunch* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle_Bunch*>(USpawnerStyle_Bunch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle_BunchList
// (None)

class UClass* USpawnerStyle_BunchList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle_BunchList");

	return Clss;
}


// SpawnerStyle_BunchList GbxSpawn.Default__SpawnerStyle_BunchList
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle_BunchList* USpawnerStyle_BunchList::GetDefaultObj()
{
	static class USpawnerStyle_BunchList* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle_BunchList*>(USpawnerStyle_BunchList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle_Den
// (None)

class UClass* USpawnerStyle_Den::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle_Den");

	return Clss;
}


// SpawnerStyle_Den GbxSpawn.Default__SpawnerStyle_Den
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle_Den* USpawnerStyle_Den::GetDefaultObj()
{
	static class USpawnerStyle_Den* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle_Den*>(USpawnerStyle_Den::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle_Encounter
// (None)

class UClass* USpawnerStyle_Encounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle_Encounter");

	return Clss;
}


// SpawnerStyle_Encounter GbxSpawn.Default__SpawnerStyle_Encounter
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle_Encounter* USpawnerStyle_Encounter::GetDefaultObj()
{
	static class USpawnerStyle_Encounter* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle_Encounter*>(USpawnerStyle_Encounter::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyle_Single
// (None)

class UClass* USpawnerStyle_Single::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyle_Single");

	return Clss;
}


// SpawnerStyle_Single GbxSpawn.Default__SpawnerStyle_Single
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyle_Single* USpawnerStyle_Single::GetDefaultObj()
{
	static class USpawnerStyle_Single* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyle_Single*>(USpawnerStyle_Single::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnerStyleFactory_Bunch
// (None)

class UClass* USpawnerStyleFactory_Bunch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyleFactory_Bunch");

	return Clss;
}


// SpawnerStyleFactory_Bunch GbxSpawn.Default__SpawnerStyleFactory_Bunch
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyleFactory_Bunch* USpawnerStyleFactory_Bunch::GetDefaultObj()
{
	static class USpawnerStyleFactory_Bunch* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyleFactory_Bunch*>(USpawnerStyleFactory_Bunch::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnerStyleFactory_Bunch.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                      FactoryClass                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerStyleFactory_Bunch::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerStyleFactory_Bunch", "IsFactoryClassAllowed");

	Params::USpawnerStyleFactory_Bunch_IsFactoryClassAllowed_Params Parms{};

	Parms.FactoryClass = FactoryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnerStyleFactory_Den
// (None)

class UClass* USpawnerStyleFactory_Den::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyleFactory_Den");

	return Clss;
}


// SpawnerStyleFactory_Den GbxSpawn.Default__SpawnerStyleFactory_Den
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyleFactory_Den* USpawnerStyleFactory_Den::GetDefaultObj()
{
	static class USpawnerStyleFactory_Den* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyleFactory_Den*>(USpawnerStyleFactory_Den::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnerStyleFactory_Den.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                      FactoryClass                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerStyleFactory_Den::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerStyleFactory_Den", "IsFactoryClassAllowed");

	Params::USpawnerStyleFactory_Den_IsFactoryClassAllowed_Params Parms{};

	Parms.FactoryClass = FactoryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnerStyleFactory_Single
// (None)

class UClass* USpawnerStyleFactory_Single::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerStyleFactory_Single");

	return Clss;
}


// SpawnerStyleFactory_Single GbxSpawn.Default__SpawnerStyleFactory_Single
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerStyleFactory_Single* USpawnerStyleFactory_Single::GetDefaultObj()
{
	static class USpawnerStyleFactory_Single* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerStyleFactory_Single*>(USpawnerStyleFactory_Single::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnerStyleFactory_Single.IsFactoryClassAllowed
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                      FactoryClass                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnerStyleFactory_Single::IsFactoryClassAllowed(class UClass* FactoryClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerStyleFactory_Single", "IsFactoryClassAllowed");

	Params::USpawnerStyleFactory_Single_IsFactoryClassAllowed_Params Parms{};

	Parms.FactoryClass = FactoryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnerTeamComponent
// (None)

class UClass* USpawnerTeamComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerTeamComponent");

	return Clss;
}


// SpawnerTeamComponent GbxSpawn.Default__SpawnerTeamComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnerTeamComponent* USpawnerTeamComponent::GetDefaultObj()
{
	static class USpawnerTeamComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerTeamComponent*>(USpawnerTeamComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnFactory
// (None)

class UClass* USpawnFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnFactory");

	return Clss;
}


// SpawnFactory GbxSpawn.Default__SpawnFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnFactory* USpawnFactory::GetDefaultObj()
{
	static class USpawnFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnFactory*>(USpawnFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnFactory_Container
// (None)

class UClass* USpawnFactory_Container::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnFactory_Container");

	return Clss;
}


// SpawnFactory_Container GbxSpawn.Default__SpawnFactory_Container
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnFactory_Container* USpawnFactory_Container::GetDefaultObj()
{
	static class USpawnFactory_Container* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnFactory_Container*>(USpawnFactory_Container::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnFactory_ContainerSoftRef
// (None)

class UClass* USpawnFactory_ContainerSoftRef::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnFactory_ContainerSoftRef");

	return Clss;
}


// SpawnFactory_ContainerSoftRef GbxSpawn.Default__SpawnFactory_ContainerSoftRef
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnFactory_ContainerSoftRef* USpawnFactory_ContainerSoftRef::GetDefaultObj()
{
	static class USpawnFactory_ContainerSoftRef* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnFactory_ContainerSoftRef*>(USpawnFactory_ContainerSoftRef::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnFactory_Generic
// (None)

class UClass* USpawnFactory_Generic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnFactory_Generic");

	return Clss;
}


// SpawnFactory_Generic GbxSpawn.Default__SpawnFactory_Generic
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnFactory_Generic* USpawnFactory_Generic::GetDefaultObj()
{
	static class USpawnFactory_Generic* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnFactory_Generic*>(USpawnFactory_Generic::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnFactory_Generic.ShouldSkipActorProperty
// (Final, Native, Static, Private)
// Parameters:
// class UProperty*                   ActorProperty                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnFactory_Generic::ShouldSkipActorProperty(class UProperty* ActorProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnFactory_Generic", "ShouldSkipActorProperty");

	Params::USpawnFactory_Generic_ShouldSkipActorProperty_Params Parms{};

	Parms.ActorProperty = ActorProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxSpawn.SpawnManager
// (None)

class UClass* USpawnManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnManager");

	return Clss;
}


// SpawnManager GbxSpawn.Default__SpawnManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnManager* USpawnManager::GetDefaultObj()
{
	static class USpawnManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnManager*>(USpawnManager::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnManager.ActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnManager::ActorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnManager", "ActorDestroyed");

	Params::USpawnManager_ActorDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxSpawn.SpawnSystemEditorSettings
// (None)

class UClass* USpawnSystemEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnSystemEditorSettings");

	return Clss;
}


// SpawnSystemEditorSettings GbxSpawn.Default__SpawnSystemEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnSystemEditorSettings* USpawnSystemEditorSettings::GetDefaultObj()
{
	static class USpawnSystemEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnSystemEditorSettings*>(USpawnSystemEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnOptionData
// (None)

class UClass* USpawnOptionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnOptionData");

	return Clss;
}


// SpawnOptionData GbxSpawn.Default__SpawnOptionData
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnOptionData* USpawnOptionData::GetDefaultObj()
{
	static class USpawnOptionData* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnOptionData*>(USpawnOptionData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnOptionData.BeginAsyncLoadingAssets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnOptionData::BeginAsyncLoadingAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnOptionData", "BeginAsyncLoadingAssets");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxSpawn.SpawnPointComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USpawnPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnPointComponent");

	return Clss;
}


// SpawnPointComponent GbxSpawn.Default__SpawnPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnPointComponent* USpawnPointComponent::GetDefaultObj()
{
	static class USpawnPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnPointComponent*>(USpawnPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnPointComponent.SetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                NewTag                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnPointComponent::SetSpawnStyleTag(const struct FGameplayTag& NewTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "SetSpawnStyleTag");

	Params::USpawnPointComponent_SetSpawnStyleTag_Params Parms{};

	Parms.NewTag = NewTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPointComponent.ResetStretchPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnPointComponent::ResetStretchPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "ResetStretchPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPointComponent.HasSpawnAITreeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpawnPointComponent::HasSpawnAITreeTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "HasSpawnAITreeTag");

	Params::USpawnPointComponent_HasSpawnAITreeTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnPointComponent.GetStretchyPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform USpawnPointComponent::GetStretchyPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "GetStretchyPoint");

	Params::USpawnPointComponent_GetStretchyPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnPointComponent.GetSpawnStyleTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag USpawnPointComponent::GetSpawnStyleTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "GetSpawnStyleTag");

	Params::USpawnPointComponent_GetSpawnStyleTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnPointComponent.GetSpawnAITreeTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag USpawnPointComponent::GetSpawnAITreeTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "GetSpawnAITreeTag");

	Params::USpawnPointComponent_GetSpawnAITreeTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxSpawn.SpawnPointComponent.EnableSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnPointComponent::EnableSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "EnableSpawnPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPointComponent.DisableSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpawnPointComponent::DisableSpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPointComponent", "DisableSpawnPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxSpawn.SpawnPointProvider
// (None)

class UClass* ISpawnPointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnPointProvider");

	return Clss;
}


// SpawnPointProvider GbxSpawn.Default__SpawnPointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class ISpawnPointProvider* ISpawnPointProvider::GetDefaultObj()
{
	static class ISpawnPointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnPointProvider*>(ISpawnPointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxSpawn.SpawnPreviewComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USpawnPreviewComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnPreviewComponent");

	return Clss;
}


// SpawnPreviewComponent GbxSpawn.Default__SpawnPreviewComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnPreviewComponent* USpawnPreviewComponent::GetDefaultObj()
{
	static class USpawnPreviewComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnPreviewComponent*>(USpawnPreviewComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxSpawn.SpawnPreviewComponent.OnReplayAction
// (Final, Native, Private)
// Parameters:

void USpawnPreviewComponent::OnReplayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPreviewComponent", "OnReplayAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxSpawn.SpawnPreviewComponent.OnCycleActor
// (Final, Native, Private)
// Parameters:
// enum class ECycleDirection         Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnPreviewComponent::OnCycleActor(enum class ECycleDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnPreviewComponent", "OnCycleActor");

	Params::USpawnPreviewComponent_OnCycleActor_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


