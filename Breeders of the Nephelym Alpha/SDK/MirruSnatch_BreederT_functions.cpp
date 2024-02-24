#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruSnatch_BreederT.MirruSnatch_BreederT_C
// (None)

class UClass* UMirruSnatch_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruSnatch_BreederT_C");

	return Clss;
}


// MirruSnatch_BreederT_C MirruSnatch_BreederT.Default__MirruSnatch_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruSnatch_BreederT_C* UMirruSnatch_BreederT_C::GetDefaultObj()
{
	static class UMirruSnatch_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruSnatch_BreederT_C*>(UMirruSnatch_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


