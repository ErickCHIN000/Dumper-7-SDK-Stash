#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_MultipleHearts.MirruDefault01_MultipleHearts_C
// (None)

class UClass* UMirruDefault01_MultipleHearts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_MultipleHearts_C");

	return Clss;
}


// MirruDefault01_MultipleHearts_C MirruDefault01_MultipleHearts.Default__MirruDefault01_MultipleHearts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_MultipleHearts_C* UMirruDefault01_MultipleHearts_C::GetDefaultObj()
{
	static class UMirruDefault01_MultipleHearts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_MultipleHearts_C*>(UMirruDefault01_MultipleHearts_C::StaticClass()->DefaultObject);

	return Default;
}

}


