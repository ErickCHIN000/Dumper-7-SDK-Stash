#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_LB_Cast_WandLoop.ElementalEffectCollection_LB_Cast_WandLoop_C
// (None)

class UClass* UElementalEffectCollection_LB_Cast_WandLoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_LB_Cast_WandLoop_C");

	return Clss;
}


// ElementalEffectCollection_LB_Cast_WandLoop_C ElementalEffectCollection_LB_Cast_WandLoop.Default__ElementalEffectCollection_LB_Cast_WandLoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_LB_Cast_WandLoop_C* UElementalEffectCollection_LB_Cast_WandLoop_C::GetDefaultObj()
{
	static class UElementalEffectCollection_LB_Cast_WandLoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_LB_Cast_WandLoop_C*>(UElementalEffectCollection_LB_Cast_WandLoop_C::StaticClass()->DefaultObject);

	return Default;
}

}


