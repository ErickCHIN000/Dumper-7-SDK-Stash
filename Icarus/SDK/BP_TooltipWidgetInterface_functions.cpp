#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C
// (None)

class UClass* IBP_TooltipWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TooltipWidgetInterface_C");

	return Clss;
}


// BP_TooltipWidgetInterface_C BP_TooltipWidgetInterface.Default__BP_TooltipWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_TooltipWidgetInterface_C* IBP_TooltipWidgetInterface_C::GetDefaultObj()
{
	static class IBP_TooltipWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_TooltipWidgetInterface_C*>(IBP_TooltipWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C.GetTooltipClassOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UHuntingWidget>ClassOverride                                                    (Parm, OutParm, HasGetValueTypeHash)

void IBP_TooltipWidgetInterface_C::GetTooltipClassOverride(TSoftClassPtr<class UHuntingWidget>* ClassOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TooltipWidgetInterface_C", "GetTooltipClassOverride");

	Params::IBP_TooltipWidgetInterface_C_GetTooltipClassOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ClassOverride != nullptr)
		*ClassOverride = Parms.ClassOverride;

}


// Function BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C.GetTooltipRenderLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FHitResult                  InteractableHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_TooltipWidgetInterface_C::GetTooltipRenderLocation(const struct FHitResult& InteractableHit, struct FVector* WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TooltipWidgetInterface_C", "GetTooltipRenderLocation");

	Params::IBP_TooltipWidgetInterface_C_GetTooltipRenderLocation_Params Parms{};

	Parms.InteractableHit = InteractableHit;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

}

}


