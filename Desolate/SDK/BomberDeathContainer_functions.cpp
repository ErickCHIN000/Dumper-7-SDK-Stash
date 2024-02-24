#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BomberDeathContainer.BomberDeathContainer_C
// (Actor)

class UClass* ABomberDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BomberDeathContainer_C");

	return Clss;
}


// BomberDeathContainer_C BomberDeathContainer.Default__BomberDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABomberDeathContainer_C* ABomberDeathContainer_C::GetDefaultObj()
{
	static class ABomberDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABomberDeathContainer_C*>(ABomberDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


