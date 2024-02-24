#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNpcDeathContainer.GenericNpcDeathContainer_C
// (Actor)

class UClass* AGenericNpcDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNpcDeathContainer_C");

	return Clss;
}


// GenericNpcDeathContainer_C GenericNpcDeathContainer.Default__GenericNpcDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNpcDeathContainer_C* AGenericNpcDeathContainer_C::GetDefaultObj()
{
	static class AGenericNpcDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNpcDeathContainer_C*>(AGenericNpcDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


