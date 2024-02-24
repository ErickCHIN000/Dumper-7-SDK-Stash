#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_OilFilter.Trash_OilFilter_C
// (Actor)

class UClass* ATrash_OilFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_OilFilter_C");

	return Clss;
}


// Trash_OilFilter_C Trash_OilFilter.Default__Trash_OilFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_OilFilter_C* ATrash_OilFilter_C::GetDefaultObj()
{
	static class ATrash_OilFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_OilFilter_C*>(ATrash_OilFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


