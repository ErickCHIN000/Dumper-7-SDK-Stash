#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_EH_Cast_Loop.ElementalEffectCollection_EH_Cast_Loop_C
// (None)

class UClass* UElementalEffectCollection_EH_Cast_Loop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_EH_Cast_Loop_C");

	return Clss;
}


// ElementalEffectCollection_EH_Cast_Loop_C ElementalEffectCollection_EH_Cast_Loop.Default__ElementalEffectCollection_EH_Cast_Loop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_EH_Cast_Loop_C* UElementalEffectCollection_EH_Cast_Loop_C::GetDefaultObj()
{
	static class UElementalEffectCollection_EH_Cast_Loop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_EH_Cast_Loop_C*>(UElementalEffectCollection_EH_Cast_Loop_C::StaticClass()->DefaultObject);

	return Default;
}

}


