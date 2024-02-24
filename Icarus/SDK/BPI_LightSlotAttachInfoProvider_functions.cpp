#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LightSlotAttachInfoProvider.BPI_LightSlotAttachInfoProvider_C
// (None)

class UClass* IBPI_LightSlotAttachInfoProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LightSlotAttachInfoProvider_C");

	return Clss;
}


// BPI_LightSlotAttachInfoProvider_C BPI_LightSlotAttachInfoProvider.Default__BPI_LightSlotAttachInfoProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LightSlotAttachInfoProvider_C* IBPI_LightSlotAttachInfoProvider_C::GetDefaultObj()
{
	static class IBPI_LightSlotAttachInfoProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LightSlotAttachInfoProvider_C*>(IBPI_LightSlotAttachInfoProvider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LightSlotAttachInfoProvider.BPI_LightSlotAttachInfoProvider_C.GetLightSlotAttachPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELightSlotAttachPoint   AttachPoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LightSlotAttachInfoProvider_C::GetLightSlotAttachPoint(enum class ELightSlotAttachPoint* AttachPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LightSlotAttachInfoProvider_C", "GetLightSlotAttachPoint");

	Params::IBPI_LightSlotAttachInfoProvider_C_GetLightSlotAttachPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttachPoint != nullptr)
		*AttachPoint = Parms.AttachPoint;

}

}


