#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Economy_COOPTrade.Challenge_Economy_COOPTrade_C
// (None)

class UClass* UChallenge_Economy_COOPTrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Economy_COOPTrade_C");

	return Clss;
}


// Challenge_Economy_COOPTrade_C Challenge_Economy_COOPTrade.Default__Challenge_Economy_COOPTrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Economy_COOPTrade_C* UChallenge_Economy_COOPTrade_C::GetDefaultObj()
{
	static class UChallenge_Economy_COOPTrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Economy_COOPTrade_C*>(UChallenge_Economy_COOPTrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


