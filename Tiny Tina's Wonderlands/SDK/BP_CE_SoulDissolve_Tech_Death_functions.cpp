#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_SoulDissolve_Tech_Death.BP_CE_SoulDissolve_Tech_Death_C
// (None)

class UClass* UBP_CE_SoulDissolve_Tech_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_SoulDissolve_Tech_Death_C");

	return Clss;
}


// BP_CE_SoulDissolve_Tech_Death_C BP_CE_SoulDissolve_Tech_Death.Default__BP_CE_SoulDissolve_Tech_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_SoulDissolve_Tech_Death_C* UBP_CE_SoulDissolve_Tech_Death_C::GetDefaultObj()
{
	static class UBP_CE_SoulDissolve_Tech_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_SoulDissolve_Tech_Death_C*>(UBP_CE_SoulDissolve_Tech_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_SoulDissolve_Tech_Death.BP_CE_SoulDissolve_Tech_Death_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_SoulDissolve_Tech_Death_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_SoulDissolve_Tech_Death_C", "OnBegin");

	Params::UBP_CE_SoulDissolve_Tech_Death_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_SoulDissolve_Tech_Death.BP_CE_SoulDissolve_Tech_Death_C.ExecuteUbergraph_BP_CE_SoulDissolve_Tech_Death
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxSkeletalMeshComponent*   Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxSkeletalMeshComponent*   K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)

void UBP_CE_SoulDissolve_Tech_Death_C::ExecuteUbergraph_BP_CE_SoulDissolve_Tech_Death(int32 EntryPoint, bool Temp_bool_Variable, class UGbxSkeletalMeshComponent* Temp_object_Variable, class AActor* K2Node_Event_Actor, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGbxSkeletalMeshComponent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_SoulDissolve_Tech_Death_C", "ExecuteUbergraph_BP_CE_SoulDissolve_Tech_Death");

	Params::UBP_CE_SoulDissolve_Tech_Death_C_ExecuteUbergraph_BP_CE_SoulDissolve_Tech_Death_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


