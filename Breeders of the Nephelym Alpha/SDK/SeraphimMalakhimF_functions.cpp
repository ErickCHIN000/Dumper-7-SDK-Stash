#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeraphimMalakhimF.SeraphimMalakhimF_C
// (None)

class UClass* USeraphimMalakhimF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeraphimMalakhimF_C");

	return Clss;
}


// SeraphimMalakhimF_C SeraphimMalakhimF.Default__SeraphimMalakhimF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeraphimMalakhimF_C* USeraphimMalakhimF_C::GetDefaultObj()
{
	static class USeraphimMalakhimF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeraphimMalakhimF_C*>(USeraphimMalakhimF_C::StaticClass()->DefaultObject);

	return Default;
}

}


