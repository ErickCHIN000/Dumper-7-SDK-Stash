#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Wood.Interior_Wood_C
// (Actor)

class UClass* AInterior_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Wood_C");

	return Clss;
}


// Interior_Wood_C Interior_Wood.Default__Interior_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Wood_C* AInterior_Wood_C::GetDefaultObj()
{
	static class AInterior_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Wood_C*>(AInterior_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


