#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_01_MoveSpeed.Prestige_Deadeye_01_MoveSpeed_C
// (None)

class UClass* UPrestige_Deadeye_01_MoveSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_01_MoveSpeed_C");

	return Clss;
}


// Prestige_Deadeye_01_MoveSpeed_C Prestige_Deadeye_01_MoveSpeed.Default__Prestige_Deadeye_01_MoveSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_01_MoveSpeed_C* UPrestige_Deadeye_01_MoveSpeed_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_01_MoveSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_01_MoveSpeed_C*>(UPrestige_Deadeye_01_MoveSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


