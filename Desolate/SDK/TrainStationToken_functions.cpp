#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainStationToken.TrainStationToken_C
// (Actor)

class UClass* ATrainStationToken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainStationToken_C");

	return Clss;
}


// TrainStationToken_C TrainStationToken.Default__TrainStationToken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrainStationToken_C* ATrainStationToken_C::GetDefaultObj()
{
	static class ATrainStationToken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrainStationToken_C*>(ATrainStationToken_C::StaticClass()->DefaultObject);

	return Default;
}

}


