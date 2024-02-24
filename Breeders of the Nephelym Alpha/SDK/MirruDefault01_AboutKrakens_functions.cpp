#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_AboutKrakens.MirruDefault01_AboutKrakens_C
// (None)

class UClass* UMirruDefault01_AboutKrakens_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_AboutKrakens_C");

	return Clss;
}


// MirruDefault01_AboutKrakens_C MirruDefault01_AboutKrakens.Default__MirruDefault01_AboutKrakens_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_AboutKrakens_C* UMirruDefault01_AboutKrakens_C::GetDefaultObj()
{
	static class UMirruDefault01_AboutKrakens_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_AboutKrakens_C*>(UMirruDefault01_AboutKrakens_C::StaticClass()->DefaultObject);

	return Default;
}

}


