#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PopulationControl.BlockZonePC
// (Actor)

class UClass* ABlockZonePC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockZonePC");

	return Clss;
}


// BlockZonePC PopulationControl.Default__BlockZonePC
// (Public, ClassDefaultObject, ArchetypeObject)

class ABlockZonePC* ABlockZonePC::GetDefaultObj()
{
	static class ABlockZonePC* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlockZonePC*>(ABlockZonePC::StaticClass()->DefaultObject);

	return Default;
}


// Class PopulationControl.PopulationControlSpawner
// (Actor)

class UClass* APopulationControlSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopulationControlSpawner");

	return Clss;
}


// PopulationControlSpawner PopulationControl.Default__PopulationControlSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class APopulationControlSpawner* APopulationControlSpawner::GetDefaultObj()
{
	static class APopulationControlSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<APopulationControlSpawner*>(APopulationControlSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function PopulationControl.PopulationControlSpawner.SaveWithoutClearCache
// (Final, Native, Public)
// Parameters:

void APopulationControlSpawner::SaveWithoutClearCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "SaveWithoutClearCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PopulationControl.PopulationControlSpawner.SaveAndClearCache
// (Final, Native, Public)
// Parameters:

void APopulationControlSpawner::SaveAndClearCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "SaveAndClearCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PopulationControl.PopulationControlSpawner.RebuildSpawnPoints
// (Final, Native, Public)
// Parameters:

void APopulationControlSpawner::RebuildSpawnPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "RebuildSpawnPoints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PopulationControl.PopulationControlSpawner.GetIsExcludeNpcFromThePopulationControl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      SetActorRef                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APopulationControlSpawner::GetIsExcludeNpcFromThePopulationControl(class AActor* SetActorRef, bool* bIsValidActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "GetIsExcludeNpcFromThePopulationControl");

	Params::APopulationControlSpawner_GetIsExcludeNpcFromThePopulationControl_Params Parms{};

	Parms.SetActorRef = SetActorRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidActor != nullptr)
		*bIsValidActor = Parms.bIsValidActor;

	return Parms.ReturnValue;

}


// Function PopulationControl.PopulationControlSpawner.ExternalControlSpawnNPC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SpawnActorRef                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APopulationControlSpawner::ExternalControlSpawnNPC(class AActor* SpawnActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "ExternalControlSpawnNPC");

	Params::APopulationControlSpawner_ExternalControlSpawnNPC_Params Parms{};

	Parms.SpawnActorRef = SpawnActorRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PopulationControl.PopulationControlSpawner.ExternalControlDestroyNPC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      DestroyActorRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APopulationControlSpawner::ExternalControlDestroyNPC(class AActor* DestroyActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "ExternalControlDestroyNPC");

	Params::APopulationControlSpawner_ExternalControlDestroyNPC_Params Parms{};

	Parms.DestroyActorRef = DestroyActorRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PopulationControl.PopulationControlSpawner.ExcludeThisNpcFromThePopulationControl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ETypeExclude            SetType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SetActorRef                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValidActor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APopulationControlSpawner::ExcludeThisNpcFromThePopulationControl(enum class ETypeExclude SetType, class AActor* SetActorRef, bool* bIsValidActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "ExcludeThisNpcFromThePopulationControl");

	Params::APopulationControlSpawner_ExcludeThisNpcFromThePopulationControl_Params Parms{};

	Parms.SetType = SetType;
	Parms.SetActorRef = SetActorRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidActor != nullptr)
		*bIsValidActor = Parms.bIsValidActor;

}


// Function PopulationControl.PopulationControlSpawner.ClearedThisNpcFromThePopulationControl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      SetActorRef                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCleared                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APopulationControlSpawner::ClearedThisNpcFromThePopulationControl(class AActor* SetActorRef, bool* bIsCleared)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopulationControlSpawner", "ClearedThisNpcFromThePopulationControl");

	Params::APopulationControlSpawner_ClearedThisNpcFromThePopulationControl_Params Parms{};

	Parms.SetActorRef = SetActorRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsCleared != nullptr)
		*bIsCleared = Parms.bIsCleared;

}

}


