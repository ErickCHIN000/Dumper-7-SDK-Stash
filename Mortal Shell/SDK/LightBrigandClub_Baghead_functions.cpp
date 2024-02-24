#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandClub_Baghead.LightBrigandClub_Baghead_C
// (Actor, Pawn)

class UClass* ALightBrigandClub_Baghead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandClub_Baghead_C");

	return Clss;
}


// LightBrigandClub_Baghead_C LightBrigandClub_Baghead.Default__LightBrigandClub_Baghead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandClub_Baghead_C* ALightBrigandClub_Baghead_C::GetDefaultObj()
{
	static class ALightBrigandClub_Baghead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandClub_Baghead_C*>(ALightBrigandClub_Baghead_C::StaticClass()->DefaultObject);

	return Default;
}

}


