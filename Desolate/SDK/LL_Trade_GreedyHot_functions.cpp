#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trade_GreedyHot.LL_Trade_GreedyHot_C
// (Actor)

class UClass* ALL_Trade_GreedyHot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trade_GreedyHot_C");

	return Clss;
}


// LL_Trade_GreedyHot_C LL_Trade_GreedyHot.Default__LL_Trade_GreedyHot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trade_GreedyHot_C* ALL_Trade_GreedyHot_C::GetDefaultObj()
{
	static class ALL_Trade_GreedyHot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trade_GreedyHot_C*>(ALL_Trade_GreedyHot_C::StaticClass()->DefaultObject);

	return Default;
}

}


