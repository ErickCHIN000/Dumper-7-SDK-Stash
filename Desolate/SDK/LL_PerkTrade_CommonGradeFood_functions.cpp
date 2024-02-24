#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_PerkTrade_CommonGradeFood.LL_PerkTrade_CommonGradeFood_C
// (Actor)

class UClass* ALL_PerkTrade_CommonGradeFood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_PerkTrade_CommonGradeFood_C");

	return Clss;
}


// LL_PerkTrade_CommonGradeFood_C LL_PerkTrade_CommonGradeFood.Default__LL_PerkTrade_CommonGradeFood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_PerkTrade_CommonGradeFood_C* ALL_PerkTrade_CommonGradeFood_C::GetDefaultObj()
{
	static class ALL_PerkTrade_CommonGradeFood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_PerkTrade_CommonGradeFood_C*>(ALL_PerkTrade_CommonGradeFood_C::StaticClass()->DefaultObject);

	return Default;
}

}


