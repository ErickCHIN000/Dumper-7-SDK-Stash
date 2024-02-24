#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrosshairInterface.BP_CrosshairInterface_C
// (None)

class UClass* IBP_CrosshairInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrosshairInterface_C");

	return Clss;
}


// BP_CrosshairInterface_C BP_CrosshairInterface.Default__BP_CrosshairInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_CrosshairInterface_C* IBP_CrosshairInterface_C::GetDefaultObj()
{
	static class IBP_CrosshairInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_CrosshairInterface_C*>(IBP_CrosshairInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CrosshairInterface.BP_CrosshairInterface_C.GetCrosshairAimAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AimAlpha                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CrosshairInterface_C::GetCrosshairAimAlpha(float* AimAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CrosshairInterface_C", "GetCrosshairAimAlpha");

	Params::IBP_CrosshairInterface_C_GetCrosshairAimAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AimAlpha != nullptr)
		*AimAlpha = Parms.AimAlpha;

}


// Function BP_CrosshairInterface.BP_CrosshairInterface_C.WantsShowCrosshair
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowCrosshair                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_CrosshairInterface_C::WantsShowCrosshair(bool* bShowCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CrosshairInterface_C", "WantsShowCrosshair");

	Params::IBP_CrosshairInterface_C_WantsShowCrosshair_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bShowCrosshair != nullptr)
		*bShowCrosshair = Parms.bShowCrosshair;

}


// Function BP_CrosshairInterface.BP_CrosshairInterface_C.WantsBowMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWantsBowMode                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_CrosshairInterface_C::WantsBowMode(bool* bWantsBowMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CrosshairInterface_C", "WantsBowMode");

	Params::IBP_CrosshairInterface_C_WantsBowMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bWantsBowMode != nullptr)
		*bWantsBowMode = Parms.bWantsBowMode;

}

}


