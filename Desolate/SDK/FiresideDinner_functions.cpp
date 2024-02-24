#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FiresideDinner.FiresideDinner_C
// (Actor)

class UClass* AFiresideDinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FiresideDinner_C");

	return Clss;
}


// FiresideDinner_C FiresideDinner.Default__FiresideDinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFiresideDinner_C* AFiresideDinner_C::GetDefaultObj()
{
	static class AFiresideDinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFiresideDinner_C*>(AFiresideDinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


