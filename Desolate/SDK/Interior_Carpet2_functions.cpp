#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Carpet2.Interior_Carpet2_C
// (Actor)

class UClass* AInterior_Carpet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Carpet2_C");

	return Clss;
}


// Interior_Carpet2_C Interior_Carpet2.Default__Interior_Carpet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Carpet2_C* AInterior_Carpet2_C::GetDefaultObj()
{
	static class AInterior_Carpet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Carpet2_C*>(AInterior_Carpet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


