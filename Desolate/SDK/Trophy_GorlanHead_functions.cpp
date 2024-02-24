#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_GorlanHead.Trophy_GorlanHead_C
// (Actor)

class UClass* ATrophy_GorlanHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_GorlanHead_C");

	return Clss;
}


// Trophy_GorlanHead_C Trophy_GorlanHead.Default__Trophy_GorlanHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_GorlanHead_C* ATrophy_GorlanHead_C::GetDefaultObj()
{
	static class ATrophy_GorlanHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_GorlanHead_C*>(ATrophy_GorlanHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


