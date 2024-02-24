#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericLostControlEffect.GenericLostControlEffect_C
// (Actor)

class UClass* AGenericLostControlEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericLostControlEffect_C");

	return Clss;
}


// GenericLostControlEffect_C GenericLostControlEffect.Default__GenericLostControlEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericLostControlEffect_C* AGenericLostControlEffect_C::GetDefaultObj()
{
	static class AGenericLostControlEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericLostControlEffect_C*>(AGenericLostControlEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


