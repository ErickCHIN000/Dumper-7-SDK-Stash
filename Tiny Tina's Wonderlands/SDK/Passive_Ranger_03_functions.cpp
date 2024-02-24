#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Ranger_03.Passive_Ranger_03_C
// (None)

class UClass* UPassive_Ranger_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Ranger_03_C");

	return Clss;
}


// Passive_Ranger_03_C Passive_Ranger_03.Default__Passive_Ranger_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Ranger_03_C* UPassive_Ranger_03_C::GetDefaultObj()
{
	static class UPassive_Ranger_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Ranger_03_C*>(UPassive_Ranger_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


