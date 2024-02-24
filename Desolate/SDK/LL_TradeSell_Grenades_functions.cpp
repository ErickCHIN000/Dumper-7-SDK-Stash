#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_TradeSell_Grenades.LL_TradeSell_Grenades_C
// (Actor)

class UClass* ALL_TradeSell_Grenades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_TradeSell_Grenades_C");

	return Clss;
}


// LL_TradeSell_Grenades_C LL_TradeSell_Grenades.Default__LL_TradeSell_Grenades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_TradeSell_Grenades_C* ALL_TradeSell_Grenades_C::GetDefaultObj()
{
	static class ALL_TradeSell_Grenades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_TradeSell_Grenades_C*>(ALL_TradeSell_Grenades_C::StaticClass()->DefaultObject);

	return Default;
}

}


