#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ring_GunType_SR_MagSize.Init_Ring_GunType_SR_MagSize_C
// (None)

class UClass* UInit_Ring_GunType_SR_MagSize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ring_GunType_SR_MagSize_C");

	return Clss;
}


// Init_Ring_GunType_SR_MagSize_C Init_Ring_GunType_SR_MagSize.Default__Init_Ring_GunType_SR_MagSize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ring_GunType_SR_MagSize_C* UInit_Ring_GunType_SR_MagSize_C::GetDefaultObj()
{
	static class UInit_Ring_GunType_SR_MagSize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ring_GunType_SR_MagSize_C*>(UInit_Ring_GunType_SR_MagSize_C::StaticClass()->DefaultObject);

	return Default;
}

}


