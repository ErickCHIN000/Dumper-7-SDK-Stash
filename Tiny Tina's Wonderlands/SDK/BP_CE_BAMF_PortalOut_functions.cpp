#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BAMF_PortalOut.BP_CE_BAMF_PortalOut_C
// (None)

class UClass* UBP_CE_BAMF_PortalOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BAMF_PortalOut_C");

	return Clss;
}


// BP_CE_BAMF_PortalOut_C BP_CE_BAMF_PortalOut.Default__BP_CE_BAMF_PortalOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BAMF_PortalOut_C* UBP_CE_BAMF_PortalOut_C::GetDefaultObj()
{
	static class UBP_CE_BAMF_PortalOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BAMF_PortalOut_C*>(UBP_CE_BAMF_PortalOut_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_BAMF_PortalOut.BP_CE_BAMF_PortalOut_C.PlayPoofAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CE_BAMF_PortalOut_C::PlayPoofAudio(const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalOut_C", "PlayPoofAudio");

	Params::UBP_CE_BAMF_PortalOut_C_PlayPoofAudio_Params Parms{};

	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_GetMaxElement_ReturnValue = CallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PortalOut.BP_CE_BAMF_PortalOut_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PortalOut_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalOut_C", "OnBegin");

	Params::UBP_CE_BAMF_PortalOut_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PortalOut.BP_CE_BAMF_PortalOut_C.ExecuteUbergraph_BP_CE_BAMF_PortalOut
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PortalOut_C::ExecuteUbergraph_BP_CE_BAMF_PortalOut(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalOut_C", "ExecuteUbergraph_BP_CE_BAMF_PortalOut");

	Params::UBP_CE_BAMF_PortalOut_C_ExecuteUbergraph_BP_CE_BAMF_PortalOut_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


