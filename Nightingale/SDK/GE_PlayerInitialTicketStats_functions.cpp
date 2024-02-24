#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerInitialTicketStats.GE_PlayerInitialTicketStats_C
// (None)

class UClass* UGE_PlayerInitialTicketStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerInitialTicketStats_C");

	return Clss;
}


// GE_PlayerInitialTicketStats_C GE_PlayerInitialTicketStats.Default__GE_PlayerInitialTicketStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerInitialTicketStats_C* UGE_PlayerInitialTicketStats_C::GetDefaultObj()
{
	static class UGE_PlayerInitialTicketStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerInitialTicketStats_C*>(UGE_PlayerInitialTicketStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


