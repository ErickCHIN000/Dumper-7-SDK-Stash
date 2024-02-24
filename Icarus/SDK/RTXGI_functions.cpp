#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


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


// Function RTXGI.DDGIVolumeComponent.ToggleVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsVolumeEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIVolumeComponent::ToggleVolume(bool IsVolumeEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "ToggleVolume");

	Params::UDDGIVolumeComponent_ToggleVolume_Params Parms{};

	Parms.IsVolumeEnabled = IsVolumeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIVolumeComponent.SetProbesVisualization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsProbesVisualized                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIVolumeComponent::SetProbesVisualization(bool IsProbesVisualized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "SetProbesVisualization");

	Params::UDDGIVolumeComponent_SetProbesVisualization_Params Parms{};

	Parms.IsProbesVisualized = IsProbesVisualized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewLightMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIVolumeComponent::SetLightMultiplier(float NewLightMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "SetLightMultiplier");

	Params::UDDGIVolumeComponent_SetLightMultiplier_Params Parms{};

	Parms.NewLightMultiplier = NewLightMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewIrradianceScalar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIVolumeComponent::SetIrradianceScalar(float NewIrradianceScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "SetIrradianceScalar");

	Params::UDDGIVolumeComponent_SetIrradianceScalar_Params Parms{};

	Parms.NewIrradianceScalar = NewIrradianceScalar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewEmissiveMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDDGIVolumeComponent::SetEmissiveMultiplier(float NewEmissiveMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "SetEmissiveMultiplier");

	Params::UDDGIVolumeComponent_SetEmissiveMultiplier_Params Parms{};

	Parms.NewEmissiveMultiplier = NewEmissiveMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDDGIVolumeComponent::GetLightMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "GetLightMultiplier");

	Params::UDDGIVolumeComponent_GetLightMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDDGIVolumeComponent::GetIrradianceScalar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "GetIrradianceScalar");

	Params::UDDGIVolumeComponent_GetIrradianceScalar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDDGIVolumeComponent::GetEmissiveMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "GetEmissiveMultiplier");

	Params::UDDGIVolumeComponent_GetEmissiveMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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


// Function RTXGI.DDGIVolumeComponent.ClearProbeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDDGIVolumeComponent::ClearProbeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DDGIVolumeComponent", "ClearProbeData");



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


