#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBoss_SmallMilitary.BP_ZombieBoss_SmallMilitary_C
// (Actor, Pawn)

class UClass* ABP_ZombieBoss_SmallMilitary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBoss_SmallMilitary_C");

	return Clss;
}


// BP_ZombieBoss_SmallMilitary_C BP_ZombieBoss_SmallMilitary.Default__BP_ZombieBoss_SmallMilitary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBoss_SmallMilitary_C* ABP_ZombieBoss_SmallMilitary_C::GetDefaultObj()
{
	static class ABP_ZombieBoss_SmallMilitary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBoss_SmallMilitary_C*>(ABP_ZombieBoss_SmallMilitary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZombieBoss_SmallMilitary.BP_ZombieBoss_SmallMilitary_C.GetMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MarkerOffset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBoss_SmallMilitary_C::GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBoss_SmallMilitary_C", "GetMarker");

	Params::ABP_ZombieBoss_SmallMilitary_C_GetMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (MarkerOffset != nullptr)
		*MarkerOffset = Parms.MarkerOffset;

}

}


