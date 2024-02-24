#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyStaminaDepleted.GE_ApplyStaminaDepleted_C
// (None)

class UClass* UGE_ApplyStaminaDepleted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyStaminaDepleted_C");

	return Clss;
}


// GE_ApplyStaminaDepleted_C GE_ApplyStaminaDepleted.Default__GE_ApplyStaminaDepleted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyStaminaDepleted_C* UGE_ApplyStaminaDepleted_C::GetDefaultObj()
{
	static class UGE_ApplyStaminaDepleted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyStaminaDepleted_C*>(UGE_ApplyStaminaDepleted_C::StaticClass()->DefaultObject);

	return Default;
}

}


