#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanRabbit.CanRabbit_C
// (Actor)

class UClass* ACanRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanRabbit_C");

	return Clss;
}


// CanRabbit_C CanRabbit.Default__CanRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACanRabbit_C* ACanRabbit_C::GetDefaultObj()
{
	static class ACanRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACanRabbit_C*>(ACanRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


