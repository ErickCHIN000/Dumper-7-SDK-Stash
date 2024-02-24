#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_SexPositions.EmissaryDefault01_SexPositions_C
// (None)

class UClass* UEmissaryDefault01_SexPositions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_SexPositions_C");

	return Clss;
}


// EmissaryDefault01_SexPositions_C EmissaryDefault01_SexPositions.Default__EmissaryDefault01_SexPositions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_SexPositions_C* UEmissaryDefault01_SexPositions_C::GetDefaultObj()
{
	static class UEmissaryDefault01_SexPositions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_SexPositions_C*>(UEmissaryDefault01_SexPositions_C::StaticClass()->DefaultObject);

	return Default;
}

}


