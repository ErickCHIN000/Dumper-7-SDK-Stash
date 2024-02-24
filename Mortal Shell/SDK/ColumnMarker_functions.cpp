#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ColumnMarker.ColumnMarker_C
// (Actor)

class UClass* AColumnMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColumnMarker_C");

	return Clss;
}


// ColumnMarker_C ColumnMarker.Default__ColumnMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AColumnMarker_C* AColumnMarker_C::GetDefaultObj()
{
	static class AColumnMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AColumnMarker_C*>(AColumnMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


