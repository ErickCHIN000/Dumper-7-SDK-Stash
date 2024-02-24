#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_SapsyHead.Trophy_SapsyHead_C
// (Actor)

class UClass* ATrophy_SapsyHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_SapsyHead_C");

	return Clss;
}


// Trophy_SapsyHead_C Trophy_SapsyHead.Default__Trophy_SapsyHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_SapsyHead_C* ATrophy_SapsyHead_C::GetDefaultObj()
{
	static class ATrophy_SapsyHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_SapsyHead_C*>(ATrophy_SapsyHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


