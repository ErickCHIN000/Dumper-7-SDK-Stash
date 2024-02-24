#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_DorgHead.Trophy_DorgHead_C
// (Actor)

class UClass* ATrophy_DorgHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_DorgHead_C");

	return Clss;
}


// Trophy_DorgHead_C Trophy_DorgHead.Default__Trophy_DorgHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_DorgHead_C* ATrophy_DorgHead_C::GetDefaultObj()
{
	static class ATrophy_DorgHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_DorgHead_C*>(ATrophy_DorgHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


