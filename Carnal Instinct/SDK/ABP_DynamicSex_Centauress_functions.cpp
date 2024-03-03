#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DynamicSex_Centauress.ABP_DynamicSex_Centauress_C
// (None)

class UClass* UABP_DynamicSex_Centauress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DynamicSex_Centauress_C");

	return Clss;
}


// ABP_DynamicSex_Centauress_C ABP_DynamicSex_Centauress.Default__ABP_DynamicSex_Centauress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DynamicSex_Centauress_C* UABP_DynamicSex_Centauress_C::GetDefaultObj()
{
	static class UABP_DynamicSex_Centauress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DynamicSex_Centauress_C*>(UABP_DynamicSex_Centauress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DynamicSex_Centauress.ABP_DynamicSex_Centauress_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DynamicSex_Centauress_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_Centauress_C", "AnimGraph");

	Params::UABP_DynamicSex_Centauress_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DynamicSex_Centauress.ABP_DynamicSex_Centauress_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DynamicSex_Centauress_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_Centauress_C", "BlueprintUpdateAnimation");

	Params::UABP_DynamicSex_Centauress_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_DynamicSex_Centauress.ABP_DynamicSex_Centauress_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_DynamicSex_Centauress_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_Centauress_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DynamicSex_Centauress.ABP_DynamicSex_Centauress_C.ExecuteUbergraph_ABP_DynamicSex_Centauress
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DynamicSex_Base_Centaur_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_DynamicSex_Centauress_C::ExecuteUbergraph_ABP_DynamicSex_Centauress(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, class ABP_DynamicSex_Base_Centaur_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DynamicSex_Centauress_C", "ExecuteUbergraph_ABP_DynamicSex_Centauress");

	Params::UABP_DynamicSex_Centauress_C_ExecuteUbergraph_ABP_DynamicSex_Centauress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


