#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP__UI_PlayerStandIn.BP__UI_PlayerStandIn_C
// (None)

class UClass* UBP__UI_PlayerStandIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP__UI_PlayerStandIn_C");

	return Clss;
}


// BP__UI_PlayerStandIn_C BP__UI_PlayerStandIn.Default__BP__UI_PlayerStandIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP__UI_PlayerStandIn_C* UBP__UI_PlayerStandIn_C::GetDefaultObj()
{
	static class UBP__UI_PlayerStandIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP__UI_PlayerStandIn_C*>(UBP__UI_PlayerStandIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


