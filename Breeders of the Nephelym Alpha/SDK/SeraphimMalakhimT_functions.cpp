#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeraphimMalakhimT.SeraphimMalakhimT_C
// (None)

class UClass* USeraphimMalakhimT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeraphimMalakhimT_C");

	return Clss;
}


// SeraphimMalakhimT_C SeraphimMalakhimT.Default__SeraphimMalakhimT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeraphimMalakhimT_C* USeraphimMalakhimT_C::GetDefaultObj()
{
	static class USeraphimMalakhimT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeraphimMalakhimT_C*>(USeraphimMalakhimT_C::StaticClass()->DefaultObject);

	return Default;
}

}


