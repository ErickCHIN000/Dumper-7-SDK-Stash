#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CloudsLighting.CloudsLightingSystem
// (Actor)

class UClass* ACloudsLightingSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CloudsLightingSystem");

	return Clss;
}


// CloudsLightingSystem CloudsLighting.Default__CloudsLightingSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ACloudsLightingSystem* ACloudsLightingSystem::GetDefaultObj()
{
	static class ACloudsLightingSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ACloudsLightingSystem*>(ACloudsLightingSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CloudsLighting.CloudsLightingSystem.IsValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACloudsLightingSystem::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CloudsLightingSystem", "IsValid");

	Params::ACloudsLightingSystem_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CloudsLighting.VolumetricLightSource
// (Actor)

class UClass* AVolumetricLightSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumetricLightSource");

	return Clss;
}


// VolumetricLightSource CloudsLighting.Default__VolumetricLightSource
// (Public, ClassDefaultObject, ArchetypeObject)

class AVolumetricLightSource* AVolumetricLightSource::GetDefaultObj()
{
	static class AVolumetricLightSource* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolumetricLightSource*>(AVolumetricLightSource::StaticClass()->DefaultObject);

	return Default;
}


// Class CloudsLighting.VolumetricPointLight
// (Actor)

class UClass* AVolumetricPointLight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumetricPointLight");

	return Clss;
}


// VolumetricPointLight CloudsLighting.Default__VolumetricPointLight
// (Public, ClassDefaultObject, ArchetypeObject)

class AVolumetricPointLight* AVolumetricPointLight::GetDefaultObj()
{
	static class AVolumetricPointLight* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolumetricPointLight*>(AVolumetricPointLight::StaticClass()->DefaultObject);

	return Default;
}


// Class CloudsLighting.VolumetricSpotLight
// (Actor)

class UClass* AVolumetricSpotLight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumetricSpotLight");

	return Clss;
}


// VolumetricSpotLight CloudsLighting.Default__VolumetricSpotLight
// (Public, ClassDefaultObject, ArchetypeObject)

class AVolumetricSpotLight* AVolumetricSpotLight::GetDefaultObj()
{
	static class AVolumetricSpotLight* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolumetricSpotLight*>(AVolumetricSpotLight::StaticClass()->DefaultObject);

	return Default;
}

}


