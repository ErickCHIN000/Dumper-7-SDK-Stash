#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Couch2.Interior_Couch2_C
// (Actor)

class UClass* AInterior_Couch2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Couch2_C");

	return Clss;
}


// Interior_Couch2_C Interior_Couch2.Default__Interior_Couch2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Couch2_C* AInterior_Couch2_C::GetDefaultObj()
{
	static class AInterior_Couch2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Couch2_C*>(AInterior_Couch2_C::StaticClass()->DefaultObject);

	return Default;
}

}


