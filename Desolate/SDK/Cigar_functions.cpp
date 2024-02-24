#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cigar.Cigar_C
// (Actor)

class UClass* ACigar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cigar_C");

	return Clss;
}


// Cigar_C Cigar.Default__Cigar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACigar_C* ACigar_C::GetDefaultObj()
{
	static class ACigar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACigar_C*>(ACigar_C::StaticClass()->DefaultObject);

	return Default;
}

}


