#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FX_DistantFog.BP_FX_DistantFog_C
// (Actor)

class UClass* ABP_FX_DistantFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FX_DistantFog_C");

	return Clss;
}


// BP_FX_DistantFog_C BP_FX_DistantFog.Default__BP_FX_DistantFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FX_DistantFog_C* ABP_FX_DistantFog_C::GetDefaultObj()
{
	static class ABP_FX_DistantFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FX_DistantFog_C*>(ABP_FX_DistantFog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FX_DistantFog.BP_FX_DistantFog_C.UpdateScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AtmosphereController_C*  AtmosController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDistFogScale_Scale                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FX_DistantFog_C::UpdateScale(class ABP_AtmosphereController_C* AtmosController, const struct FVector& CallFunc_GetDistFogScale_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_DistantFog_C", "UpdateScale");

	Params::ABP_FX_DistantFog_C_UpdateScale_Params Parms{};

	Parms.AtmosController = AtmosController;
	Parms.CallFunc_GetDistFogScale_Scale = CallFunc_GetDistFogScale_Scale;

	UObject::ProcessEvent(Func, &Parms);

}

}


