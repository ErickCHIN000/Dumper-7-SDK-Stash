#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TwBenchmark.TwBenchmarkGameMode
// (Actor)

class UClass* ATwBenchmarkGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBenchmarkGameMode");

	return Clss;
}


// TwBenchmarkGameMode TwBenchmark.Default__TwBenchmarkGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwBenchmarkGameMode* ATwBenchmarkGameMode::GetDefaultObj()
{
	static class ATwBenchmarkGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwBenchmarkGameMode*>(ATwBenchmarkGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function TwBenchmark.TwBenchmarkGameMode.OnBenchmarkLevelLoaded
// (Final, Native, Private)
// Parameters:

void ATwBenchmarkGameMode::OnBenchmarkLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBenchmarkGameMode", "OnBenchmarkLevelLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwBenchmark.TwGameplayProfilerActor
// (Actor)

class UClass* ATwGameplayProfilerActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwGameplayProfilerActor");

	return Clss;
}


// TwGameplayProfilerActor TwBenchmark.Default__TwGameplayProfilerActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwGameplayProfilerActor* ATwGameplayProfilerActor::GetDefaultObj()
{
	static class ATwGameplayProfilerActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwGameplayProfilerActor*>(ATwGameplayProfilerActor::StaticClass()->DefaultObject);

	return Default;
}


// Function TwBenchmark.TwGameplayProfilerActor.EndProfiling
// (Final, Native, Private)
// Parameters:

void ATwGameplayProfilerActor::EndProfiling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwGameplayProfilerActor", "EndProfiling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwBenchmark.TwGameplayProfilerActor.BeginProfiling
// (Final, Native, Private)
// Parameters:

void ATwGameplayProfilerActor::BeginProfiling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwGameplayProfilerActor", "BeginProfiling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


