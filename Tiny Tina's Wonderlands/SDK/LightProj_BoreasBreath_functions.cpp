#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_BoreasBreath.LightProj_BoreasBreath_C
// (None)

class UClass* ULightProj_BoreasBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_BoreasBreath_C");

	return Clss;
}


// LightProj_BoreasBreath_C LightProj_BoreasBreath.Default__LightProj_BoreasBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_BoreasBreath_C* ULightProj_BoreasBreath_C::GetDefaultObj()
{
	static class ULightProj_BoreasBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_BoreasBreath_C*>(ULightProj_BoreasBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


