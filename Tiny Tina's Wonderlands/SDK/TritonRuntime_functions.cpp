#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TritonRuntime.TritonAcousticDataComponent
// (SceneComponent)

class UClass* UTritonAcousticDataComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonAcousticDataComponent");

	return Clss;
}


// TritonAcousticDataComponent TritonRuntime.Default__TritonAcousticDataComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTritonAcousticDataComponent* UTritonAcousticDataComponent::GetDefaultObj()
{
	static class UTritonAcousticDataComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTritonAcousticDataComponent*>(UTritonAcousticDataComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials
// (Final, Native, Public)
// Parameters:

void UTritonAcousticDataComponent::VisualizeMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonAcousticDataComponent", "VisualizeMaterials");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations
// (Final, Native, Public)
// Parameters:

void UTritonAcousticDataComponent::UpdateProbeLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonAcousticDataComponent", "UpdateProbeLocations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData
// (Final, Native, Public)
// Parameters:

void UTritonAcousticDataComponent::RefreshCachedVoxelData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonAcousticDataComponent", "RefreshCachedVoxelData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData
// (Final, Native, Public)
// Parameters:

void UTritonAcousticDataComponent::BuildFallbackAcousticData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonAcousticDataComponent", "BuildFallbackAcousticData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations
// (Final, Native, Public)
// Parameters:

void UTritonAcousticDataComponent::AuditProbeLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonAcousticDataComponent", "AuditProbeLocations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TritonRuntime.TritonZone
// (Actor)

class UClass* ATritonZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonZone");

	return Clss;
}


// TritonZone TritonRuntime.Default__TritonZone
// (Public, ClassDefaultObject, ArchetypeObject)

class ATritonZone* ATritonZone::GetDefaultObj()
{
	static class ATritonZone* Default = nullptr;

	if (!Default)
		Default = static_cast<ATritonZone*>(ATritonZone::StaticClass()->DefaultObject);

	return Default;
}


// Class TritonRuntime.TritonVoxelOverrideVolume
// (Actor)

class UClass* ATritonVoxelOverrideVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonVoxelOverrideVolume");

	return Clss;
}


// TritonVoxelOverrideVolume TritonRuntime.Default__TritonVoxelOverrideVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ATritonVoxelOverrideVolume* ATritonVoxelOverrideVolume::GetDefaultObj()
{
	static class ATritonVoxelOverrideVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ATritonVoxelOverrideVolume*>(ATritonVoxelOverrideVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class TritonRuntime.TritonProbeHelper
// (Actor)

class UClass* ATritonProbeHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonProbeHelper");

	return Clss;
}


// TritonProbeHelper TritonRuntime.Default__TritonProbeHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class ATritonProbeHelper* ATritonProbeHelper::GetDefaultObj()
{
	static class ATritonProbeHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<ATritonProbeHelper*>(ATritonProbeHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class TritonRuntime.TritonProbeLocationProvider
// (Actor)

class UClass* ATritonProbeLocationProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonProbeLocationProvider");

	return Clss;
}


// TritonProbeLocationProvider TritonRuntime.Default__TritonProbeLocationProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class ATritonProbeLocationProvider* ATritonProbeLocationProvider::GetDefaultObj()
{
	static class ATritonProbeLocationProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<ATritonProbeLocationProvider*>(ATritonProbeLocationProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FBoxSphereBounds            WorldBoxSphere                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UAudioOcclusionVoxelDataProvider*GeoVoxels                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioOcclusionVoxelDataProvider*NavVoxels                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Out_ResultProbeLocations                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ATritonProbeLocationProvider::FindProbeLocations(struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* Out_ResultProbeLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TritonProbeLocationProvider", "FindProbeLocations");

	Params::ATritonProbeLocationProvider_FindProbeLocations_Params Parms{};

	Parms.WorldBoxSphere = WorldBoxSphere;
	Parms.GeoVoxels = GeoVoxels;
	Parms.NavVoxels = NavVoxels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out_ResultProbeLocations != nullptr)
		*Out_ResultProbeLocations = std::move(Parms.Out_ResultProbeLocations);

}


// Class TritonRuntime.TritonSettings
// (None)

class UClass* UTritonSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TritonSettings");

	return Clss;
}


// TritonSettings TritonRuntime.Default__TritonSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTritonSettings* UTritonSettings::GetDefaultObj()
{
	static class UTritonSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTritonSettings*>(UTritonSettings::StaticClass()->DefaultObject);

	return Default;
}

}


