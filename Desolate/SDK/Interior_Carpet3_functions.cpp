#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Carpet3.Interior_Carpet3_C
// (Actor)

class UClass* AInterior_Carpet3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Carpet3_C");

	return Clss;
}


// Interior_Carpet3_C Interior_Carpet3.Default__Interior_Carpet3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Carpet3_C* AInterior_Carpet3_C::GetDefaultObj()
{
	static class AInterior_Carpet3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Carpet3_C*>(AInterior_Carpet3_C::StaticClass()->DefaultObject);

	return Default;
}

}


