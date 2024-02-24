#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_Couch3.Interior_Couch3_C
// (Actor)

class UClass* AInterior_Couch3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_Couch3_C");

	return Clss;
}


// Interior_Couch3_C Interior_Couch3.Default__Interior_Couch3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_Couch3_C* AInterior_Couch3_C::GetDefaultObj()
{
	static class AInterior_Couch3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_Couch3_C*>(AInterior_Couch3_C::StaticClass()->DefaultObject);

	return Default;
}

}


