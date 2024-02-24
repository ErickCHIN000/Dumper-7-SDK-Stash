#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryBlessedInquiry01_RL.EmissaryBlessedInquiry01_RL_C
// (None)

class UClass* UEmissaryBlessedInquiry01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryBlessedInquiry01_RL_C");

	return Clss;
}


// EmissaryBlessedInquiry01_RL_C EmissaryBlessedInquiry01_RL.Default__EmissaryBlessedInquiry01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryBlessedInquiry01_RL_C* UEmissaryBlessedInquiry01_RL_C::GetDefaultObj()
{
	static class UEmissaryBlessedInquiry01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryBlessedInquiry01_RL_C*>(UEmissaryBlessedInquiry01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


