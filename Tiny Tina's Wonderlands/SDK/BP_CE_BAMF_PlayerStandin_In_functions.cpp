#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BAMF_PlayerStandin_In.BP_CE_BAMF_PlayerStandin_In_C
// (None)

class UClass* UBP_CE_BAMF_PlayerStandin_In_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BAMF_PlayerStandin_In_C");

	return Clss;
}


// BP_CE_BAMF_PlayerStandin_In_C BP_CE_BAMF_PlayerStandin_In.Default__BP_CE_BAMF_PlayerStandin_In_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BAMF_PlayerStandin_In_C* UBP_CE_BAMF_PlayerStandin_In_C::GetDefaultObj()
{
	static class UBP_CE_BAMF_PlayerStandin_In_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BAMF_PlayerStandin_In_C*>(UBP_CE_BAMF_PlayerStandin_In_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_BAMF_PlayerStandin_In.BP_CE_BAMF_PlayerStandin_In_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PlayerStandin_In_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PlayerStandin_In_C", "OnBegin");

	Params::UBP_CE_BAMF_PlayerStandin_In_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PlayerStandin_In.BP_CE_BAMF_PlayerStandin_In_C.ExecuteUbergraph_BP_CE_BAMF_PlayerStandin_In
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)

void UBP_CE_BAMF_PlayerStandin_In_C::ExecuteUbergraph_BP_CE_BAMF_PlayerStandin_In(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_VSize_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PlayerStandin_In_C", "ExecuteUbergraph_BP_CE_BAMF_PlayerStandin_In");

	Params::UBP_CE_BAMF_PlayerStandin_In_C_ExecuteUbergraph_BP_CE_BAMF_PlayerStandin_In_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


