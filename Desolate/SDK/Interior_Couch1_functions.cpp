#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Couch1.Interior_Couch1_C
// (Actor)

class UClass* AInterior_Couch1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Couch1_C");

	return Clss;
}


// Interior_Couch1_C Interior_Couch1.Default__Interior_Couch1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Couch1_C* AInterior_Couch1_C::GetDefaultObj()
{
	static class AInterior_Couch1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Couch1_C*>(AInterior_Couch1_C::StaticClass()->DefaultObject);

	return Default;
}

}


