#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_Player.BP_Flammable_Player_C
// (None)

class UClass* UBP_Flammable_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_Player_C");

	return Clss;
}


// BP_Flammable_Player_C BP_Flammable_Player.Default__BP_Flammable_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_Player_C* UBP_Flammable_Player_C::GetDefaultObj()
{
	static class UBP_Flammable_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_Player_C*>(UBP_Flammable_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


