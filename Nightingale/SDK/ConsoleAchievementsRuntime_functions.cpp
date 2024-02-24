#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConsoleAchievementsRuntime.ConsoleProxyAchievements
// (None)

class UClass* UConsoleProxyAchievements::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleProxyAchievements");

	return Clss;
}


// ConsoleProxyAchievements ConsoleAchievementsRuntime.Default__ConsoleProxyAchievements
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleProxyAchievements* UConsoleProxyAchievements::GetDefaultObj()
{
	static class UConsoleProxyAchievements* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleProxyAchievements*>(UConsoleProxyAchievements::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleAchievementsRuntime.ConsoleProxyAchievements.DebugUpload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UConsoleProxyAchievements::DebugUpload(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleProxyAchievements", "DebugUpload");

	Params::UConsoleProxyAchievements_DebugUpload_Params Parms{};

	Parms.Args = Args;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleAchievementsRuntime.ConsoleProxyAchievements.DebugConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UConsoleProxyAchievements::DebugConnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleProxyAchievements", "DebugConnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


