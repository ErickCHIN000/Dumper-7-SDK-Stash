#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TitanCave.TitanCave_C
// (None)

class UClass* UTitanCave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitanCave_C");

	return Clss;
}


// TitanCave_C TitanCave.Default__TitanCave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitanCave_C* UTitanCave_C::GetDefaultObj()
{
	static class UTitanCave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitanCave_C*>(UTitanCave_C::StaticClass()->DefaultObject);

	return Default;
}

}


