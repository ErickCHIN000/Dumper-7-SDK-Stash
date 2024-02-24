#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAnointedFreezeComponent.BPAnointedFreezeComponent_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent)

class UClass* UBPAnointedFreezeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnointedFreezeComponent_C");

	return Clss;
}


// BPAnointedFreezeComponent_C BPAnointedFreezeComponent.Default__BPAnointedFreezeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnointedFreezeComponent_C* UBPAnointedFreezeComponent_C::GetDefaultObj()
{
	static class UBPAnointedFreezeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnointedFreezeComponent_C*>(UBPAnointedFreezeComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


