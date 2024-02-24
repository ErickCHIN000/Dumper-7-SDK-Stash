#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_QuackerHead.Trophy_QuackerHead_C
// (Actor)

class UClass* ATrophy_QuackerHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_QuackerHead_C");

	return Clss;
}


// Trophy_QuackerHead_C Trophy_QuackerHead.Default__Trophy_QuackerHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_QuackerHead_C* ATrophy_QuackerHead_C::GetDefaultObj()
{
	static class ATrophy_QuackerHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_QuackerHead_C*>(ATrophy_QuackerHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


