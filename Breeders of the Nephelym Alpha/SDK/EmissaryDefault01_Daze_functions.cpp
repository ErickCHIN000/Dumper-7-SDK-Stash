#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_Daze.EmissaryDefault01_Daze_C
// (None)

class UClass* UEmissaryDefault01_Daze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_Daze_C");

	return Clss;
}


// EmissaryDefault01_Daze_C EmissaryDefault01_Daze.Default__EmissaryDefault01_Daze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_Daze_C* UEmissaryDefault01_Daze_C::GetDefaultObj()
{
	static class UEmissaryDefault01_Daze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_Daze_C*>(UEmissaryDefault01_Daze_C::StaticClass()->DefaultObject);

	return Default;
}

}


