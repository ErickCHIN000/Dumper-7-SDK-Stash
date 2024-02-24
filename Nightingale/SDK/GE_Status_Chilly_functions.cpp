#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Status_Chilly.GE_Status_Chilly_C
// (None)

class UClass* UGE_Status_Chilly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Status_Chilly_C");

	return Clss;
}


// GE_Status_Chilly_C GE_Status_Chilly.Default__GE_Status_Chilly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Status_Chilly_C* UGE_Status_Chilly_C::GetDefaultObj()
{
	static class UGE_Status_Chilly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Status_Chilly_C*>(UGE_Status_Chilly_C::StaticClass()->DefaultObject);

	return Default;
}

}


