#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_PerkTrade_CommonGradeFood2.LL_PerkTrade_CommonGradeFood2_C
// (Actor)

class UClass* ALL_PerkTrade_CommonGradeFood2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_PerkTrade_CommonGradeFood2_C");

	return Clss;
}


// LL_PerkTrade_CommonGradeFood2_C LL_PerkTrade_CommonGradeFood2.Default__LL_PerkTrade_CommonGradeFood2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_PerkTrade_CommonGradeFood2_C* ALL_PerkTrade_CommonGradeFood2_C::GetDefaultObj()
{
	static class ALL_PerkTrade_CommonGradeFood2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_PerkTrade_CommonGradeFood2_C*>(ALL_PerkTrade_CommonGradeFood2_C::StaticClass()->DefaultObject);

	return Default;
}

}


