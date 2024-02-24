#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InteractiveFoliageSystem.IFInteractiveFoliageActor
// (Actor)

class UClass* AIFInteractiveFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFInteractiveFoliageActor");

	return Clss;
}


// IFInteractiveFoliageActor InteractiveFoliageSystem.Default__IFInteractiveFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AIFInteractiveFoliageActor* AIFInteractiveFoliageActor::GetDefaultObj()
{
	static class AIFInteractiveFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AIFInteractiveFoliageActor*>(AIFInteractiveFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveFoliageSystem.IFInvokerComponent
// (None)

class UClass* UIFInvokerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFInvokerComponent");

	return Clss;
}


// IFInvokerComponent InteractiveFoliageSystem.Default__IFInvokerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UIFInvokerComponent* UIFInvokerComponent::GetDefaultObj()
{
	static class UIFInvokerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UIFInvokerComponent*>(UIFInvokerComponent::StaticClass()->DefaultObject);

	return Default;
}

}


