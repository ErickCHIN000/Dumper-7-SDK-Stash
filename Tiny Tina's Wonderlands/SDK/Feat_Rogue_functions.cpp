#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Feat_Rogue.Feat_Rogue_C
// (None)

class UClass* UFeat_Rogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Feat_Rogue_C");

	return Clss;
}


// Feat_Rogue_C Feat_Rogue.Default__Feat_Rogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeat_Rogue_C* UFeat_Rogue_C::GetDefaultObj()
{
	static class UFeat_Rogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeat_Rogue_C*>(UFeat_Rogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


