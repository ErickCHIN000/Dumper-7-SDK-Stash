#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trophy_ChurakaHead.Trophy_ChurakaHead_C
// (Actor)

class UClass* ATrophy_ChurakaHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trophy_ChurakaHead_C");

	return Clss;
}


// Trophy_ChurakaHead_C Trophy_ChurakaHead.Default__Trophy_ChurakaHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrophy_ChurakaHead_C* ATrophy_ChurakaHead_C::GetDefaultObj()
{
	static class ATrophy_ChurakaHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrophy_ChurakaHead_C*>(ATrophy_ChurakaHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


