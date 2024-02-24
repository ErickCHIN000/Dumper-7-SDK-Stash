#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_TED_Dagger.LightProj_TED_Dagger_C
// (None)

class UClass* ULightProj_TED_Dagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_TED_Dagger_C");

	return Clss;
}


// LightProj_TED_Dagger_C LightProj_TED_Dagger.Default__LightProj_TED_Dagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_TED_Dagger_C* ULightProj_TED_Dagger_C::GetDefaultObj()
{
	static class ULightProj_TED_Dagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_TED_Dagger_C*>(ULightProj_TED_Dagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


