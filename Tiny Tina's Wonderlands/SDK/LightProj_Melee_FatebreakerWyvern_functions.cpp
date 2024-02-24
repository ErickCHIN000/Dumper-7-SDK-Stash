#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Melee_FatebreakerWyvern.LightProj_Melee_FatebreakerWyvern_C
// (None)

class UClass* ULightProj_Melee_FatebreakerWyvern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Melee_FatebreakerWyvern_C");

	return Clss;
}


// LightProj_Melee_FatebreakerWyvern_C LightProj_Melee_FatebreakerWyvern.Default__LightProj_Melee_FatebreakerWyvern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Melee_FatebreakerWyvern_C* ULightProj_Melee_FatebreakerWyvern_C::GetDefaultObj()
{
	static class ULightProj_Melee_FatebreakerWyvern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Melee_FatebreakerWyvern_C*>(ULightProj_Melee_FatebreakerWyvern_C::StaticClass()->DefaultObject);

	return Default;
}

}


