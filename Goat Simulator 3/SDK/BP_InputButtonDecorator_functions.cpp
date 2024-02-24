#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InputButtonDecorator.BP_InputButtonDecorator_C
// (None)

class UClass* UBP_InputButtonDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InputButtonDecorator_C");

	return Clss;
}


// BP_InputButtonDecorator_C BP_InputButtonDecorator.Default__BP_InputButtonDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InputButtonDecorator_C* UBP_InputButtonDecorator_C::GetDefaultObj()
{
	static class UBP_InputButtonDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InputButtonDecorator_C*>(UBP_InputButtonDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


