#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericTrash.GenericTrash_C
// (Actor)

class UClass* AGenericTrash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericTrash_C");

	return Clss;
}


// GenericTrash_C GenericTrash.Default__GenericTrash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericTrash_C* AGenericTrash_C::GetDefaultObj()
{
	static class AGenericTrash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericTrash_C*>(AGenericTrash_C::StaticClass()->DefaultObject);

	return Default;
}

}


