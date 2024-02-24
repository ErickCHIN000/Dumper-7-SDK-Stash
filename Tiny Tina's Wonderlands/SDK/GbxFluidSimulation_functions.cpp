#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxFluidSimulation.VoxelDataProvider
// (None)

class UClass* UVoxelDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelDataProvider");

	return Clss;
}


// VoxelDataProvider GbxFluidSimulation.Default__VoxelDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelDataProvider* UVoxelDataProvider::GetDefaultObj()
{
	static class UVoxelDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelDataProvider*>(UVoxelDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxFluidSimulation.FluidSimDataProvider
// (None)

class UClass* UFluidSimDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FluidSimDataProvider");

	return Clss;
}


// FluidSimDataProvider GbxFluidSimulation.Default__FluidSimDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFluidSimDataProvider* UFluidSimDataProvider::GetDefaultObj()
{
	static class UFluidSimDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFluidSimDataProvider*>(UFluidSimDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider
// (None)

class UClass* UQuickFluidVelocitySolverDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuickFluidVelocitySolverDataProvider");

	return Clss;
}


// QuickFluidVelocitySolverDataProvider GbxFluidSimulation.Default__QuickFluidVelocitySolverDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuickFluidVelocitySolverDataProvider* UQuickFluidVelocitySolverDataProvider::GetDefaultObj()
{
	static class UQuickFluidVelocitySolverDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuickFluidVelocitySolverDataProvider*>(UQuickFluidVelocitySolverDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.StepSim
// (Final, Native, Public)
// Parameters:

void UQuickFluidVelocitySolverDataProvider::StepSim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickFluidVelocitySolverDataProvider", "StepSim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.RunSim
// (Final, Native, Public)
// Parameters:

void UQuickFluidVelocitySolverDataProvider::RunSim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickFluidVelocitySolverDataProvider", "RunSim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ResetSim
// (Final, Native, Public)
// Parameters:

void UQuickFluidVelocitySolverDataProvider::ResetSim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickFluidVelocitySolverDataProvider", "ResetSim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.InitSim
// (Final, Native, Public)
// Parameters:

void UQuickFluidVelocitySolverDataProvider::InitSim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickFluidVelocitySolverDataProvider", "InitSim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxFluidSimulation.QuickFluidVelocitySolverDataProvider.ClearData
// (Final, Native, Public)
// Parameters:

void UQuickFluidVelocitySolverDataProvider::ClearData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuickFluidVelocitySolverDataProvider", "ClearData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


