#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Carpet1.Interior_Carpet1_C
// (Actor)

class UClass* AInterior_Carpet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Carpet1_C");

	return Clss;
}


// Interior_Carpet1_C Interior_Carpet1.Default__Interior_Carpet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Carpet1_C* AInterior_Carpet1_C::GetDefaultObj()
{
	static class AInterior_Carpet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Carpet1_C*>(AInterior_Carpet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


