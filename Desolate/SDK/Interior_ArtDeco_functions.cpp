#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interior_ArtDeco.Interior_ArtDeco_C
// (Actor)

class UClass* AInterior_ArtDeco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interior_ArtDeco_C");

	return Clss;
}


// Interior_ArtDeco_C Interior_ArtDeco.Default__Interior_ArtDeco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInterior_ArtDeco_C* AInterior_ArtDeco_C::GetDefaultObj()
{
	static class AInterior_ArtDeco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInterior_ArtDeco_C*>(AInterior_ArtDeco_C::StaticClass()->DefaultObject);

	return Default;
}

}


