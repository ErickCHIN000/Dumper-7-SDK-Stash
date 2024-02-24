#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_SparkPlug.Trash_SparkPlug_C
// (Actor)

class UClass* ATrash_SparkPlug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_SparkPlug_C");

	return Clss;
}


// Trash_SparkPlug_C Trash_SparkPlug.Default__Trash_SparkPlug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_SparkPlug_C* ATrash_SparkPlug_C::GetDefaultObj()
{
	static class ATrash_SparkPlug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_SparkPlug_C*>(ATrash_SparkPlug_C::StaticClass()->DefaultObject);

	return Default;
}

}


