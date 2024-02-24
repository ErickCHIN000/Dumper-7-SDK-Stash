#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuccubusMilkNL_R2.SuccubusMilkNL_R2_C
// (None)

class UClass* USuccubusMilkNL_R2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuccubusMilkNL_R2_C");

	return Clss;
}


// SuccubusMilkNL_R2_C SuccubusMilkNL_R2.Default__SuccubusMilkNL_R2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuccubusMilkNL_R2_C* USuccubusMilkNL_R2_C::GetDefaultObj()
{
	static class USuccubusMilkNL_R2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuccubusMilkNL_R2_C*>(USuccubusMilkNL_R2_C::StaticClass()->DefaultObject);

	return Default;
}

}


