#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HumanDissolveIn.GE_HumanDissolveIn_C
// (None)

class UClass* UGE_HumanDissolveIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HumanDissolveIn_C");

	return Clss;
}


// GE_HumanDissolveIn_C GE_HumanDissolveIn.Default__GE_HumanDissolveIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HumanDissolveIn_C* UGE_HumanDissolveIn_C::GetDefaultObj()
{
	static class UGE_HumanDissolveIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HumanDissolveIn_C*>(UGE_HumanDissolveIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


