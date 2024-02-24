#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureInitialStats.GE_CreatureInitialStats_C
// (None)

class UClass* UGE_CreatureInitialStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureInitialStats_C");

	return Clss;
}


// GE_CreatureInitialStats_C GE_CreatureInitialStats.Default__GE_CreatureInitialStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureInitialStats_C* UGE_CreatureInitialStats_C::GetDefaultObj()
{
	static class UGE_CreatureInitialStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureInitialStats_C*>(UGE_CreatureInitialStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


