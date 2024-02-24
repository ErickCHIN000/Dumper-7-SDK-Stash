#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_Princess.MirruDefault01_Princess_C
// (None)

class UClass* UMirruDefault01_Princess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_Princess_C");

	return Clss;
}


// MirruDefault01_Princess_C MirruDefault01_Princess.Default__MirruDefault01_Princess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_Princess_C* UMirruDefault01_Princess_C::GetDefaultObj()
{
	static class UMirruDefault01_Princess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_Princess_C*>(UMirruDefault01_Princess_C::StaticClass()->DefaultObject);

	return Default;
}

}


