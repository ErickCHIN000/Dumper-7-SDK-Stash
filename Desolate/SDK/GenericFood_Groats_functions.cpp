#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Groats.GenericFood_Groats_C
// (Actor)

class UClass* AGenericFood_Groats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Groats_C");

	return Clss;
}


// GenericFood_Groats_C GenericFood_Groats.Default__GenericFood_Groats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Groats_C* AGenericFood_Groats_C::GetDefaultObj()
{
	static class AGenericFood_Groats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Groats_C*>(AGenericFood_Groats_C::StaticClass()->DefaultObject);

	return Default;
}

}


