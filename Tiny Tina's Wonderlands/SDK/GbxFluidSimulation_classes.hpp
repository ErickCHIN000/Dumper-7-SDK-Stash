#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxFluidSimulation.VoxelDataProvider
class UVoxelDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVoxelDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxFluidSimulation.FluidSimDataProvider
class UFluidSimDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFluidSimDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider
class UQuickFluidVelocitySolverDataProvider : public UFluidSimDataProvider
{
public:

	static class UClass* StaticClass();
	static class UQuickFluidVelocitySolverDataProvider* GetDefaultObj();

	void StepSim();
	void RunSim();
	void ResetSim();
	void InitSim();
	void ClearData();
};

}


