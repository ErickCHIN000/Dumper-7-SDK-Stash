#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChurakasVocalChords.ChurakasVocalChords_C
// (Actor)

class UClass* AChurakasVocalChords_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChurakasVocalChords_C");

	return Clss;
}


// ChurakasVocalChords_C ChurakasVocalChords.Default__ChurakasVocalChords_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurakasVocalChords_C* AChurakasVocalChords_C::GetDefaultObj()
{
	static class AChurakasVocalChords_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurakasVocalChords_C*>(AChurakasVocalChords_C::StaticClass()->DefaultObject);

	return Default;
}

}


