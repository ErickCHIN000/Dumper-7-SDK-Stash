#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuccubusMilkNL_G2.SuccubusMilkNL_G2_C
// (None)

class UClass* USuccubusMilkNL_G2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuccubusMilkNL_G2_C");

	return Clss;
}


// SuccubusMilkNL_G2_C SuccubusMilkNL_G2.Default__SuccubusMilkNL_G2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuccubusMilkNL_G2_C* USuccubusMilkNL_G2_C::GetDefaultObj()
{
	static class USuccubusMilkNL_G2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuccubusMilkNL_G2_C*>(USuccubusMilkNL_G2_C::StaticClass()->DefaultObject);

	return Default;
}

}


