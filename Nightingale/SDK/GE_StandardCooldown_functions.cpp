#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StandardCooldown.GE_StandardCooldown_C
// (None)

class UClass* UGE_StandardCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StandardCooldown_C");

	return Clss;
}


// GE_StandardCooldown_C GE_StandardCooldown.Default__GE_StandardCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StandardCooldown_C* UGE_StandardCooldown_C::GetDefaultObj()
{
	static class UGE_StandardCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StandardCooldown_C*>(UGE_StandardCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


