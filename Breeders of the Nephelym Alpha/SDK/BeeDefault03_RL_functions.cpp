#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeDefault03_RL.BeeDefault03_RL_C
// (None)

class UClass* UBeeDefault03_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeDefault03_RL_C");

	return Clss;
}


// BeeDefault03_RL_C BeeDefault03_RL.Default__BeeDefault03_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeDefault03_RL_C* UBeeDefault03_RL_C::GetDefaultObj()
{
	static class UBeeDefault03_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeDefault03_RL_C*>(UBeeDefault03_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


