#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurMilkNN_G.MinotaurMilkNN_G_C
// (None)

class UClass* UMinotaurMilkNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurMilkNN_G_C");

	return Clss;
}


// MinotaurMilkNN_G_C MinotaurMilkNN_G.Default__MinotaurMilkNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurMilkNN_G_C* UMinotaurMilkNN_G_C::GetDefaultObj()
{
	static class UMinotaurMilkNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurMilkNN_G_C*>(UMinotaurMilkNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


