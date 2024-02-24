#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruSnatch_BreederF.MirruSnatch_BreederF_C
// (None)

class UClass* UMirruSnatch_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruSnatch_BreederF_C");

	return Clss;
}


// MirruSnatch_BreederF_C MirruSnatch_BreederF.Default__MirruSnatch_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruSnatch_BreederF_C* UMirruSnatch_BreederF_C::GetDefaultObj()
{
	static class UMirruSnatch_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruSnatch_BreederF_C*>(UMirruSnatch_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


