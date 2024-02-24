#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothLazyLick_BreederF.SlothLazyLick_BreederF_C
// (None)

class UClass* USlothLazyLick_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothLazyLick_BreederF_C");

	return Clss;
}


// SlothLazyLick_BreederF_C SlothLazyLick_BreederF.Default__SlothLazyLick_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothLazyLick_BreederF_C* USlothLazyLick_BreederF_C::GetDefaultObj()
{
	static class USlothLazyLick_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothLazyLick_BreederF_C*>(USlothLazyLick_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


