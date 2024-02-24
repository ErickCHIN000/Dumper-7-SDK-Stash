#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_HumanMeat.LL_HumanMeat_C
// (Actor)

class UClass* ALL_HumanMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_HumanMeat_C");

	return Clss;
}


// LL_HumanMeat_C LL_HumanMeat.Default__LL_HumanMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_HumanMeat_C* ALL_HumanMeat_C::GetDefaultObj()
{
	static class ALL_HumanMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_HumanMeat_C*>(ALL_HumanMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


