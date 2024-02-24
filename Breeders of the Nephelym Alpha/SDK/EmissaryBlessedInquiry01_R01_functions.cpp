#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryBlessedInquiry01_R01.EmissaryBlessedInquiry01_R01_C
// (None)

class UClass* UEmissaryBlessedInquiry01_R01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryBlessedInquiry01_R01_C");

	return Clss;
}


// EmissaryBlessedInquiry01_R01_C EmissaryBlessedInquiry01_R01.Default__EmissaryBlessedInquiry01_R01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryBlessedInquiry01_R01_C* UEmissaryBlessedInquiry01_R01_C::GetDefaultObj()
{
	static class UEmissaryBlessedInquiry01_R01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryBlessedInquiry01_R01_C*>(UEmissaryBlessedInquiry01_R01_C::StaticClass()->DefaultObject);

	return Default;
}

}


