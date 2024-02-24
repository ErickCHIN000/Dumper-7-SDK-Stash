#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_GrutchHead.Trophy_GrutchHead_C
// (Actor)

class UClass* ATrophy_GrutchHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_GrutchHead_C");

	return Clss;
}


// Trophy_GrutchHead_C Trophy_GrutchHead.Default__Trophy_GrutchHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_GrutchHead_C* ATrophy_GrutchHead_C::GetDefaultObj()
{
	static class ATrophy_GrutchHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_GrutchHead_C*>(ATrophy_GrutchHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


