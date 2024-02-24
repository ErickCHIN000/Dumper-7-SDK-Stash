#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01.MirruDefault01_C
// (None)

class UClass* UMirruDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_C");

	return Clss;
}


// MirruDefault01_C MirruDefault01.Default__MirruDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_C* UMirruDefault01_C::GetDefaultObj()
{
	static class UMirruDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_C*>(UMirruDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


