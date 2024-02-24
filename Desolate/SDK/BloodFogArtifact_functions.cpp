#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BloodFogArtifact.BloodFogArtifact_C
// (Actor)

class UClass* ABloodFogArtifact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BloodFogArtifact_C");

	return Clss;
}


// BloodFogArtifact_C BloodFogArtifact.Default__BloodFogArtifact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABloodFogArtifact_C* ABloodFogArtifact_C::GetDefaultObj()
{
	static class ABloodFogArtifact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABloodFogArtifact_C*>(ABloodFogArtifact_C::StaticClass()->DefaultObject);

	return Default;
}

}


