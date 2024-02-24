#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericDecalActor.GenericDecalActor_C
// (Actor)

class UClass* AGenericDecalActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericDecalActor_C");

	return Clss;
}


// GenericDecalActor_C GenericDecalActor.Default__GenericDecalActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericDecalActor_C* AGenericDecalActor_C::GetDefaultObj()
{
	static class AGenericDecalActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericDecalActor_C*>(AGenericDecalActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


