#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cigar_Crafted.Cigar_Crafted_C
// (Actor)

class UClass* ACigar_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cigar_Crafted_C");

	return Clss;
}


// Cigar_Crafted_C Cigar_Crafted.Default__Cigar_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACigar_Crafted_C* ACigar_Crafted_C::GetDefaultObj()
{
	static class ACigar_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACigar_Crafted_C*>(ACigar_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


