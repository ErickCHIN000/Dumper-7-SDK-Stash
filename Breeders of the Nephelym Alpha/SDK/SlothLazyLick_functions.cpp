#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothLazyLick.SlothLazyLick_C
// (None)

class UClass* USlothLazyLick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothLazyLick_C");

	return Clss;
}


// SlothLazyLick_C SlothLazyLick.Default__SlothLazyLick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothLazyLick_C* USlothLazyLick_C::GetDefaultObj()
{
	static class USlothLazyLick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothLazyLick_C*>(USlothLazyLick_C::StaticClass()->DefaultObject);

	return Default;
}

}


