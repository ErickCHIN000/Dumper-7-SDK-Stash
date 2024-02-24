#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RTXGI.DDGIBlueprintLibrary
// (None)

class UClass* UDDGIBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DDGIBlueprintLibrary");

	return Clss;
}


// DDGIBlueprintLibrary RTXGI.Default__DDGIBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDDGIBlueprintLibrary* UDDGIBlueprintLibrary::GetDefaultObj()
{
	static class UDDGIBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDDGIBlueprintLibrary*>(UDDGIBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RTXGI.DDGIBlueprintLibrary.EnableVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDDGIVolumeComponent*        DDGIVolumeComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIBlueprintLibrary::EnableVolume(class UDDGIVolumeComponent* DDGIVolumeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIBlueprintLibrary", "EnableVolume");

	Params::UDDGIBlueprintLibrary_EnableVolume_Params Parms{};

	Parms.DDGIVolumeComponent = DDGIVolumeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIBlueprintLibrary.DisableVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDDGIVolumeComponent*        DDGIVolumeComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIBlueprintLibrary::DisableVolume(class UDDGIVolumeComponent* DDGIVolumeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIBlueprintLibrary", "DisableVolume");

	Params::UDDGIBlueprintLibrary_DisableVolume_Params Parms{};

	Parms.DDGIVolumeComponent = DDGIVolumeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIBlueprintLibrary.ClearProbeData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDDGIVolumeComponent*        DDGIVolumeComponent                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIBlueprintLibrary::ClearProbeData(class UDDGIVolumeComponent* DDGIVolumeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIBlueprintLibrary", "ClearProbeData");

	Params::UDDGIBlueprintLibrary_ClearProbeData_Params Parms{};

	Parms.DDGIVolumeComponent = DDGIVolumeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RTXGI.DDGIVolume
// (Actor)

class UClass* ADDGIVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DDGIVolume");

	return Clss;
}


// DDGIVolume RTXGI.Default__DDGIVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ADDGIVolume* ADDGIVolume::GetDefaultObj()
{
	static class ADDGIVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ADDGIVolume*>(ADDGIVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class RTXGI.DDGIVolumeComponent
// (SceneComponent)

class UClass* UDDGIVolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DDGIVolumeComponent");

	return Clss;
}


// DDGIVolumeComponent RTXGI.Default__DDGIVolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDDGIVolumeComponent* UDDGIVolumeComponent::GetDefaultObj()
{
	static class UDDGIVolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDDGIVolumeComponent*>(UDDGIVolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
// (Final, Exec, Native, Public)
// Parameters:

void UDDGIVolumeComponent::DDGIClearVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "DDGIClearVolumes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RTXGI.RTXGIPluginSettings
// (None)

class UClass* URTXGIPluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RTXGIPluginSettings");

	return Clss;
}


// RTXGIPluginSettings RTXGI.Default__RTXGIPluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URTXGIPluginSettings* URTXGIPluginSettings::GetDefaultObj()
{
	static class URTXGIPluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URTXGIPluginSettings*>(URTXGIPluginSettings::StaticClass()->DefaultObject);

	return Default;
}

}


