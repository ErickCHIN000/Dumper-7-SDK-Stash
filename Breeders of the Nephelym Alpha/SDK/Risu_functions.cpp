#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Risu.Risu_C
// (None)

class UClass* URisu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Risu_C");

	return Clss;
}


// Risu_C Risu.Default__Risu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URisu_C* URisu_C::GetDefaultObj()
{
	static class URisu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URisu_C*>(URisu_C::StaticClass()->DefaultObject);

	return Default;
}

}


