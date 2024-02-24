#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Bolt.Trash_Bolt_C
// (Actor)

class UClass* ATrash_Bolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Bolt_C");

	return Clss;
}


// Trash_Bolt_C Trash_Bolt.Default__Trash_Bolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Bolt_C* ATrash_Bolt_C::GetDefaultObj()
{
	static class ATrash_Bolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Bolt_C*>(ATrash_Bolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


