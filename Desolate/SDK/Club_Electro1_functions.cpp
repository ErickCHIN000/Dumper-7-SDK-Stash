#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Club_Electro1.Club_Electro1_C
// (Actor)

class UClass* AClub_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Club_Electro1_C");

	return Clss;
}


// Club_Electro1_C Club_Electro1.Default__Club_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClub_Electro1_C* AClub_Electro1_C::GetDefaultObj()
{
	static class AClub_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClub_Electro1_C*>(AClub_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


