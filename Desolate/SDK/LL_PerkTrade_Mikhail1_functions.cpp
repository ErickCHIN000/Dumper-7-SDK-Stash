#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_PerkTrade_Mikhail1.LL_PerkTrade_Mikhail1_C
// (Actor)

class UClass* ALL_PerkTrade_Mikhail1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_PerkTrade_Mikhail1_C");

	return Clss;
}


// LL_PerkTrade_Mikhail1_C LL_PerkTrade_Mikhail1.Default__LL_PerkTrade_Mikhail1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_PerkTrade_Mikhail1_C* ALL_PerkTrade_Mikhail1_C::GetDefaultObj()
{
	static class ALL_PerkTrade_Mikhail1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_PerkTrade_Mikhail1_C*>(ALL_PerkTrade_Mikhail1_C::StaticClass()->DefaultObject);

	return Default;
}

}


