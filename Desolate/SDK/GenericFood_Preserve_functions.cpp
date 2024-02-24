#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericFood_Preserve.GenericFood_Preserve_C
// (Actor)

class UClass* AGenericFood_Preserve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericFood_Preserve_C");

	return Clss;
}


// GenericFood_Preserve_C GenericFood_Preserve.Default__GenericFood_Preserve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericFood_Preserve_C* AGenericFood_Preserve_C::GetDefaultObj()
{
	static class AGenericFood_Preserve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericFood_Preserve_C*>(AGenericFood_Preserve_C::StaticClass()->DefaultObject);

	return Default;
}

}


