#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_Formuria.MirruDefault01_Formuria_C
// (None)

class UClass* UMirruDefault01_Formuria_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_Formuria_C");

	return Clss;
}


// MirruDefault01_Formuria_C MirruDefault01_Formuria.Default__MirruDefault01_Formuria_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_Formuria_C* UMirruDefault01_Formuria_C::GetDefaultObj()
{
	static class UMirruDefault01_Formuria_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_Formuria_C*>(UMirruDefault01_Formuria_C::StaticClass()->DefaultObject);

	return Default;
}

}


