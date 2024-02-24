#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIChallengeProvider.BP_UIChallengeProvider_C
// (None)

class UClass* UBP_UIChallengeProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIChallengeProvider_C");

	return Clss;
}


// BP_UIChallengeProvider_C BP_UIChallengeProvider.Default__BP_UIChallengeProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIChallengeProvider_C* UBP_UIChallengeProvider_C::GetDefaultObj()
{
	static class UBP_UIChallengeProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIChallengeProvider_C*>(UBP_UIChallengeProvider_C::StaticClass()->DefaultObject);

	return Default;
}

}


