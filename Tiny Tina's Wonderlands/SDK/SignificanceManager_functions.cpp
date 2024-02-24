#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SignificanceManager.SignificanceManager
// (None)

class UClass* USignificanceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SignificanceManager");

	return Clss;
}


// SignificanceManager SignificanceManager.Default__SignificanceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USignificanceManager* USignificanceManager::GetDefaultObj()
{
	static class USignificanceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USignificanceManager*>(USignificanceManager::StaticClass()->DefaultObject);

	return Default;
}


// Function SignificanceManager.SignificanceManager.UnregisterForTickOptim
// (Final, Native, Public)
// Parameters:
// class AActor*                      TickOptimActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USignificanceManager::UnregisterForTickOptim(class AActor* TickOptimActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SignificanceManager", "UnregisterForTickOptim");

	Params::USignificanceManager_UnregisterForTickOptim_Params Parms{};

	Parms.TickOptimActor = TickOptimActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SignificanceManager.SignificanceManager.OnTickActorEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                      TickOptimActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USignificanceManager::OnTickActorEndPlay(class AActor* TickOptimActor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SignificanceManager", "OnTickActorEndPlay");

	Params::USignificanceManager_OnTickActorEndPlay_Params Parms{};

	Parms.TickOptimActor = TickOptimActor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


