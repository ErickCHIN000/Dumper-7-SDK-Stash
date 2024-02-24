#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StationDetail.StationDetail_C
// (Actor)

class UClass* AStationDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StationDetail_C");

	return Clss;
}


// StationDetail_C StationDetail.Default__StationDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStationDetail_C* AStationDetail_C::GetDefaultObj()
{
	static class AStationDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStationDetail_C*>(AStationDetail_C::StaticClass()->DefaultObject);

	return Default;
}

}


