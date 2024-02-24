#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryBlessedInquiry02_R01.EmissaryBlessedInquiry02_R01_C
// (None)

class UClass* UEmissaryBlessedInquiry02_R01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryBlessedInquiry02_R01_C");

	return Clss;
}


// EmissaryBlessedInquiry02_R01_C EmissaryBlessedInquiry02_R01.Default__EmissaryBlessedInquiry02_R01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryBlessedInquiry02_R01_C* UEmissaryBlessedInquiry02_R01_C::GetDefaultObj()
{
	static class UEmissaryBlessedInquiry02_R01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryBlessedInquiry02_R01_C*>(UEmissaryBlessedInquiry02_R01_C::StaticClass()->DefaultObject);

	return Default;
}

}


