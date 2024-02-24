#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_SellMonsters.EmissaryDefault01_SellMonsters_C
// (None)

class UClass* UEmissaryDefault01_SellMonsters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_SellMonsters_C");

	return Clss;
}


// EmissaryDefault01_SellMonsters_C EmissaryDefault01_SellMonsters.Default__EmissaryDefault01_SellMonsters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_SellMonsters_C* UEmissaryDefault01_SellMonsters_C::GetDefaultObj()
{
	static class UEmissaryDefault01_SellMonsters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_SellMonsters_C*>(UEmissaryDefault01_SellMonsters_C::StaticClass()->DefaultObject);

	return Default;
}

}


